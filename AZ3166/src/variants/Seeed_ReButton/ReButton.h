#pragma once

class ReButtonImplement;

class ReButton
{
private:
	static ReButtonImplement* GetInstance();

public:
	static void PowerSupplyEnable(bool enable);
	static float ReadPowerSupplyVoltage();
	static void SetLed(float red, float green, float blue);
	static bool IsButtonPressed();
	static bool IsJumperShort();
	static void EraseConfig();
	static void ReadConfig(void* data, int dataSize);
	static void WriteConfig(void* data, int dataSize);

};
