#include "Arduino.h"
#include "ReButton.h"
#include "FlashStorage.h"

class ReButtonImplement
{
private:
	DigitalInOut _PowerSupply;
	PwmOut _LedRed;
	PwmOut _LedGreen;
	PwmOut _LedBlue;
	DigitalIn _Button;
	FlashStorage _Storage;
	AnalogIn _PowerSupplyVolt;

public:
	ReButtonImplement() : _PowerSupply(PWR_ENABLE),
		_LedRed(LED_RED), _LedGreen(LED_GREEN), _LedBlue(LED_BLUE),
		_Button(USER_BUTTON_A),
		_Storage(FLASH_SECTOR_11, 0x080E0000, 128 * 1024),
		_PowerSupplyVolt(PB_0)
	{
		_PowerSupply.write(1);	// Power ON.

		PwmOut outRed(LED_RED);
		PwmOut outGreen(LED_GREEN);
		PwmOut outBlue(LED_BLUE);

		outRed.period(0.001);
		outGreen.period(0.001);
		outBlue.period(0.001);

		_LedRed.write(1.0f);
		_LedGreen.write(1.0f);
		_LedBlue.write(1.0f);
	}

	void PowerSupplyEnable(bool enable)
	{
		digitalWrite(PWR_ENABLE, enable ? HIGH : LOW);
	}

	float ReadPowerSupplyVoltage()
	{
		return _PowerSupplyVolt.read() * 3.3f;
	}

	void SetLed(float red, float green, float blue)
	{
		_LedRed.write(1.0f - red);
		_LedGreen.write(1.0f - green);
		_LedBlue.write(1.0f - blue);
	}

	bool IsButtonPressed()
	{
		return _Button.read() ? false : true;
	}

	void EraseConfig()
	{
		_Storage.Erase();
	}

	void ReadConfig(void* data, int dataSize)
	{
		const uint8_t* flash = _Storage;
		memcpy(data, flash, dataSize);
	}

	void WriteConfig(void* data, int dataSize)
	{
		_Storage.Write((const uint8_t*)data, dataSize);
	}

};

ReButtonImplement* ReButton::GetInstance()
{
	static ReButtonImplement instance;
	return &instance;
}

void ReButton::PowerSupplyEnable(bool enable)
{
	GetInstance()->PowerSupplyEnable(enable);
}

void ReButton::SetLed(float red, float green, float blue)
{
	GetInstance()->SetLed(red, green, blue);
}

bool ReButton::IsButtonPressed()
{
	return GetInstance()->IsButtonPressed();
}

void ReButton::EraseConfig()
{
	GetInstance()->EraseConfig();
}

void ReButton::ReadConfig(void* data, int dataSize)
{
	GetInstance()->ReadConfig(data, dataSize);
}

void ReButton::WriteConfig(void* data, int dataSize)
{
	GetInstance()->WriteConfig(data, dataSize);
}

float ReButton::ReadPowerSupplyVoltage()
{
	return GetInstance()->ReadPowerSupplyVoltage();
}
