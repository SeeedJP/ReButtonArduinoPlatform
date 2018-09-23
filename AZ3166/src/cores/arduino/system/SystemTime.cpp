// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. 

#include "Arduino.h"
#include "SystemTime.h"
#include "SystemWiFi.h"
#include "NTPClient.h"

static const char* DefaultNtpHost[] =
{
	"pool.ntp.org",
	"cn.pool.ntp.org",
	"europe.pool.ntp.org",
	"asia.pool.ntp.org",
	"oceania.pool.ntp.org"
};

static String SpecificNtpHost;

static NTPResult NTPSyncUP(const char* host)
{
	NTPClient ntp(WiFiInterface());
	return ntp.setTime(host);
}

void SetNTPHost(const char* host)
{
	if (host == NULL)
	{
		SpecificNtpHost = "";
	}
	else
	{
		SpecificNtpHost = host;
	}
}

void SyncTime(void)
{
	if (SpecificNtpHost.length() >= 1)
	{
		if (NTPSyncUP(SpecificNtpHost.c_str()) == NTP_OK)
		{
			time_t t = time(NULL);
			Serial.printf("Time from %s, now is (UTC): %s\r\n", SpecificNtpHost.c_str(), ctime(&t));
		}
		else
		{
			Serial.printf("Unable to get the NTP host %s\r\n", SpecificNtpHost.c_str());
		}
	}
	else
	{
		for (int i = 0; i < (int)(sizeof(DefaultNtpHost) / sizeof(DefaultNtpHost[0])); i++)
		{
			if (NTPSyncUP(DefaultNtpHost[i]) == NTP_OK)
			{
				time_t t = time(NULL);
				Serial.printf("Time from %s, now is (UTC): %s\r\n", DefaultNtpHost[i], ctime(&t));
				break;
			}
			else
			{
				Serial.printf("Unable to get the NTP host %s\r\n", DefaultNtpHost[i]);
			}
		}
	}
}
