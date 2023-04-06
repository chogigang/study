
/*#include <iostream>
using namespace std;
*/

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

/*
void main() {

	short a, b, c,d;

	cout << " 국어 점수를 입력하세요 = " << endl;
	cin >> a;

	cout << "영어 점수를 입력하세요 =" << endl;
	cin >> b;

	cout << "수학 점수를 입력하세요 =" << endl;
	cin >> c;

	//d = float(a + b + c) / 3;

	cout << "3과목 합계" << a + b + c << "입니다." << endl;
	cout << "평균값." << (a+b+c)/3.0 << endl;


}
*/
/*
void main() {

	int a, b;


	a = 1;
	cout << a++ << endl; //2

	a = 1;
	b = ++a;
	cout << b << endl; //2

	a = 1;
	cout << a++ << endl; //1

	a = 1;
	b = a++;

	cout << b << endl; //1

	a = 1;
	++a;
	cout << a << endl; //2

	a = 1;
	a++;
	cout << a << endl; //2


}
*/

/*
void main() {

	int a = 3;
	++a = 1;  //OK: l-value
	cout << a << endl;
	
	//a++ = 1;   //Error: r-value

}
*/
/*
void main() {
	int a = 0;

	if (a = 1) {  //조건식 안에 값이 1이든 -1이든 13이든 아무 수가 있으면 참 1, 값이 0이면 거짓 이다
		cout << "a==1" << endl;
	}
	else
	{
		cout << "a !=1" << endl;
	}


}
*/
/*
void main() {
	int a = 3;
	cout << !!a << endl;  //논리 연산자는 참 거짓만 출력하고 a의 값은 출력안한다 참은1 거짓은 0



}
*/

//and 연산자

/*
int Func() {

	cout << "Func" << endl;
	return 1;

}

void main() {

	if (0&& Func()) {
		cout << "main" << endl;
	}
}
*/

//OR연산자



//반전 연산자 ~     비트단위로 부정  
/*
void main() {
	cout << ~13 << endl;  // 비트값  -1
	cout << !0 << endl;  //논리 값 1

}
*/

 //Xor 연산자   비트연산자
/*
void main() {
	int a = 3;
	int b = 7;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << a << "" << b << endl;
}
*/

// 비트 이동 연산자 (<<,>>)
/*
void main() {
	char c = 1;

	c = c << 7;
	cout << +c << endl;

	c = c >> 7;
	cout << +c << endl;


}
*/

/*
void main() {
	char c; //signed type
	
	c = 2;  //[0000,0010] 2
	
	c = c >> 1; // [0000,0001] 1
	
	cout << +c << endl;
	
	c = -126; //[1000,0010] -126
	
	c = c >> 1; // [1100,0001] -63
	
	cout << +c << endl;
}

*/
/*
	void main() {
	unsigned char uc; //unsigned type

	uc = 2; //[0000,0010] 2
	uc = uc >> 1; //[0000,0001] 1
	cout << +uc << endl;

	uc = 130; //[1000,0010] 130
	uc = uc >> 1; //[0100,0001] 65
	cout << +uc << endl;
}
*/

//기타 연산자


//삼항 연산자        조건식? 식1 : 식2    =>     조건식?  참 : 거짓
 /*
int NOT(int arg) {
	return arg ? 0 : 1;

}

void main() {
	cout << NOT(3) << "" << NOT(0) << endl;
}
*/

//sizeof  저장한 타입의 크기를 도출할때 사용

/*
void main() {


	cout << sizeof(char) << endl;//1
	cout << sizeof(int) << endl;//4
	cout << sizeof(double) << endl;//8



	char c;
	int i;
	double d;
	int arr[4];

	cout << sizeof(c) << endl; //1
	cout << sizeof(i) << endl;	//4
	cout << sizeof(d) << endl;	//8
	cout << sizeof(arr) << endl;//16
}
*/

//범위 연산자    이름 ::연산자


//타입 변환 연산자
/*
 

1.(TYPE)식
2.TYPE(식)
3.static_cast<TYPE>(식)
4.dynamin_cast<TYPE>(식)
5.const_cast<TYPE>(식)
6.reinterpret_cast<TYPE>(식)


*/


// 타입연산자

/*
void main() {

	cout << fixed;
	cout.precision(0);

	int i - 3.141592; //3
	float f = 67108870; //6710872

	cout << i << "" << f << endl;

}
*/
/*
void main() {
	cout << 1 / 2 << endl;  //0
	cout << (double)1 / 2 << endl; //0.5
}
*/

#include <iostream>
using namespace std;

void mian() {

	int a, b;



	a = 1;
	b = ++a;

	cout << b << endl;

	a = 1;
	b = a++;
	cout << b << endl;

}