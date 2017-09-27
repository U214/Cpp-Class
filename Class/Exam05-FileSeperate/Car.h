#ifndef __CAR_H__
#define __CAR_H__

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

#endif // !__CAR_H__
