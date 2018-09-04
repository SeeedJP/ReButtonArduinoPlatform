#pragma once

class ReButtonImplement;

class ReButton
{
private:
	static ReButtonImplement* GetInstance();

public:
	static void PowerSupplyEnable(bool enable);
	static void SetLed(float red, float green, float blue);
	static bool IsButtonPressed();

};
