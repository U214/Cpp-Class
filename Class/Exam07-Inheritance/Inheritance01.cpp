#include <iostream>

using namespace std;

class Food1 {
public:
	void print1() {
		cout << "�θ�Ŭ���� ����Ʈ : " << endl;
	}
};

class Fruit1 : public Food1 {
public:
	void print2() {
		cout << "�ڽ�Ŭ���� ����Ʈ : " << endl;
	}
};

int main1(void)
{
	Fruit1 myFruit;

	myFruit.print1();
	myFruit.print2();

	return 0;
}