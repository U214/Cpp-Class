#include <iostream>

using namespace std;

class OrangeBox4 {
public:
	OrangeBox4() {
		cout << "������Ʈ ������" << endl;
	}

	~OrangeBox4() {
		cout << "������Ʈ �Ҹ��" << endl;
	}
};

int main4(void)
{
	OrangeBox4 obx;
	OrangeBox4* obx1 = new OrangeBox4;
	delete obx1;

	cout << "�Լ���" << endl;
	return 0;
}

/*
// ���� ��ü ����
OrangeBox4 * obox2 = new OrangeBox4;
// ���� ��ü �Ҹ�
delete obox2;
*/
