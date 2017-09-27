#include <iostream>

using namespace std;

class Food1 {
public:
	void print1() {
		cout << "부모클래스 프린트 : " << endl;
	}
};

class Fruit1 : public Food1 {
public:
	void print2() {
		cout << "자식클래스 프린트 : " << endl;
	}
};

int main1(void)
{
	Fruit1 myFruit;

	myFruit.print1();
	myFruit.print2();

	return 0;
}