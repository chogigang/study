/*#include <iostream> 
using namespace std;


int main()
{
	cout<< "hello World!" << endl;
	return 0;

}
*/

//#include <iostream> //�ش� ����  �����ڰ� ���� �ۼ��ϱ⵵ ������ �̹� ��������� �⺻���� �����Ǳ⵵ �Ѵ�.  
//using namespace std;

// #include :�ܾ� �״�� <>�ȿ� �ܺ��� ������ �����ش޶�� ��ɾ�  #include<iostream>�� �����϶�� ����� (�ڹ��� imput���� �����ұ�?)
// iostream :�Է°� ��� ������ ��� ��ɾ ��Ƶ� ���� 



/*�� ��������� �ۼ��ؾ��ϸ� ��� ������ �����ϰ� ������ �ϸ�  error C2065 : 'cout' : ������� ���� �ĺ��� �Դϴ�., error C2065 'endl' : ������� ���� �ĺ����Դϴ�.
�ش� ������ �߻��մϴ�.
 ��Ŀ�� �̿����� ã�� �ش�.
 �������� main���� �׻� �����ϰ� �ؿ����� �ν��� ���Ѵ�.
 cout<< 00<< endl;   �ڹ��� ����Ʈ �ƿ�.��ũ��*
 c++ ���� return 0 �� ������ ������  return 1 �� ������ ������ ��ȯ��.
 
 �ü�簡 main() �� ȣ���Ѵ�.
 
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
	const char* m_Name; //const ���  �Ⱥٿ��ָ� 
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
	LOCAL_INT i; //OK ������ ���� ���� ��������
}
GLOBAL_INT g1; //OK

//LOCAL_INT g2; //Error   �������������� �Ѿ�� �����߱⶧���� ���� 

typedef int a;
void main() {
	a  b= 3;

	cout << b << endl;
}
*/
/*
	#include<iostream>
	using namespace std;


	int ga;     //�ʱ�ȭ
	int gb = 1; //1�ʱ�ȭ

	void main() {
	
		int a;     //������ �� �ʱ�ȭ
	int b = 2; //2 �ʱ�ȭ


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
 //�ڵ� ���� ������ auto
void main() {
	auto int a = 1; //�ڵ� ���� ������ auto

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


// �Ű� ������ auto �߷� ����
double Divide(auto a, auto b)//Compile Error
{
	return (double)a / b;

}