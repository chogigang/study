#include <iostream>
using namespace std;
//int array[] = { 15,-40,23,8,-16,-9,-4,5,11,3,-28,35,-1,20,-33 }; //를가지고 프로그램을 구현




//4번  역순 출력

void Reverse(int* array, const int n) {
	cout << "역순 출력" << endl;
	int array2[15] = {};
	for (int i = 0; i < n; i++) {
		array2[i] = array[(n - 1) - i];
	}
	for (int j = 0; j < n; j++) {
		cout << array2[j] << ",";
	}
}




//2번
void Maximum(int* array, int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (max < array[i]) {
			max = array[i];
		}
	}
	cout << "최대값: " << max << endl;
}

void Minimum(int* array, int n) {
	int min = 0;
	for (int i = 0; i < n; i++) {
		if (min > array[i]) {
			min = array[i];
		}
	}
	cout << "최소값: " << min << endl;
}

void main()
{

	int array[] = { 15,-40,23,8,-16,-9,-4,5,11,3,-28,35,-1,20,-33 };
	int temp = 0;
	int sum = 0;
	const int n = size(array);
	
	for (int i = 0; i < n; i++) {
		sum += array[i];
	}
	//1번 문제
	cout << "배열의 총합: " << sum << endl;

	Maximum(array, n);
	Minimum(array, n);
	Reverse(array, n);
	cout << "" << endl;
	cout << " 배열의 내림차순  " << endl;
	/*Sort(array, n);*/
	//3번
	/*int temp;*/
	for (int i = 0; i < n - 1; i++) {	
		for (int j = i + 1; j < n; j++) {
			if (array[i] < array[j]) {  
				//array[i] = temp;
				temp =  array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	//배열 내림차순 정렬 출력문
	for (int k = 0; k < n; k++) {
		cout << array[k] << ",";
	
	}


}

