#include <iostream>
using namespace std;


//void main(){
//	
//	int a = 1;
//	cout << a << endl;
//	cout << &a << endl; // & 16진수 출력 연산자
//
//
//
//
//
//
//}

//void main(){
//
//	int a;
//	int* p = &a; // int*  <<포인터 변수     a의 주소값을 저장   포인터가  대상을 가르키는 자료형을 일치 시켜야한다.
//	*p = 1;
//	cout << a << endl;
//	cout << &a << endl;
//
//	cout << *p << endl; //주소 *p 에 선언한 선언값을 출력 즉  - - 는 + 라고 생각하고 주소 -주소 => 저장한값으로 생각하자.
//	cout << p << endl; //그냥 주소를 출력
//
//	
//	cout << sizeof(a) << endl;
//	cout << sizeof(p) << endl; //64비트 체제라서 8이 출력한다  컴퓨터에 따라 다르게 출력한다
//
//}

//void main() {
//	int a = 3;
//	int* p1, p2, * p3;
//
//
//	p1 = &a;
//	//p2 = &a;  //일반 변수는 메모리상 주소를 선언할수 없기 때문에 오류를 발생시키고 있다.
//	p3 = &a;
//
//	cout << p1 <<"   " << p3 << endl;
//}

//void main() {
//
//	int a;
//	int* p = &a;
//	*p = 3;
//
//
//}


//void main() {
//
//	int a = 0;
//
//	char* s = (char*)&a;
//
//	//*s = 'C';
//	*(s + 0) = 'C';
//	*(s + 1) = '+';
//	*(s + 2) = '+';
//	*(s + 3) = '\0';
//
//	cout << (char*)&a << endl;
//
//	//cout << +s << endl;
//	/*cout << +s + 1 << endl;
//	cout << +s + 2 << endl;
//	cout << +s + 3 << endl;
//	*/
//}

//void main(){
//
//	char c;
//	int i;
//
//	//char *pC =&i; //Error
//	char* pC = &c; //OK
//
//	//int* pI = &c;  //Error
//	int* pI = &i; //Ok
//}


//void main() {
//
//	char* pC = NULL;
//	int* pI = NULL;
//	double* pD = NULL;
//
//
//	cout << (void*)(pC + 1) << endl;  //void 타입이 명확하지 않을때
//	cout << (void*)(pI + 1) << endl;
//	cout << (void*)(pD + 1) << endl;
//
//}

void main() {

	int* pI = NULL;
	double* pD = NULL;

	cout << (void*)((char*)pI + 1) << endl;
	cout << (void*)((char*)pD + 1) << endl;

}


