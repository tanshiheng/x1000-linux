#ifndef __FRIZZ_CHIP_ORIENTATION_H__
#define __FRIZZ_CHIP_ORIENTATION_H__
const unsigned int acc_sensor_orientation[8][8] =
{
	{0xFF818007, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000000},
	{0xFF818007, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001, 0x00000000, 0x00000000},
	{0xFF818007, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000000},
	{0xFF818007, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000},
	{0xFF818007, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000000, 0x00000001, 0x00000001},
	{0xFF818007, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000001},
	{0xFF818007, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001, 0x00000000, 0x00000001},
	{0xFF818007, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001, 0x00000001, 0x00000001},
};

const unsigned int gyro_sensor_orientation[8][8] =
{
	{0xFF818207, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000000},
	{0xFF818207, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001, 0x00000000, 0x00000000},
	{0xFF818207, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000000},
	{0xFF818207, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000},
	{0xFF818207, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000000, 0x00000001, 0x00000001},
	{0xFF818207, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000001},
	{0xFF818207, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001, 0x00000000, 0x00000001},
	{0xFF818207, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001, 0x00000001, 0x00000001},
};

const unsigned int magn_sensor_orientation[8][8] =
{
	{0xFF818107, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001, 0x00000001, 0x00000001},
	{0xFF818107, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001, 0x00000000, 0x00000001},
	{0xFF818107, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000001},
	{0xFF818107, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000001},
	{0xFF818107, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000},
	{0xFF818107, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000000},
	{0xFF818107, 0xFD000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001, 0x00000000, 0x00000000},
	{0xFF818107, 0xFD000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000000},
};
#endif
