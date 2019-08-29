#pragma once

class FlashStorage
{
private:
	uint32_t _Sector;
	uint32_t _Address;
	uint32_t _Size;

public:
	FlashStorage(uint32_t sector, uint32_t address, int size)
	{
		_Sector = sector;
		_Address = address;
		_Size = size;
	}

	operator const uint8_t*()
	{
		return (const uint8_t*)_Address;
	}

	void Erase();
	void Write(const uint8_t* data, int dataSize);

};
