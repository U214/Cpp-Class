#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

class Car
{
private:
	char gamerID[ID_LEN];	// 소유자ID
	int fuelGauge;			// 연료량
	int curSpeed;			// 현재속도

public:
	void InitMembers(char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

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

int main(void)
{
	cout << "Exam04 : " << endl;

	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77;
	sped77.InitMembers("sped77", 100);
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();

	return 0;
}


/*
키워드 struct를 대신해서 class를 사용하면, 구조체가 아닌 클래스가 된다.

키워드 class를 이용해서 정의한 클래스에 선언된 변수와 함수에 별도의 접근제어
지시자를 선언하지 않으면, 모든 변수와 함수는 private로 선언된다.

키워드 struct를 이용해서 정의한 구조체에 선언된 변수와 함수에 별도의 접근제어
지시자를 선언하지 않으면, 모든 변수와 함수는 public으로 선언된다.
- C언어의 구조체에는 접근을 제한하는 장치가 없다.
*/
