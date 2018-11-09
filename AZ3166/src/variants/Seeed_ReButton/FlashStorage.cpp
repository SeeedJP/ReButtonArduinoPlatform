#include "Arduino.h"
#include "FlashStorage.h"

void FlashStorage::Erase()
{
	HAL_FLASH_Unlock();

	FLASH_EraseInitTypeDef erase;
	erase.TypeErase = FLASH_TYPEERASE_SECTORS;
	erase.Sector = _Sector;
	erase.NbSectors = 1;
	erase.VoltageRange = FLASH_VOLTAGE_RANGE_3;
	uint32_t pageError = 0;
	HAL_StatusTypeDef result = HAL_FLASHEx_Erase(&erase, &pageError);

	HAL_FLASH_Lock();
}

void FlashStorage::Write(const uint8_t* data, int dataSize)
{
	if (dataSize > _Size) return;

	HAL_FLASH_Unlock();
	
	FLASH_EraseInitTypeDef erase;
	erase.TypeErase = FLASH_TYPEERASE_SECTORS;
	erase.Sector = _Sector;
	erase.NbSectors = 1;
	erase.VoltageRange = FLASH_VOLTAGE_RANGE_3;
	uint32_t pageError = 0;
	HAL_StatusTypeDef result = HAL_FLASHEx_Erase(&erase, &pageError);
	
	for (int i = 0; i < dataSize; i++)
	{
		HAL_FLASH_Program(FLASH_TYPEPROGRAM_BYTE, _Address + i, data [i]);
	}
	
	HAL_FLASH_Lock();
}
