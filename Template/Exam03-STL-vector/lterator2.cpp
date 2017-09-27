#include <iostream>
#include <vector>

using namespace std;

class AppleBox {
public:
	AppleBox() {
		Empty();
	}

	void Add(int n) {
		total = total + n;
	}

	void Empty() {
		total = 0;
	}

	int GetTotal() {
		return total;
	}

private:
	int total;
};

int main3(void)
{
	AppleBox a1; 
	a1.Add(10);

	AppleBox a2;
	a2.Add(20);

	AppleBox a3;
	a3.Add(30);

	vector<AppleBox> v2;

	v2.push_back(a1);
	v2.push_back(a2);
	v2.push_back(a3);

	vector<AppleBox>::iterator itr_first, itr_last, i_cur;

	itr_first = v2.begin();
	itr_last = v2.end();

	for (i_cur = itr_first; i_cur != itr_last; i_cur++) {
		cout << (*i_cur).GetTotal() << endl;
	}

	cout << endl;
	return 0;
}