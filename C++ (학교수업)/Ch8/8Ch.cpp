#include <iostream>
using namespace std;



//int Multiply(int a, int b) {
//	int Result = a * b;
//	return Result;
//	Result = 0;
//
//}
//
//
//void main(){
//
//
//	int Result = Multiply(3, 4);
//	cout << Result << endl; //12출력
//	return;
//
//}


//void main() {
//
//	double Result = Multiply(3.3, 7.7);
//	cout << Result << endl; //Error
//
//}
//
//double Multiply(double a, double b) {
//
//	return a * b;
//
//}


//double Multiply(double a, double b) {
//
//	return a * b;
//
//}
//
//void main() {
//
//	double Result = Multiply(3.3, 7.7);
//	cout << Result << endl;
//
//}


//void Sub(int arg, int m) {
//
//	Mod(arg - m, m); //Error
//}
//
//
//void Mod(int arg,int m) {
//	if (arg < m) { 
//		cout << arg << endl;
//	}
//	else {
//		Sub(arg, m); //Error 이걸 위로 올려도 Sub단에서 에러가 걸릴것이다.
//	
//	}
//
//}
//
//
//void main() {
//	Mod(11, 3);
//
//}


//void Mod(int, int);
//
//void Sub(int arg, int m) {
//
//	Mod(arg - m, m); //OK
//}
//
//
//void Mod(int arg,int m) {
//	if (arg < m) { 
//		cout << arg << endl;
//	}
//	else {
//		Sub(arg, m);
//	
//	}
//
//}
//
//
//void main() {
//	Mod(11, 3);
//
//}
//


//#include <stdio.h>
//void main() {
//	printf("C++\r\n");
//	
//
//
//}

//int Increment(int arg) {
//	arg++;
//	return arg;
//
//}
//
//
//void main() {
//
//	cout << Increment(3)/* (3)실인자 = 실제 인자.*/ << endl;
//
//}


// 값전달
//void Increment(int arg) {
//
//	arg++;
//}
//
//void main() {
//
//
//	int i = 3;
//	Increment(i);
//	cout << i << endl;
//
//
//}

//arg 와 i는 서로 각자 다른 메모리를 사용하기때문에 arg값과 i의 값은 다르다.




//주소 전달

//void Increment(int* pArg) {
//	(*pArg)++;
//
//
//}
//
//void main() {
//	int i = 3;
//	Increment(&i);
//	cout << i << endl; //4출력
//
//
//}





// 참조 전달

//void Increment(int& arg) {
//
//	arg++;
//}
//
//
//void main() {
//
//	int i = 3;
//	Increment(i);
//	cout << i << endl;// 4 출력
//
//}
////같은 메모리를 공유하기때문에 i 의 값이 변한다.
//


//참조 전달

//int Add(int& a, int& b) {
//	return a + b;
//
//
//}
//
//
//void main() {
//
//	int a = 1;
//	int b = 2;
//
//
//	cout << Add(a, b) << endl; //OK  3  a메모리 통채로 b메모리 통채로 넘긴다.
//	//cout << Add(1,2) << endl; //Error    
//	//실제값을 그대로 쓰고 있는대 메모리 저장을 안한 실인자 값을넘기기 때문에 주소 참고 연산자를 사용중인 a,b 들은 주소가 없는 실인자를 받기 때문에
//	//에러가 발생한다.
//
//}

//int Add(const int &a, const int& b) {
//
//	return a + b;
//
//
//}
//
//void main() {
//
//
//	int a = 1;
//	int b = 2;
//
//	cout << Add(a, b) << endl; //OK
//	cout << Add(1, 2) << endl; //OK
//
//}
////const 상수로 값을 지정하면 위에서 난 오류를 해결할수 있다.




//기본(Default) 인자


//int Increment(int arg, int delta = 5) {
//
//	return arg + delta;
//}
//
//void main() {
//
//	cout << Increment(3) << endl; // 8
//	cout << Increment(3, 2) << endl; // 5
//
//}
//매개변수쪽에서 값을 지정안하면 main 함수에서 값을 지정해줘야한다 메인 함수쪽에서 인자값을 지정안하고 함수를 호출하면
//오류가 발생하는대 이를 방지하기 위해 기본 인자를 지정 하면  인자값을 지정안했을때 발생하는 오류를 방지할수있다.
// 하지만 기본인자에서 문제점이 있다.
// 기본인자는 항상 오른쪽부터 디폴트인자를 채워나가야한다 앞에서 부터 채우면 오류가 걸린다.
// 첫번째 arg쪽 부터 값을 채우기때문에 디폴트 값을 설정안한 뒤에 델타는 값이 없으므로 오류가 걸린다.
// 그러므로 기본 인자는 오른쪽 뒤쪽부터 설정하는 것이 규칙이다.


//int Sum(int a = 0, int b = 0, int c = 0) {
//
//	return a + b + c;
//}
//
//void main() {
//
//	cout << Sum(1, 2, 3) << endl; //6
//	cout << Sum(1, 2) << endl;	  //3
//	cout << Sum(1) << endl;		  //1
//	cout << Sum() << endl;		  //0
//
//}



//가변 인자 함수

//void main() {
//
//	printf("%d \r\n",1);
//	printf("%d, %.2f\r\n", 1, 2.0);
//	printf("%d,%.2f,%c\r\n", 1, 2.0, '3');
//	printf("%d,%.2f,%c,%s\r\n", 1, 2.0, '3', "Four");
//
//
//}


//void VFFunc(int arg1, int arg2, ...) {
//
//}
//
//void main() {
//
//	VFFunc(1, 2, 3.0, '4', "Five");
//
//}
/* arg1,arg2 은 고정인 타입을 말한다 고정 인자는 일반 함수의 인자를 말한다. 가변 인자 함수에서는 고정 인자 선언한 수 이상 반드시
 존재 해야한다.
 
 standard:고정 인자중에서 가장 마지막 인자를 특별히 기준인자라고 한다 기준인자는 가변 인자의 바로 왼쪽 인자를 의미한다
 기준 인자가 중요한 이유는 함수 본체에서 가변인자를 추출하기 위한 기준 위치가 되기 때문이다

 ... : 가변 인자를 나타낸다. 가변인자는 아예 없거나 하나 이상이 될 수 있다.
 */



//void VFFunc(int arg1, int arg2, ...) {
//
//	char* p = (char*)&arg2;
//
//	#ifdef _WIN64
//		cout << *(double*)(p + 8) << endl;
//	#else
//	cout << *(double*)(p + 4) << endl;
//	#endif
//}
//
//void main() {
//	VFFunc(1, 2, 3.0, '4', "Five");
//
//}


//가변 인자 매크로


//#include<stdarg.h>
//
//void VFFunc(int arg1, int arg2, ...) {
//    va_list arg_ptr;
//    va_start(arg_ptr, arg2);
//    double varg3 = va_arg(arg_ptr, double);
//    char varg4 = va_arg(arg_ptr, char);
//    char* varg5 = va_arg(arg_ptr, char*);
//    va_end(arg_ptr);
//
//    cout << arg1 << endl;
//    cout << arg2 << endl;
//    cout << varg3 << endl;
//    cout << varg4 << endl;
//    cout << varg5 << endl;
//}
//
//
//
//
//void main() {
//
//	VFFunc(1, 2, 3.0, '4', "Five");
//
//
//}
//

//함수 중복 정의

/*
(int)(int,int) 는 인자의 개수가 다르기 때문에 서로 다른 인자 타입열이다.
(int,double),(double,int)는 타입의 순서가 다르기 때문에 서로 다른 인자 타입열이다.
(int,double)(int,double)은 타입의 순서와 개수가 같기 때문에 같은 인자 타입열이다.
*/



//void Func(int arg) {
//
//}
//
//void Func(double arg){
//
//}


//double SumIntInt(int a, int b) {
//
//	return(double)(a + b);
//}
//double SumDoubleDouble(double a, double b) {
//	return a + b;
//}
//
//double SumIntDouble(int a, int b) {
//
//	return a + (double)(a + b);
//}


//함수 중복 정의의 주의

//void Func(int arg) {
//}
//
//void Func(const int arg) { // Error
//}
//
//void main(){
//	int a = 1;
//	Func(a);
//
//
//}
//
// Func 가 상수 int 로 넘겨야할지 const int 로 넘겨야할지 컴파일러가 선택을 할수가 없습니다.



//void Func(int* arg){
//	cout << "int*" << endl;
//
//}
//void Func(const int* arg) {
//
//	cout << "const int*" << endl;
//
//}
//
//
//void main(){
//	int a = 1;
//	Func(&a);
//
//	const int ca = 1;
//	Func(&ca);
//
//}


void Func(char* arg) {

	//cout << "char*" << arg << endl;
	cout << "char*" << *arg << endl;
}

void Func(const char* arg) {
	/*cout << "const char*" << arg << endl;*/
	cout << "const char*" << *arg << endl;


}
void main() {
	//char* p = (char*)"A";
	//Func(p);
	char c = 'A';
	char* p = &c;
	Func(p);
	Func("B");

}