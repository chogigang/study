#include <iostream>
using namespace std;

//void main()
//{
//
//	struct 
//	{
//		char m;
//	}s1; //해당 구조체의 변수로 지정
//	struct {
//		char m;
//		
//	}s2;
//
//	s1 = s2; //Error
//
//}
 //서로 타입을 다르게 인식을 하기때문에  에러가 뜬다.
//구조체는 1회성의 성격을 가지고 있다.


//struct STag {
//	char m;
//
//};
//
//
//void main(){
//	struct STag s1;
//	struct STag s2;
//	
//	s1 = s2;  //ok
//
//}

//typedef struct STag {
//
//	char m;
//}SType;
//
//
//void main() {
//
//	SType s1;
//	SType s2;
//
//	s1 = s2;
//}

//typedef struct STag {
//	int m;
//	char str1[4];
//	char* str2;  //메모리를 할당받진 않음
//
//}SType;
//
//
//
//void main() {
//	SType  s1;
//	s1.m = 2017;
//	memcpy(s1.str1, "C++", 4); //메모리 카피 배열의 초기화가 불가능하기 때문에 memcpy를 사용해서 초기화를 시킴
//	//s1.str2 = "World"; //별도의 형태로 메모리에 임시로 할당한다. 하지만 "World"는 주소가 아니기때문에 오류가난다.
//	s1.str2 = (char*)"World"; //형변환을 시키면 오류가 해결된다.
//
//	SType s2;
//	s2 = s1;
//	cout << s2.m << " " << s2.str1 <<" " << s2.str2 << endl;
//
//	SType s3 = { 2023,"A++",(char*)"Hello World,Welcome to A++" };//구조체를 한꺼번에 초기화를 시키는방법 순서가 똑같아야한다.
//
//	cout << s3.m << " " << s3.str1<<" "<< s3.str2 << endl;
//}

//typedef struct STag {
//	int m;
//	char str1[4];
//	const char* str2;  //메모리를 할당받진 않음
//
//}SType;
//
//
//
//void main() {
//	SType  s1;
//	s1.m = 2017;
//	memcpy(s1.str1, "C++", 4); //메모리 카피 배열의 초기화가 불가능하기 때문에 memcpy를 사용해서 초기화를 시킴
//	s1.str2 = "World";  //
//
//	SType s2;
//	s2 = s1;
//	cout << s2.m << "" << s2.str1 << s2.str2 << endl;
//
//}


// 직접 맴버 (.)연산자
//직접 맴버 (.)연산자는 구조체의 맴버를 접근하기 위하여 제공되는 연산자이다. 구조체 객체(인스턴스)에 적용하여 원하는 맴버를 나타낼 수 있다.
// 피연산자는 두 개인데 구조체 객체명과 멤버명이다.

//typedef struct STag {
//
//	int m;
//	char* str;
//}SType;
//
//
//void main() {
//	SType s;
//	s.m = 2017;
//	s.str = (char*)"C++";
//
//	cout << s.m << " " << s.str << endl;
//
//}


 //간접 맴버 연산자
//구조체인 포인터 에 대해서 맴버를 나타내는 데 사용된다. 피연산자는 역시 두 개인데 포인터(대상 타입이 구조체)와 맴버명이다.

//typedef struct STag {
//
//	int m;
//	char* str;
//}SType;
//
//
//void main() {
//	SType s;
//
//	SType* pS = &s;
//	pS->m = 2023;
//	pS->str = (char*)"C++";
//
//	cout << pS->m << " " << pS->str << endl;
//}


//사용 불가 연산자



//typedef struct STag {
//
//	char m;
//
//}SType;
//
//
//void main() {
//
//	SType a, b;
//
//	a.m = 1;
//
//	b = a;
//
//	//b == a; //Error
//	//b > a; //Error
//}


//구조체의 크기

//기본적으로 8바이트를 선언하면서 구조체 안에 가장큰 바이트 기준으로  모든 타입에 같은 바이트를 주입한다


//typedef struct STag {
//
//	char c;
//	int i;
//}SType;
//
//void main() {
//	cout << sizeof(SType) << endl;
//
//}


//멤버 오프셋

//typedef struct STag {
//
//	int a;
//	int b;
//	int c;
//
//}SType;
//
//void main() {
//	SType s1, s2;
//	s1.a = 1;
//	s1.b = 2;
//	s1.c = 3;
//	s2 = s1;
//
//}

//#include<stddef.h>
//typedef struct STag {
//
//	
//	int i;
//	char c;
//
//}SType;
//
//
//void main() {
//
//	int OffsetC = offsetof(SType, c);
//	int OffsetI = offsetof(SType, i);
//	cout << "c Offset: " << OffsetC << endl;
//	cout << "i Offset: " << OffsetI << endl;
//
//}



//구조체 인자


//값 전달

//typedef struct STag {
//
//	int m;
//}SType;
//
//
//void Func(SType arg) {
//	arg.m = 2;
//	cout << arg.m << endl;
//}
//
//
//void main() {
//	SType a;
//	a.m = 1;
//
//	Func(a);
//	cout << a.m << endl;
//
//}


//주소 전달


//typedef struct STag {
//
//	int m;
//}SType;
//
//void Func(SType* pArg) {
//	pArg->m = 2;
//	cout << pArg->m << endl;
//}
//
//void main() {
//	SType a;
//	a.m = 1;
//
//
//	Func(&a);
//
//	cout << a.m << endl;
//
//}

//공용체 
// 공용체를  만들때는 union을 사용해서 만든다.
//1개의 공간만 할당 받습니다. 이 맴버들중에 메모리 크기가  가장큰놈만 메모리 공간을 할당 받습니다. 그리고 그 공간을 공유해서 씁니다.

//typedef union {
//	int a;
//	int b;
//	int c;
//
//
//}UType;
//
//void main() {
//
//	UType u;
//	u.a = 1;
//
//	cout << sizeof(u) << endl;
//	cout << u.b << endl; //1
//	cout << u.c << endl; //1
//
//
//
//}



typedef union {

	__int64 a;
	int b;
}UType;


void main(){
	UType u;
	u.a = 1;

	cout << u.b << endl; // 1 출력
	cout << sizeof(u) << endl; // 8 출력

}