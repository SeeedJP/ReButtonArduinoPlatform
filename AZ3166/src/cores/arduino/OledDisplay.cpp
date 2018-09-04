// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. 
 
#include "Arduino.h"
#include "mico_system.h"
#include "oled.h"
#include "OledDisplay.h"

OLEDDisplay::OLEDDisplay()
{
}

OLEDDisplay::~OLEDDisplay()
{
}

void OLEDDisplay::init()
{
}

void OLEDDisplay::clean()
{
}

int OLEDDisplay::print(const char *s, bool wrap)
{
	return Serial.print(s);
}

int OLEDDisplay::print(unsigned int line, const char *s, bool wrap)
{
	return Serial.print(s);
}

void OLEDDisplay::draw(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, unsigned char BMP[])
{
}

int OLEDDisplay::println(unsigned int line, const char *s, int len, bool wrap)
{
}
