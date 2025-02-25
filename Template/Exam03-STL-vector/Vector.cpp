#include <vector>
#include <iostream>

using namespace std;

int main1(void)
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(11);

	cout << "요소의 개수 : " << (int)v1.size() << endl;
	cout << "v1[0] : " << v1[0] << endl;
	cout << "v1[1] : " << v1[1] << endl;

	cout << "v1.at(0) : " << v1.at(0) << endl;
	cout << "v1.at(1) : " << v1.at(1) << endl;

	return 0;
}

/*
vector 클래스는 메모리가 부족한 경우에 자동으로 메모리를 확보
그러므로 배열과는 다르게 사이즈에 신경을 쓸 필요가 없다.

C++언어에는 템플릿 클래스를 사용하는 표준 라이브러리가 있다.
이것을 표준 템플릿 라이브러리(STL : Standard Template Library)라고 한다.
- 배열 vector 클래스
- 리스트 list 클래
- 큐 queue 클래스
- 스택 stack 클래스
....
*/
