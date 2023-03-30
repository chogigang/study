/*#include <iostream> 
using namespace std;


int main()
{
	cout<< "hello World!" << endl;
	return 0;

}
*/

//#include <iostream> //해더 파일  개발자가 직접 작성하기도 하지만 이미 만들어져서 기본으로 제공되기도 한다.  
//using namespace std;

// #include :단어 그대로 <>안에 외부의 파일을 참고해달라는 명령어  #include<iostream>을 참조하라는 명령이 (자바의 imput문과 동일할까?)
// iostream :입력과 출력 관련한 모든 명령어를 모아둔 파일 



/*꼭 헤더파일을 작성해야하며 헤더 파일을 삭제하고 실행을 하면  error C2065 : 'cout' : 선언되지 않은 식별자 입니다., error C2065 'endl' : 선언되지 않은 식별자입니다.
해당 오류가 발생합니다.
 링커가 이오류를 찾아 준다.
 컴파일은 main부터 항상 실행하고 밑에서는 인식을 못한다.
 cout<< 00<< endl;   자바의 프린트 아웃.스크린*
 c++ 에서 return 0 은 오류가 없을때  return 1 은 오류가 있을때 반환함.
 
 운영체재가 main() 을 호출한다.
 
 */

//#include <iostream>
//sing namespace std;

//char main() {



//}

/*
#include <iostream>

using namespace std;

void main() {
	int a = 3;
	int* pa = &a;

	cout << pa << endl << *pa << endl;
	cout << &a << endl << a << endl;


}
*/

/*
#include <iostream>

using namespace std;

class Cperson {
public:
	const char* m_Name; //const 상수  안붙여주면 
	int m_Age;


	void print() {
		cout << "Name:" << m_Name << endl;
		cout << "Age" << m_Age << endl;
	}
};
void main() {
	Cperson p[2];

	p[0].m_Name = "Kim Do Hyung";
	p[0].m_Age = 11;
	p[0].print();


	p[1].m_Name = "Kim Na In";
	p[1].m_Age = 9;
	p[1].print();




}
*/

/*
#include <iostream>

using namespace std;
int g_Arr[2][3];

int(*func(int arg))[2][3]{
for (int i = 0; i < 2; i++) 
{
	for (int j = 0; j < 3; j++)
	{
		g_Arr[i][j] = arg;
	}
	}
return &g_Arr;
}


void main() {
	cout << (*func(7))[0][0] << endl;
	cout << (*func(7))[1][2] << endl;
	

}
*/
/*
#include<iostream>
using namespace std;


typedef int GLOBAL_INT;

void Func(){
	typedef int LOCAL_INT;
	LOCAL_INT i; //OK 한지역 에서 변수 지역변수
}
GLOBAL_INT g1; //OK

//LOCAL_INT g2; //Error   지역변수범위에 넘어서서 선언했기때문에 오류 

typedef int a;
void main() {
	a  b= 3;

	cout << b << endl;
}
*/
/*
	#include<iostream>
	using namespace std;


	int ga;     //초기화
	int gb = 1; //1초기화

	void main() {
	
		int a;     //미정의 값 초기화
	int b = 2; //2 초기화


	cout << ga << endl;
	cout << gb << endl;
	cout << a << endl;
	cout << b << endl;
}
*/

/*
#include<iostream>
using namespace std;


const int gc1; //Error
const int gc2 = 1;


	void main() {
	const int c1 = 1;  //Error
	c1 = 1;  //Error
	
	
	
	const int c2 = 2; //ok

}
*/

//#include<iostream>
//using namespace std;
/*
void main() {
	const int arr1[3];  //Errpr

	const int arr2[3] = { 1,2,3 };  //ok

	arr2[0] = 7;  //Error
}
*/
/*
 void main() {
	int a;

	const int* cp;  //ok

	cp = &a;
	*cp = 1; //Error

	a = 2;
}
*/
/*
void main() {
	int a;

	int* const cp; //Error
	int* const cp = &a; //Ok
	*cp = 1; //OK
}
*/

/*
 //자동 변수 지정자 auto
void main() {
	auto int a = 1; //자동 변수 지정자 auto

}
*/
#include<iostream>
using namespace std;
/*
void main() {
	auto a = 1; //auto -> int 

	cout << a << endl;



}
*/

/*
void main() {
	auto a; //Compile Error
	a = 1;

}
*/


double Divide(int a, int b) {
	return (double)a / b;

}

void main() {
	auto r = Divide(1, 2); //auto -> double

	cout << r << endl;

}


// 매개 변수의 auto 추론 실패
double Divide(auto a, auto b)//Compile Error
{
	return (double)a / b;

}