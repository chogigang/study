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



//void main() {
//
//	int* pI = NULL;
//	double* pD = NULL;
//
//	cout << (void*)((char*)pI + 1) << endl;  //int 에서 char 로 형변환을 하였기 때문에 4 -> 1 바이트로 변경되었기 때문에 +1을 했을대 4 가 아닌 1로 계산됨
//	cout << (void*)((char*)pD + 1) << endl;
//
//}


//void main() {
//
//	int a;
//	int* p = &a;
//	*p = 1;
//
//	cout << a << endl;
//
//}

//class CTest {
//	char arr[16];
//
//};
//
//
//void main() {
//
//	CTest t;
//
//
//	CTest* pT = &t;
//	cout << pT << endl;
//
//
//	pT++;
//	cout << pT << endl;
//
//	pT++;
//	cout << pT << endl;
//
//}

//class CTest {
//public:
//	int m_i;
//	double m_d;
//
//};
//
//void main() {
//	CTest t;
//
//	CTest* pT = &t;
//	pT->m_i = 1;
//	pT->m_d = 3.141592;
//
//	cout << t.m_i << endl;
//	cout << t.m_d << endl;
//
//}



//void main() {
//	char c;
//	int i;
//	double d;
//
//
//	void* p1 = &c;
//	void* p2 = &i;
//	void* p3 = &d;
//
//
//}




//void main() {
//	int i;
//	void* p = &i;
//
//	//*p = 1;  //Errpr  1을 대입할 메모리 공간이 없기때문에 오류가 걸린다.
//	*(int*)p = 1; //OK
//
//
//
//}


//void main() {
//	int i = 0;
//	void* p = &i;
//
//
//
//	p + 1; //Error
//	p++; //Error
//	p--;  // Error
//	p[0]; // Error
//}



//void main() {
//	int a;
//	int* p = &a;
//	int** pp = &p;
//
//
//	**pp = 3;
//	cout << a << endl;
//	cout << *p << endl;
//	cout << **pp << endl;
//
//
//}


//참조 타입 

//void main() {
//	int a;
//	int& ra = a;
//
//	ra = 1;
//	cout << a << endl;
//
//}


//void main() {
//
//	int a = 1;
//	//int& ra;//Error
//	//ra = a;
//	cout << a << endl;
//
//	int& ra = a;
//	ra = 2;
//	cout << a << endl;
//
//
//}


void main() {

	const int& ra = 1;
	int* p = (int*)&ra;
	*p = 2;
	cout << ra << endl;

}
