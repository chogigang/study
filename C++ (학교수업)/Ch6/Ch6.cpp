
#include <iostream>
using namespace std;

//int main()
//{
//   
//
//    int a = 100;
//
//    cout << a << endl;
//
//    cout << &a << endl;
//
//
//
//
//}


//int main() {
//
//	int arr[2];
//
//	int N = 2;
//
//	const int CN = 2;
//	int arr3[CN];
//
//
//
//
//}


//void main() {
//
//	//int a = 100;
//	//int b= a;  //OK
//	//cout << a << endl;
//	//cout << b << endl; //OK
//
//
//
//
//	int a[2] = { 0,1 };
//	int b[2] = a; //Error  배열과 배열은 대입 연산자를 사용할수가 없다.
//
//}


//void main() {
//
//	int a[2] = { 100,200 };
//	int b = 300;
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << &b << endl;
//
//
//}

//void main(){
//	int arr[2] = { 1,2 };
//	int*p =arr;
//
//
//	cout << *p << "," << *arr << endl; //1,1
//	cout << arr[0] << endl;//1
//	cout << arr[1] << endl; //2
//	cout << *(p + 1) << endl; //2
//	cout << p[0] << endl; //1
//	cout << p[1] << endl; //2
//	cout << *(arr + 1) << endl; //2
//
//}




//void main() {
//	int arr[2] = { 1,2 };
//	//int* p = &arr; //Error
//	int(*p)[2] = &arr;
//	cout << (*p)[0] << "," << (*p)[1] << endl;
//
//}


//void main() {
//
//	int arr1[8] = { 1 };
//	int arr2[8] = { 1, };
//	int arr3[8] = { 0 };
//	int arr4[8] = {};  //0
//	int arr5[8] = { 1,2,3 };
//	int arr6[8] = { 1,2,3, };
//	int arr7[8];  //쓰래기 값
//
//	cout << arr1 << endl;
//
//}



//void main() {
//	char str1[] = { 'C','+','+' };
//	char str2[] = "C++";
//	char str3[] = { "C++" };
//
//
//	cout << sizeof(str1) << endl; //3
//	cout << sizeof(str2) << endl; //4
//	cout << sizeof(str3) << endl; //4
//
//
//}


//void main() {
//
//	int a[] = { 10,20,30,40,50,60,70,80,90,100 };
//	int b;
//	int c;
//
//	//cout << sizeof(a) << endl; //40   
//	//cout << sizeof(a) / sizeof(a[0]) << endl; //4 
//	//cout << sizeof(a) / sizeof(int) << endl;
//	//cout << sizeof(a) / sizeof(a[6]) << endl; 
//	//cout << size(a) << endl; //   이것 을 사용
//	////cout << len(a) << endl; // C++ 는 len 이 없다. 따로 라이브러리를 불러와야함
//	cout << "-------------------" << endl;
//	
//	c = ++a[3];
//	b = (a[3] + a[6]) * a[2];
//	a[5] = 1000;
//	//a[10] = 400; //Error
//
//	cout << a[4] << endl;
//	cout << a[4] + a[7] << endl;
//	cout << b << endl;
//	cout << "-------------------" << endl;
//	cout << c << endl; //41 
//	cout << a[3] << endl; //41
//	cout << *(a + 3) << endl; // 41
//	//cout << a[10] << endl; //Erorr
//
//}




//2차원 배열
//void main() {
//
//	int arr[2][3] = { {11,12,13},{21,22,23} };
//	cout << arr << endl;
//	cout << arr[0][0] << endl;
//	cout << arr[1][0] << endl;
//	cout << arr[1][2] << endl;
//
//}
//



 
//void main() {
//
//	int arr[2][3] = { { 11,12,13 },{21,22,23} };
//	//int** pp = (int**)arr;  //Erorr
//	int(*pp)[3] = arr; //ok
//	cout << pp[1][2] << endl;
//}



 //1번
//void main() {
//
//	int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
//	int sum = 0;
//	int N; //원소 갯수
//	N = size(arr);
//
//	for (int i = 0; i < N; i++) {
//		sum = sum + arr[i];
//
//	
//	}
//	cout << "arr의 모든 원소의 합계: "<<sum << endl;
//
//
//
//}



// 2번
//void main() {
//	int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
//	int min =0;
//	int max =0;
//	int N; //원소 갯수
//		N = size(arr);
//	
//	for (int i = 0; i < N; i++) {
//		if (min > arr[i]) {
//			min = arr[i];
//
//		}else if(max< arr[i]) {
//			max = arr[i];
//		}
//		
//	}
//	cout <<"최소값 :" << min << endl;
//	cout <<"최대값 :" << max << endl;
//
//}


//3번 


void main() {
	int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
	int min = 0;
	int max = 0;
	const int N = size(arr); //원소 갯수


	int b[N] = {};
	for (int i = 0; i < N; i++) {
		b[i] = arr[(N - 1) - i];//3번

	
	}
	
	
	}
