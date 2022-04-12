#include "bmx055.h"

extern I2C_HandleTypeDef hi2c1;

void bmx055_Init(){
	uint8_t who_am_i = 0x00;

	HAL_Delay(100);
	HAL_I2C_Mem_Read(&hi2c1, ACC_ADDRESS, ACC_WHOAMI, I2C_MEMADD_SIZE_8BIT, (uint8_t*)who_am_i, 1, 10);
	printf("rn0x%xrn", who_am_i);

	HAL_Delay(10);
	HAL_I2C_Mem_Read(&hi2c1, ACC_ADDRESS, ACC_WHOAMI, I2C_MEMADD_SIZE_8BIT, (uint8_t*)who_am_i, 1, 10);
	printf("rn0x%xrn", who_am_i);

	if (who_am_i != 0xFA){
			printf("acc_error");
	}

	HAL_Delay(100);
	HAL_I2C_Mem_Read(&hi2c1, GYRO_ADDRESS, GYRO_WHOAMI, I2C_MEMADD_SIZE_8BIT, (uint8_t*)who_am_i, 1, 10);
	printf("rn0x%xrn", who_am_i);

	HAL_Delay(10);
	HAL_I2C_Mem_Read(&hi2c1, GYRO_ADDRESS, GYRO_WHOAMI, I2C_MEMADD_SIZE_8BIT, (uint8_t*)who_am_i, 1, 10);
	printf("rn0x%xrn", who_am_i);

	if (who_am_i != 0x0F){
		printf("gyro_error");
	}

	HAL_Delay(50);

	HAL_I2C_Mem_Read(&hi2c1, ACC_ADDRESS, ACC_PMU_RANGE, I2C_MEMADD_SIZE_8BIT, (uint8_t*)AFS_2G, 1, 10);
	HAL_Delay(50);
	HAL_I2C_Mem_Read(&hi2c1, GYRO_ADDRESS, GYRO_RANGE, I2C_MEMADD_SIZE_8BIT, (uint8_t*)GFS_125DPS, 1, 10);
	HAL_Delay(50);
}

//void acc_Update(){
//	int16_t acc_x_raw;
//	float acc_x;
//
//	acc_x_raw = (int16_t)((int16_t))
//	acc_x = (float)(acc_x_raw / ACC_FACTOR);
//}
//
//void gyro_Update(){
//	int16_t gyro_x_raw;
//	float gyro_x;
//
//	gyro_x_raw = (int16_t)((int16_t))
//	gyro_x = (float)(gyro_x_raw / GYRO_FACTOR);
//}
