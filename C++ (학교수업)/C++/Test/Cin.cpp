#include<iostream>
using namespace std;

//cin,>> 예제


void main() {

	cout << "이름을 입력하세요?" << endl;

	char name[256];
	cin >> name;  //cin 은 무조건 공간을 확보를 하고 cin을 넣어줘야 한다 아니면 오류가 걸린다 공간은 배열로 공간을 정한다

	cout << name << "님 C++ 세계에 오신 것을 환영합니다." << endl;

}
