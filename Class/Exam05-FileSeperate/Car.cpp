#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Car.h"

using namespace std;

void Car::InitMembers(char* ID, int fuel) {
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

//inline void Car::ShowCarState()
void Car::ShowCarState() {
	cout << "소유자 ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel() {
	if (fuelGauge <= 0) {
		return;
	}
	else {
		fuelGauge = fuelGauge - FUEL_STEP;
	}

	if (curSpeed + ACC_STEP >= MAX_SPD) {
		curSpeed = MAX_SPD;
		return;
	}

	curSpeed = curSpeed + ACC_STEP;
}

void Car::Break() {
	curSpeed = curSpeed - BRK_STEP;

	if (curSpeed < BRK_STEP) {
		curSpeed = 0;
		return;
	}
}