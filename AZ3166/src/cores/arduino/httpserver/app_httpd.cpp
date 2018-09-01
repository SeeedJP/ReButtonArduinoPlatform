/**
 ******************************************************************************
 * @file    app_https.c
 * @author  QQ DING
 * @version V1.0.0
 * @date    1-September-2015
 * @brief   The main HTTPD server initialization and wsgi handle.
 ******************************************************************************
 *
 *  The MIT License
 *  Copyright (c) 2016 MXCHIP Inc.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is furnished
 *  to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
 *  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 ******************************************************************************
 */

#include "Arduino.h"
#include "EEPROMInterface.h"
#include <httpd.h>
#include "mico.h"
#include "app_httpd.h"
#include "OledDisplay.h"
#include "EMW10xxInterface.h"
#include "SystemVariables.h"
#include "parson.h"

#define app_httpd_log(...)

#define HTTPD_HDR_DEFORT (HTTPD_HDR_ADD_SERVER|HTTPD_HDR_ADD_CONN_CLOSE|HTTPD_HDR_ADD_PRAGMA_NO_CACHE)

extern OLEDDisplay Screen;
extern NetworkInterface *network;

bool is_http_init;
bool is_handlers_registered;

int write_eeprom(char* string, int idxZone)
{
  int result;
  EEPROMInterface eeprom;
  int len = strlen(string) + 1;

  // Write data to EEPROM
  result = eeprom.write((uint8_t*)string, len, idxZone);
  if (result)
  {
    app_httpd_log("ERROR: Failed to write EEPROM");
    return -1;
  }

  // Verify
  uint8_t *pBuff = (uint8_t*)malloc(len);
  result = eeprom.read(pBuff, len, 0x00, idxZone);
  if (result != len || strncmp(string, (char*)pBuff, len) != 0)
  {
    app_httpd_log("ERROR: Verify failed.\r\n");
    return -1;
  }
  free(pBuff);
  return 0;
}

bool connect_wifi(char *value_ssid, char *value_pass)
{
  int len = strlen(value_ssid);
  if (len == 0 || len > WIFI_SSID_MAX_LEN)
  {
    return false;
  }

  len = strlen(value_pass);
  if (len > WIFI_PWD_MAX_LEN)
  {
    return false;
  }

  Screen.clean();
  Screen.print("WiFi \r\n \r\nConnecting...\r\n \r\n");

  if (network == NULL)
  {
    network = new EMW10xxInterface();
  }

  ((EMW10xxInterface*)network)->set_interface(Station);
  int err = ((EMW10xxInterface*)network)->connect( (char*)value_ssid, (char*)value_pass, NSAPI_SECURITY_WPA_WPA2, 0 );
  if (err != 0)
  {
    Screen.print("WiFi \r\n \r\nNo connection \r\n \r\n");
    return false;
  }
  else
  {
    char wifiBuff[128];
    sprintf(wifiBuff, "WiFi \r\n %s\r\n %s \r\n \r\n", value_ssid, network->get_ip_address());
    Screen.print(wifiBuff);
  }

  err = write_eeprom(value_ssid, WIFI_SSID_ZONE_IDX);
  if (err != 0)
  {
    return false;
  }
  err = write_eeprom(value_pass, WIFI_PWD_ZONE_IDX);
  if (err != 0)
  {
    return false;
  }

  return true;
}

int web_send_wifisetting_page(httpd_request_t *req)
{
  int setting_page_len = 0;
  char *setting_page = NULL;
  int err = kNoErr;
  char *ssid = "";
  int ssidLen = 0;

  // scan network
  WiFiAccessPoint wifiScanResult[100];
  int validWifiIndex[15];
  int wifiCount = ((EMW10xxInterface*)network)->scan(wifiScanResult, 100);
  int validWifiCount = 0;

  setting_page_len = strlen(page_head) + strlen(wifi_setting_a) + strlen(wifi_setting_b) + 1;
  for (int i = 0; i < wifiCount; ++i)
  {
    // too weak
    if (wifiScanResult[i].get_rssi() < -100)
    {
      continue;
    }

    bool shouldSkip = false;
    for (int j = 0; j < i; ++j)
    {
      // this ap has been skipped before
      if (wifiScanResult[j].get_rssi() < -100)
      {
        continue;
      }
      else if (strcmp(wifiScanResult[i].get_ssid(), wifiScanResult[j].get_ssid()) == 0)
      {
        // duplicate ap name
        shouldSkip = true;
        break;
      }
    }

    if (shouldSkip)
    {
      continue;
    }

    ssid = (char *)wifiScanResult[i].get_ssid();
    ssidLen = strlen(ssid);
    if (ssidLen == BOARD_AP_LENGTH && strncmp(ssid, boardAPHeader, strlen(boardAPHeader)) == 0) {
      shouldSkip = true;
      for (int j = strlen(boardAPHeader); j < BOARD_AP_LENGTH; ++j) {
        if (!isxdigit(ssid[j])) {
          shouldSkip = false;
        }
      }
      if (shouldSkip)
      {
        continue;
      }
    }

    if (ssidLen && ssidLen <= WIFI_SSID_MAX_LEN)
    {
      validWifiIndex[validWifiCount++] = i;
      setting_page_len += 26 + 2 * ssidLen;
    }

    if (validWifiCount >= 15)
    {
      break;
    }
  }
  setting_page = (char *)malloc(setting_page_len);
  char *p = setting_page;

  snprintf(p, strlen(page_head) + strlen(wifi_setting_a) + 1, "%s%s", page_head, wifi_setting_a);
  p += strlen(page_head) + strlen(wifi_setting_a);
  for(int i = 0; i < validWifiCount; ++i)
  {
    ssid = (char *)wifiScanResult[validWifiIndex[i]].get_ssid();
    ssidLen = strlen((char *)wifiScanResult[validWifiIndex[i]].get_ssid());
    if (ssidLen && ssidLen <= WIFI_SSID_MAX_LEN)
    {
      snprintf(p, 27 + 2 * ssidLen, "<option value=\"%s\">%s</option>", ssid, ssid);
    }
    p += 26 + 2 * strlen(ssid);
  }
  snprintf(p, strlen(wifi_setting_b) + 1, "%s", wifi_setting_b);

  err = httpd_send_all_header(req, HTTP_RES_200, setting_page_len, HTTP_CONTENT_HTML_STR);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http wifisetting headers.") );

  err = httpd_send_body(req->sock, (const unsigned char*)setting_page, setting_page_len);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http wifisetting body.") );

exit:
  if (setting_page)
  {
    free(setting_page);
  }
  return err;
}

int web_send_result(httpd_request_t *req, bool is_success, char *value_ssid)
{
  int result_page_len = 0;
  char *result_page = NULL;
  OSStatus err = kNoErr;
  if (is_success)
  {
    result_page_len = strlen(page_head) + strlen(success_result) + strlen(value_ssid) + strlen(network->get_ip_address()) - 5;
    result_page = (char *)malloc(result_page_len);
    snprintf(result_page, result_page_len, success_result, page_head, value_ssid, network->get_ip_address());
  } else
  {
    result_page_len = strlen(page_head) + strlen(failed_result) + strlen(value_ssid) - 3;
    result_page = (char *)malloc(result_page_len);
    snprintf(result_page, result_page_len, failed_result, page_head, value_ssid);
  }

  err = httpd_send_all_header(req, HTTP_RES_200, result_page_len, HTTP_CONTENT_HTML_STR);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http result headers.") );

  err = httpd_send_body(req->sock, (const unsigned char*)result_page, result_page_len);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http result body.") );

exit:
  if (result_page)
  {
    free(result_page);
  }
  if (err == 0 && is_success)
  {
    wait_ms(3000);
    mico_system_reboot();
  }
  return err;
}

int web_send_wifisetting_result_page(httpd_request_t *req)
{
  OSStatus err = kNoErr;
  bool connect_succ = false;
  int buf_size = 512;
  char *buf;
  char value_ssid[WIFI_SSID_MAX_LEN + 1];
  char value_pass[WIFI_PWD_MAX_LEN + 1];
  value_ssid[0] = '\0';
  value_pass[0] = '\0';
  char *boundary = NULL;
  // mico_Context_t* context = NULL;

  buf = (char *)malloc(buf_size);
  err = httpd_get_data(req, buf, buf_size);
  app_httpd_log("httpd_get_data return value: %d", err);
  require_noerr( err, Save_Out );

  if (strstr(req->content_type, "multipart/form-data") != NULL) // Post data is multipart encoded
  {
    boundary = strstr(req->content_type, "boundary=");
    boundary += 9;

    err = httpd_get_tag_from_multipart_form(buf, boundary, "SSID", value_ssid, WIFI_SSID_MAX_LEN);
    require_noerr( err, Save_Out );

    if (!strncmp(value_ssid, "\0", 1))
    {
      goto Save_Out;
    }

    err = httpd_get_tag_from_multipart_form(buf, boundary, "PASS", value_pass, WIFI_PWD_MAX_LEN);
    require_noerr( err, Save_Out );
  }
  else // Post data is URL encoded
  {
    err = httpd_get_tag_from_post_data(buf, "SSID", value_ssid, WIFI_SSID_MAX_LEN);
    require_noerr( err, Save_Out );

    if (!strncmp(value_ssid, "\0", 1))
    {
      goto Save_Out;
    }

    err = httpd_get_tag_from_post_data(buf, "PASS", value_pass, WIFI_PWD_MAX_LEN);
    require_noerr( err, Save_Out );
  }

  connect_succ = connect_wifi(value_ssid, value_pass);

Save_Out:

  if (connect_succ == true)
  {
    err = web_send_result(req, true, value_ssid);
    require_noerr_action(err, exit, app_httpd_log("ERROR: Unable to send http success result"));

    // mico_system_power_perform(context, eState_Software_Reset);
  }
  else
  {
    err = web_send_result(req, false, value_ssid);
    require_noerr_action(err, exit, app_httpd_log("ERROR: Unable to send http failed result"));
  }

exit:
  if (buf)
  {
    free(buf);
  }
  return err;
}

//
// Placeholder to get/set everything at once.
//
int rest_get_config(httpd_request_t *req)
{
  Serial.println(__FUNCTION__);
  int err = kNoErr;
  return err;
}

int rest_post_config(httpd_request_t *req)
{
  Serial.println(__FUNCTION__);
  OSStatus err = kNoErr;
  return err;  
}

/*
* REST API for IoT Hub
*/
static char *GetHostNameFromConnectionString(char *connectionString)
{
    if (connectionString == NULL)
    {
        return NULL;
    }
    int start = 0;
    int cur = 0;
    bool find = false;
    while (connectionString[cur] > 0)
    {
        if (connectionString[cur] == '=')
        {
            // Check the key
            if (memcmp(&connectionString[start], "HostName", 8) == 0)
            {
                // This is the host name
                find = true;
            }
            start = ++cur;
            // Value
            while (connectionString[cur] > 0)
            {
                if (connectionString[cur] == ';')
                {
                    break;
                }
                cur++;
            }
            if (find && cur - start > 0)
            {
                char *hostname = (char *)malloc(cur - start + 1);
                memcpy(hostname, &connectionString[start], cur - start);
                hostname[cur - start] = 0;
                return hostname;
            }
            start = cur + 1;
        }
        cur++;
    }
    return NULL;
}

static char *GetDeviceNameFromConnectionString(char *connectionString)
{
    if (connectionString == NULL)
    {
        return NULL;
    }
    int start = 0;
    int cur = 0;
    bool find = false;
    while (connectionString[cur] > 0)
    {
        if (connectionString[cur] == '=')
        {
            // Check the key
            if (memcmp(&connectionString[start], "DeviceId", 8) == 0)
            {
                // This is the device id
                find = true;
            }
            start = ++cur;
            // Value
            while (connectionString[cur] > 0)
            {
                if (connectionString[cur] == ';')
                {
                    break;
                }
                cur++;
            }
            if (find && cur - start > 0)
            {
                char *deviceName = (char *)malloc(cur - start + 1);
                memcpy(deviceName, &connectionString[start], cur - start);
                deviceName[cur - start] = 0;
                return deviceName;
            }
            start = cur + 1;
        }
        cur++;
    }
    return NULL;
}

int rest_get_iothub(httpd_request_t *req)
{
  Serial.println(__FUNCTION__);
  EEPROMInterface eeprom;
  JSON_Value *root_value = json_value_init_object();
  JSON_Object *root_object = json_value_get_object(root_value);
  char *serialized_string = NULL;
  char *connString[AZ_IOT_HUB_MAX_LEN + 1] = { '\0' };
  int err = kNoErr;

  int ret = eeprom.read((uint8_t*)connString, AZ_IOT_HUB_MAX_LEN, 0x00, AZ_IOT_HUB_ZONE_IDX);

  if (ret < 0)
  {
      Serial.println("Unable to get the azure iot connection string from EEPROM. Please set the value in configuration mode.");
      return kGeneralErr;
  }

  char *iothub_hostname = GetHostNameFromConnectionString((char *)connString);
  char *iothub_deviceid = GetDeviceNameFromConnectionString((char *)connString);

  json_object_set_string(root_object, "iothub", iothub_hostname);
  json_object_set_string(root_object, "iotdevicename", iothub_deviceid);
  json_object_set_string(root_object, "iotdevicesecret", (char *)connString);
  serialized_string = json_serialize_to_string_pretty(root_value);
  puts(serialized_string);

  int json_length = strlen(serialized_string);
    
  err = httpd_send_all_header(req, HTTP_RES_200, json_length, HTTP_CONTENT_JSON_STR);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http headers.") );

  err = httpd_send_body(req->sock, (const unsigned char*)serialized_string, json_length);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http body.") );

exit:
  if (serialized_string)
  {
    json_free_serialized_string(serialized_string);
    json_value_free(root_value);
  }

  if (iothub_hostname)
  {
    free(iothub_hostname);
  }

  if (iothub_deviceid)
  {
    free(iothub_deviceid);
  }
  return err;
}

int rest_post_iothub(httpd_request_t *req)
{
  Serial.println(__FUNCTION__);

  EEPROMInterface eeprom;
  OSStatus err = kNoErr;
  int buf_size = 512;
  char *buf;

  buf = (char *)malloc(buf_size);
  err = httpd_get_data(req, buf, buf_size);
  app_httpd_log("httpd_get_data return value: %d", err);
  require_noerr( err, Save_Out );
  
  if (strstr(req->content_type, HTTP_CONTENT_JSON_STR) != NULL)
  {
    JSON_Value *root_value = NULL;
    root_value = json_parse_string(buf);
    JSON_Object *root_object;

    if (json_value_get_type(root_value) == JSONObject)
    {
        root_object = json_value_get_object(root_value);
        const char *strConnString = json_object_get_string(root_object, "connectionstring");

        err = write_eeprom((char *)strConnString, AZ_IOT_HUB_ZONE_IDX);

        if (err != 0)
        {
          return false;
        }

        Serial.println(strConnString);

        if(root_value)
        {
          json_value_free(root_value);
        }
    }
  }

Save_Out:

  err = httpd_send_all_header(req, HTTP_RES_200, 0, HTTP_CONTENT_JSON_STR);

exit:
  return err;  
}

/*
* REST API for WiFi
*/

int rest_get_wifi(httpd_request_t *req)
{
  Serial.println(__FUNCTION__);

  EEPROMInterface eeprom;
  char ssid[WIFI_SSID_MAX_LEN + 1] = { 0 };
  char pwd[WIFI_PWD_MAX_LEN + 1] = { 0 };

  int ret = eeprom.read((uint8_t*)ssid, WIFI_SSID_MAX_LEN, 0x00, WIFI_SSID_ZONE_IDX);

  if (ret < 0)
  {
      Serial.print("ERROR: Failed to get the Wi-Fi SSID from EEPROM.\r\n");
      return false;
  }

  ret = eeprom.read((uint8_t*)pwd, WIFI_PWD_MAX_LEN, 0x00, WIFI_PWD_ZONE_IDX);
  if (ret < 0)
  {
      Serial.print("ERROR: Failed to get the Wi-Fi password from EEPROM.\r\n");
      return false;
  }

  JSON_Value *root_value = json_value_init_object();
  JSON_Object *root_object = json_value_get_object(root_value);
  char *serialized_string = NULL;

  json_object_set_string(root_object, "ssid", ssid);
  json_object_set_string(root_object, "password", pwd);
  serialized_string = json_serialize_to_string_pretty(root_value);
  puts(serialized_string);

  int json_length = strlen(serialized_string);
  int err = kNoErr;
    
  err = httpd_send_all_header(req, HTTP_RES_200, json_length, HTTP_CONTENT_JSON_STR);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http headers.") );

  err = httpd_send_body(req->sock, (const unsigned char*)serialized_string, json_length);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http body.") );

exit:
  if (serialized_string)
  {
    json_free_serialized_string(serialized_string);
    json_value_free(root_value);
  }
  return err;
}

int rest_post_wifi(httpd_request_t *req)
{
  Serial.println(__FUNCTION__);
  OSStatus err = kNoErr;
  int buf_size = 512;
  char *buf;

  buf = (char *)malloc(buf_size);
  err = httpd_get_data(req, buf, buf_size);
  app_httpd_log("httpd_get_data return value: %d", err);
  require_noerr( err, Save_Out );
  
  if (strstr(req->content_type, HTTP_CONTENT_JSON_STR) != NULL)
  {
    JSON_Value *root_value = NULL;
    root_value = json_parse_string(buf);
    JSON_Object *root_object;

    if (json_value_get_type(root_value) == JSONObject)
    {
      root_object = json_value_get_object(root_value);
      const char *strSSID = json_object_get_string(root_object, "ssid");
      const char *strPASS = json_object_get_string(root_object, "password");
      
      err = write_eeprom((char *)strSSID, WIFI_SSID_ZONE_IDX);
      if (err != 0)
      {
        return false;
      }
      err = write_eeprom((char *)strPASS, WIFI_PWD_ZONE_IDX);
      if (err != 0)
      {
        return false;
      }

      if(root_value)
      {
        json_value_free(root_value);
      }
    }
  }

Save_Out:

  err = httpd_send_all_header(req, HTTP_RES_200, 0, HTTP_CONTENT_JSON_STR);

exit:
  return err;  
}

/*
* REST API for timeserver
*/
int rest_get_timeserver(httpd_request_t *req)
{
  Serial.println(__FUNCTION__);
  JSON_Value *root_value = json_value_init_object();
  JSON_Object *root_object = json_value_get_object(root_value);
  char *serialized_string = NULL;
  //
  // ToDo: Read Time Server Setting from EEPROM
  //
  json_object_set_string(root_object, "timeserver", "MyTimeServer");
  serialized_string = json_serialize_to_string_pretty(root_value);
  puts(serialized_string);

  int json_length = strlen(serialized_string);
  int err = kNoErr;
    
  err = httpd_send_all_header(req, HTTP_RES_200, json_length, HTTP_CONTENT_JSON_STR);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http headers.") );

  err = httpd_send_body(req->sock, (const unsigned char*)serialized_string, json_length);
  require_noerr_action( err, exit, app_httpd_log("ERROR: Unable to send http body.") );

exit:
  if (serialized_string)
  {
    json_free_serialized_string(serialized_string);
    json_value_free(root_value);
  }
  return err;
}

int rest_post_timeserver(httpd_request_t *req)
{
  Serial.println(__FUNCTION__);
  OSStatus err = kNoErr;
  int buf_size = 512;
  char *buf;

  buf = (char *)malloc(buf_size);
  err = httpd_get_data(req, buf, buf_size);
  app_httpd_log("httpd_get_data return value: %d", err);
  require_noerr( err, Save_Out );
  
  if (strstr(req->content_type, HTTP_CONTENT_JSON_STR) != NULL)
  {
    //
    // ToDo : Save time server to EEPROM
    //
    JSON_Value *root_value = NULL;
    root_value = json_parse_string(buf);
    JSON_Object *root_object;

    if (json_value_get_type(root_value) == JSONObject)
    {
      root_object = json_value_get_object(root_value);
      const char *strTimeServer = json_object_get_string(root_object, "timeserver");

      Serial.println(strTimeServer);

      if(root_value)
      {
        json_value_free(root_value);
      }
    }
  }

Save_Out:

  err = httpd_send_all_header(req, HTTP_RES_200, 0, HTTP_CONTENT_JSON_STR);

exit:
  return err;  
}

int rest_post_shutdown(httpd_request_t *req)
{
  Serial.println(__FUNCTION__);
  OSStatus err = kNoErr;
  int buf_size = 512;
  char *buf;

  buf = (char *)malloc(buf_size);
  err = httpd_get_data(req, buf, buf_size);
  app_httpd_log("httpd_get_data return value: %d", err);
  require_noerr( err, Save_Out );
  
  if (strstr(req->content_type, HTTP_CONTENT_JSON_STR) != NULL)
  {
    JSON_Value *root_value = NULL;
    root_value = json_parse_string(buf);
    JSON_Object *root_object;

    if (json_value_get_type(root_value) == JSONObject)
    {
      root_object = json_value_get_object(root_value);
      double iDelay = json_object_get_number(root_object, "shutdowndelayinms");

      if(root_value)
      {
        json_value_free(root_value);
      }

      delay(iDelay);
      mico_system_reboot();
    }
  }

Save_Out:

  err = httpd_send_all_header(req, HTTP_RES_200, 0, HTTP_CONTENT_JSON_STR);

exit:
  return err;  
}


struct httpd_wsgi_call g_app_handlers[] = {
  {"/", HTTPD_HDR_DEFORT, 0, web_send_wifisetting_page, NULL, NULL, NULL},
  {"/result", HTTPD_HDR_DEFORT, 0, NULL, web_send_wifisetting_result_page, NULL, NULL},
  {"/setting", HTTPD_HDR_DEFORT, 0, web_send_wifisetting_page, NULL, NULL, NULL},
  {"/config", HTTPD_HDR_DEFORT, 0, rest_get_config, rest_post_config, NULL, NULL},
  {"/config/iothub", HTTPD_HDR_DEFORT, 0, rest_get_iothub, rest_post_iothub, NULL, NULL},
  {"/config/wifi", HTTPD_HDR_DEFORT, 0, rest_get_wifi, rest_post_wifi, NULL, NULL},
  {"/config/timeserver", HTTPD_HDR_DEFORT, 0, rest_get_timeserver, rest_post_timeserver, NULL, NULL},
  {"/device/shutdown", HTTPD_HDR_DEFORT, 0, NULL, rest_post_shutdown, NULL, NULL},
};

int g_app_handlers_no = sizeof(g_app_handlers)/sizeof(struct httpd_wsgi_call);

void app_http_register_handlers()
{
  int rc;
  rc = httpd_register_wsgi_handlers(g_app_handlers, g_app_handlers_no);
  if (rc)
  {
    app_httpd_log("failed to register test web handler");
  }
}

int _app_httpd_start()
{
  OSStatus err = kNoErr;
  app_httpd_log("initializing web-services");

  /*Initialize HTTPD*/
  if (is_http_init == false)
  {
    err = httpd_init();
    require_noerr_action( err, exit, app_httpd_log("failed to initialize httpd") );
    is_http_init = true;
  }

  /*Start http thread*/
  err = httpd_start();
  if (err != kNoErr)
  {
    app_httpd_log("failed to start httpd thread");
    httpd_shutdown();
  }
exit:
  return err;
}

int httpd_server_start()
{
  int err = kNoErr;
  err = _app_httpd_start();
  require_noerr( err, exit );

  if (is_handlers_registered == false)
  {
    app_http_register_handlers();
    is_handlers_registered = true;
  }

exit:
  return err;
}

int app_httpd_stop()
{
  OSStatus err = kNoErr;

  /* HTTPD and services */
  app_httpd_log("stopping down httpd");
  err = httpd_stop();
  require_noerr_action( err, exit, app_httpd_log("failed to halt httpd") );

exit:
  return err;
}

