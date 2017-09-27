#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
	char* name;
public:
	Person() {
		name = NULL;
	}

	Person(char* str) {
		int len = (int)strlen(str);
		name = new char[len + 1];
		strcpy(name, str);
	}

	~Person() {
		delete[] name;
	}

	Person & operator = (const Person & psn);

	char* GetName() {
		return name;
	}
};

Person & Person::operator=(const Person & psn) {
	if (this == &psn) {
		return *this;
	}

	delete[] name;
	int len = (int)strlen(psn.name);
	name = new char[len + 1];
	strcpy(name, psn.name);

	return *this;
}

int main(void)
{
	Person psn1("Orange"), psn2("Apple");
	psn1 = psn2;
	cout << psn1.GetName() << endl;

	return 0;
}