#ifndef _BMX055_HPP_
#define _BMX055_HPP_
#include "main.h"
#include "bmx055.h"

// Accelerometer registers
#define ACC_WHOAMI        0x00   // should return 0xFA
// #define ACC_Reserved    0x01
#define ACC_D_X_LSB       0x02
#define ACC_D_X_MSB       0x03
#define ACC_D_Y_LSB       0x04
#define ACC_D_Y_MSB       0x05
#define ACC_D_Z_LSB       0x06
#define ACC_D_Z_MSB       0x07
#define ACC_PMU_RANGE     0x0F

// BMX055 Gyroscope Registers
#define GYRO_WHOAMI           0x00  // should return 0x0F
// #define GYRO_Reserved       0x01
#define GYRO_RATE_X_LSB       0x02
#define GYRO_RATE_X_MSB       0x03
#define GYRO_RATE_Y_LSB       0x04
#define GYRO_RATE_Y_MSB       0x05
#define GYRO_RATE_Z_LSB       0x06
#define GYRO_RATE_Z_MSB       0x07
#define GYRO_RANGE            0x0F

// Seven-bit device addresses are ACC = 0x19, GYRO = 0x69
#define ACC_ADDRESS  0x19 << 1   // Address of BMX055 accelerometer
#define GYRO_ADDRESS 0x69 << 1  // Address of BMX055 gyroscope

// Set initial input parameters
// define BMX055 ACC full scale options
#define AFS_2G  0x03
#define GFS_125DPS 0x04

#define ACC_FACTOR 1024.0  // 2048 / 2
#define GYRO_FACTOR 262.144  // 32768 / 125

void bmx055_Init();
void acc_Update();
void gyro_Update();

#endif // _BMX055_HPP_
