#include <iostream>

using namespace std;

class OrangeBox3 {
private:
	int total;

public:
	void Add(int num);
	void Del(int num);
	void Empty();
	int GetTotal() {
		return total;
	}
};

void OrangeBox3::Add(int num) {
	total = total + num;
}

void OrangeBox3::Del(int num) {
	total = total - num;

	if (total < 0) {
		Empty();
	}
}

void OrangeBox3::Empty() {
	total = 0;
}

int main3(void)
{
	OrangeBox3 obox;

	obox.Empty();
	obox.Add(5);
	obox.Del(4);

	int nResult = obox.GetTotal();
	cout << nResult << endl;

	OrangeBox3* obox2 = new OrangeBox3;
	(*obox2).Empty();
	obox2->Add(2);
	delete obox2;

	return 0;
}

// 정적으로 객체를 만들면 함수가 끝날때 사라지니까
// 동적으로 만들어서 기능이 끝나면 내가 삭제해줌
// 필요할때 메모리를 확보하기위해 동적으로 만든다ㄴ