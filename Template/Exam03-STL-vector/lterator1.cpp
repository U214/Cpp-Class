#include <iostream>
#include <vector>

using namespace std;

int main2(void)
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(15);

	vector<int>::iterator itr_first, itr_last, i_cur;

	itr_first = v1.begin();
	itr_last = v1.end();

	// 반복자 사용
	for (i_cur = itr_first; i_cur != itr_last; i_cur++) {
		cout << *i_cur << endl;
	}

	cout << endl;

	//인덱스사용1
	for (vector<int>::size_type i = 0; i != v1.size(); i++) {
		cout << v1.at(i) << endl;
	}

	cout << endl;

	//인덱스 사용2
	for (int i = 0; i < (int)v1.size(); ++i) {
		cout << v1.at(i) << endl;
	}

	return 0;
}