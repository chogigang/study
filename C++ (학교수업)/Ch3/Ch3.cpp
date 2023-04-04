// Ch3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
/*
int main() {
	//short a, b ,result;
	short a, b;
	int result;

	cout << "첫번째 값을 입력하세요" << endl;
		cin >> a;
		cout << "두번째 값을 입력하세요" << endl;
		cin >> b;
		result = a * b;

	cout << "더하기" << a + b << endl;
	cout << "빼기" << a - b << endl;
	cout << "곱" << a * b << endl;
	cout << "result(곱)" << result <<endl;
	cout << "나누기" << a / b << endl;
	cout << "나머지" << a % b << endl;


}
*/

void main() {

	short a, b, c,d;

	cout << " 국어 점수를 입력하세요 = " << endl;
	cin >> a;

	cout << "영어 점수를 입력하세요 =" << endl;
	cin >> b;

	cout << "수학 점수를 입력하세요 =" << endl;
	cin >> c;

	d = float(a + b + c) / 3;

	cout << "3과목 합계" << a + b + c << "입니다." << endl;
	cout << "평균값." << (a+b+c)/3.0 << endl;


}


