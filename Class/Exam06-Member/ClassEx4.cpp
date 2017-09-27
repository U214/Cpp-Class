#include <iostream>

using namespace std;

class OrangeBox4 {
public:
	OrangeBox4() {
		cout << "¿ÀºêÁ§Æ® »ý¼ºµÊ" << endl;
	}

	~OrangeBox4() {
		cout << "¿ÀºêÁ§Æ® ¼Ò¸êµÊ" << endl;
	}
};

int main4(void)
{
	OrangeBox4 obx;
	OrangeBox4* obx1 = new OrangeBox4;
	delete obx1;

	cout << "ÇÔ¼ö³¡" << endl;
	return 0;
}

/*
// µ¿Àû °´Ã¼ »ý¼º
OrangeBox4 * obox2 = new OrangeBox4;
// µ¿Àû °´Ã¼ ¼Ò¸ê
delete obox2;
*/
