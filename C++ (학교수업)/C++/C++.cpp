#include <iostream>
using namespace std;

/*
void main() {

	int num;

	cout << "값을 입력하세요" << endl;
	cin >> num;

	string a = "짝수";
	string b = "홀수";
	
	string result = (num % 2 == 0) ? a : b;

	cout << num << "는" << result << endl;


}

*/

/*

int main() {
	
	int num;
	
	cout << "10000 이하의 값을 입력하세요: ";
	
	cin >> num;
	
	string a = (num >= 1 && num <= 10000) ? ((num >= 1000) ? "4" :
		
		(num >= 100) ? "3" :
		
		(num >= 10) ? "2" : "1") : "1만초과";
	
	cout << a << endl;

	return 0;
}
*/

//void main() {
//	
//	cout << double(1) / 2 << endl;
//}





//void main() {
//
//	char c1 = 2;
//	c1 = c1 >> 1;
//
//	char c2 = -126;
//	c2 = c2 >> 1;
//
//
//	cout<< c2 << endl;
//}
//


//int main() {
//	int score;
//
//	cout<< "과목 점수를 입력하세요: " << endl;
//	cin >> score;
//
//
//	switch (score/10){
//	case 10:
//		cout << "A+ 만점입니다." << endl;
//		break;
//	case 9:
//		cout << " A학점 입니다." << endl;
//		break;
//	case 8:
//		cout << "B학점 입니다." << endl;
//		break;
//	case 7 :
//		cout << "C학점 입니다." << endl;
//		break;
//	case 6:
//		cout << "D학점 입니다." << endl;
//		break;
//
//	default:
//		cout << "F학점 입니다." << endl;
//		break;
//
//	}
//	return 0;
//}



//void main() {
//	if (num % 3 == 0) {
//		cout << "num은 3의 배수가 맞습니다." << endl;
//	}else{
//		cout << "num은 3의 배수가 아닙니다." << endl;
//	}
//
//}
//

// 1부터 10까지의 합을 구하는 프로그램을 만드세요

//void main(){
//	int Sum = 0;
//
//	for (int i = 1; i < 11;) {
//		Sum += i;
//		i++;
//	}
//	cout << Sum<<endl;
//}


//void main() {
//
//	int i = 0;
//	int j = 0;
//
//	while (1) {
//		j = 0;
//
//		while (j<=i){
//			if (j == 3) {
//				break;
//			}
//			j++;
//		}
//		if (i == 5) {
//			break;
//		}
//		i++;
//	}
//	cout << i * j << endl;
//}

//void main() {
//
//	int Num;
//	cout << "정수를 입력하세요: " << endl;
//	cin >> Num;
//
//
//	if (Num % 2 == 0) {
//		cout << "짝수입니다." << endl;
//	}else{
//		cout << "홀수입니다." << endl;
//	}
//
//
//}


//int main() {
//	int Write;
//	cout << "받아쓰기 점수를 입력하세요:" << endl;
//	cin >> Write;
//	switch (Write/10)
//	{
//	case 10:
//		cout << "A 등급입니다." << endl;
//		break;
//	case 9:
//	case 8:
//		cout << "B 등급입니다." << endl;
//		break;
//	case 7:	
//	case 6:	
//	case 5:
//		cout << "C 등급입니다." << endl;
//		break;
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//		cout << "D 등급입니다." << endl;
//		break;
//	case 0:
//		cout << "F 등급입니다." << endl;
//	default:
//		cout << "잘못입력하셨습니다." << endl;
//		break;
//	}
//
//	return 0;
//}


//int main() {
//
//	for(int i = 1; i < 10; i++){
//		cout << i << "단" << endl;
//		int j = 1;
//		while (j < 10){
//			cout << i << "X" << j << "=" << i * j << endl;
//			j++;
//		}
//
//	}
//	return 0;
//}
//

//   for ,if,continue 를 사용하여 1~100까지 짝수만 출력하는 프로그램을 작성하시오.


//int main() {
//
//	for(int i = 0; i < 101; i++){
//		if(i % 2 == 0) {
//			cout<<i<< "는 짝수입니다." << endl;
//		}else{
//			continue;
//		}
//
//	}
//	return 0;
//}


/* 다음은 수학능력시험 퓨준 점수의 상위 비율에 따른 등급표이다. 이 표를 기반으로 다음 프로그램을 작성하시오

1등급 0%~4%
2등급 4%~11%
3등급 11%~23%
4등급 23%~40%
5등급 40%~60%
6등급 60%~77%
7등급 77%~89%
8등급 89%~96%
9등급 96~100%
*/

//(1) 수학능력시험 상위 비율을 입력받은 후 등급을 출력하는 프로그램을 if~else~if 문만을 이용하여 작성하시오
//수능 성적 상위 비율을 입력하세요!
//18.2
//3등급 입니다.

//int main() {
//	float scroe;
//	cout << "수능 성적 상위 비율을 입력하세요!" << endl;
//	cin >> scroe;
//
//
//	if (4 > scroe) {
//		cout << "1등급입니다." << endl;
//	}else if (11 > scroe && scroe > 4) {
//		cout << "2등급입니다." << endl;
//	}else if (23 > scroe && scroe > 11) {
//		cout << "3등급 입니다." << endl;
//	}else if (40 > scroe && scroe > 23) {
//		cout << "4등급 입니다." << endl;
//	}else if (60 > scroe && scroe > 40) {
//		cout << "5등급 입니다." << endl;
//	}else if (77 > scroe && scroe > 60) {
//		cout << "6등급 입니다." << endl;
//	}else if (89 > scroe && scroe > 77) {
//		cout << "7등급 입니다." << endl;
//	}else if (96> scroe && scroe > 89) {
//		cout << "8등급 입니다." << endl;
//	}else if (100 >= scroe && scroe > 96) {
//		cout << "9등급 입니다." << endl;
//	}
//		return 0;
//
//}
//
//



/*(2) 표준 등급을 입력할 경우 100명당 평균 몇 등인지 출력하는 프로그램을 작성하시오.
	표준 등급을 입력하세요!
	4
	평균 31.5등입니다.
*/


//int main() {
//	int scroe;
//	cout << "표준 등급을 입력하세요" << endl;
//	cin >> scroe;
//
//	
//	switch (scroe){
//	case 1:
//		cout <<" 평균" << (0 + 4) / 2.0<<"등입니다." << endl;
//		break;
//	case 2:
//		cout<<"평균" << (4 + 11) / 2.0<<"등입니다."<< endl;
//		break;
//	case 3:
//		cout<<"평균" << (11 + 23) / 2.0<<"등입니다." << endl;
//		break;
//	case 4:
//		cout<< "평균" << (23 + 40) / 2.0<<"등입니다." << endl;
//		break;
//	case 5:
//		cout<<"평균" << (40 + 60) / 2.0<<"등입니다."<< endl;
//		break;
//	case 6:
//		cout <<"평균" << (60 + 77) / 2.0<<"등입니다." << endl;
//		break;
//	case 7:
//		cout <<"평균" << (77 + 89) / 2.0<<"등입니다." << endl;
//		break;
//	case 8:
//		cout << "평균" << (89 + 96)/2.0 << "등입니다." << endl;
//		break;
//	case 9:
//		cout << "평균" << (96 + 100)/2.0 << "등입니다." << endl;
//		break;
//	default:
//		cout << "잘못 입력하셧습니다" << endl;
//		break;
//	}
//
//}

//void main(){
//	int num;
//	cout <<"정수를 입력하세요: " << endl;
//	cin >> num;
//
//
//	if (num % 2 == 0) {
//		cout << "짝수입니다" << endl;
//
//	}else{
//		cout << "홀수입니다." << endl;
//	}
//}

//void main(){
//
//	short sum = 0;
//	for (int i = 0; i < 11; ++i) {
//		sum += i;
//
//	}
//	cout << sum << endl;
//}
//


// 사용자로 부터 숫자를 입력받아 입력받은 숫자의 자리수를 출력하는 프로그램을
//작성하시오(while문을 사용하여 구현)


//void main() {

	//int Num;
	//cout << "수를 입력하세요" << endl;
	//cin >> Num;
	//int count = 0;

	//

	//while (Num!=0){
	//	Num/10;
	//	if (Num < 10) {
	//		count += 1;
	//		break;
	//	}
	//	++count;
	//
	//}
	//cout<< "입력받은 숫자 의 자리수: " <<count<< endl;
//}
	
void main() {
	int num;
	cout << "값을 입력하세요: " << endl;
	cin >> num;
	int count = 0;

	while (num != 0) {
		num /= 10;
		count++;
	}

	cout << "입력받은 숫자의 자리수: " << count << endl;
}