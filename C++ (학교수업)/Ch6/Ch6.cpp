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


//void main() {
//	int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
//	int min = 0;
//	int max = 0;
//	const int N = size(arr); //원소 갯수
//
//
//	int b[N] = {};
//	for (int i = 0; i < N; i++) {
//		b[i] = arr[(N - 1) - i];//3번
//
//	
//	}
//	
//}


//4번 
//void main() {
//    int arr[] = { 1, 6, 9, 7, 3, 2, 0, 4, 8, 5 };
//    int temp;
//    int n = size(arr);
//
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] > arr[j]) { //오름차순
//                temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//
//    for (int k = 0; k < n; k++) {
//        cout << arr[k] << ",";
//    }
//
//    
//}


//void main() {
//    int arr[] = { 1, 6, 9, 7, 3, 2, 0, 4, 8, 5 };
//    int temp;
//    int n = size(arr);
//
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] < arr[j]) { //내림차순
//                temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//
//    for (int k = 0; k < n; k++) {
//        cout << arr[k] << ",";
//    }
//
//
//}



//call by value

// 함수는 무조건 main 위에 무조건 있어야한다.
// 
// 
//void func(int arg) { //arg 매개변수 함수의 전달값을 받는 변수
//
//
//	arg++; 
//	cout << arg << endl; //2
//
//}
//
//
//void main() {
//	int a = 1;
//	func(a); //함수 호출 전달값은 1 
//	cout << a << endl; //1
//
//}
// 
// 
// 변수로 함수를 넘길때는 값이 넘어가지만 배열로 함수로 넘기면 주소가 넘겨진다
// 이 둘은 차이가 있다 C++는 배열의 값을 대입연산자로 넣을수가 없다.


// call by reference

//void func(int arg[1]) {
//	arg[0]++; //0번째 인덱스 값을 +1을 시킴
//	cout << arg[0] << endl; //2
//
//}
//
//void main() {
//	int arr[1] = { 1 };
//	func(arr);
//	cout << arr[0] << endl; //2
//
//}

//서로 공유를 하고 있기 때문에 함수에서 값을 추가시키면서 main 함수에 있는 값도 증가함


//void func(int arg[4]) {
//	cout << sizeof(arg) << endl;  //4or 8
//	cout << arg[0] << endl;
//	cout << arg[1] << endl;
//}
//
//
//void main() {
//
//	int arr[4] = { 1,2,3,4 };
//	func(arr);
//
//}


//void func(int arg[2][3]) {
//
//	arg[1][2] = 1;
//
//}
//
//void main() {
//	int arr[2][3] = { {0} };
//	func(arr);
//	cout << arr[1][2] << endl;
//
//}
//

//void main() {
//
//
//	int arr[2][3];
//	cout << sizeof(arr) << endl; //배열의 메모리 크기
//	cout << sizeof(arr[0]) << endl;
//	cout << sizeof(arr[0][0]) << endl;
//
//
//}


 // 배열을 이용하여 앙수의 합과 음수의 합을 구하는 프로그램을 작성하시오.
void main() {
    int a = 0; //양수의 합 변수
    int b = 0; //음수의 합 변수
   
    int arr[] = { 15,-6,3,8,-2,5,6,-10,21,13,16,-4,-9,-14,7 };
    int n = size(arr);
    for (int i = 0; i< n; i++) {
        if (arr[i] > 0) {
            a += arr[i];
        }
        else {
            b += arr[i];
        }
    }


    cout << "양수 합 :" << a << endl;
    cout << "음수 합: " << b << endl;

}


