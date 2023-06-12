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
	
//void main() {
//	int num;
//	cout << "값을 입력하세요: " << endl;
//	cin >> num;
//	int count = 0;
//
//	while (num != 0) {
//		num /= 10;
//		count++;
//	}
//
//	cout << "입력받은 숫자의 자리수: " << count << endl;
//}


//연산자 

//두 정수를 입력받아, 덧셈, 뺄셈, 곱셈, 나눗셈을 수행하는 프로그램 작성

//void main() {
//
//	int num1;
//	cout << "첫번째 정수를 입력하세요" << endl;
//	cin >> num1;
//	int num2;
//	cout << "두번째번째 정수를 입력하세요" << endl;
//	cin >> num2;
//
//	cout<< "두수의 합:" << num1 + num2 << "  두수의 차:" << num1 - num2 << " 두수의 곱:" << num1 * num2 << " 두수의 나눗셈:" << num1 / num2 << endl;
//
//}

//삼항 연산자를 이용하여 입력받은 수가 홀수인지 짝수인지 판별하는 프로그램 작성

//void main() {
//	int num;
//	cout << "정수를 입력하세요: " << endl;
//	cin >> num;
//
//	/*if (num % 2 == 0) {
//		cout << "짝수입니다." << endl;
//	}else{
//		cout << "홀수입니다." << endl;
//	}*/
//
//	string a =(num % 2 == 0) ? "짝수" : "홀수";
//
//	cout << a << endl;
//}


 //세 개의 정수를 입력받아, 가장 큰 수를 출력하는 프로그램 작성	

//void main() {
//	int num1; 
//	cout << "첫번째 정수를 입력하세요" << endl;
//	cin >> num1;
//	
//	int num2;
//	cout << "두번째 정수를 입력하세요" << endl;
//	cin >> num2;
//	
//	int num3;
//	cout << "세번째 정수를 입력하세요" << endl;
//	cin >> num3;
//
//	if (num1 > num2 && num1 > num3) {
//		cout <<"첫번째 정수"<< num1 << "이 가장큽니다." << endl;
//	}else if(num2>num1&&num2>num3){
//		cout <<"두번째 정수 "<< num2 << "이 가장큽니다." << endl;
//	}else {
//		cout <<"세번째 정수 "<< num3 << "이 가장큽니다." << endl;
//	
//	}
//}


//랜덤으로 생성된 수를 이용하여 가위바위보 게임을 구현하는 프로그램 작성




// 세 개의 수를 입력받아, 삼각형을 만들 수 있는지 판별하는 프로그램 작성
//void main() {
//	short num1;
//	cout<< "첫번째 삼각형 각도를 작성하세요" << endl;
//	cin >> num1;
//
//	short num2;
//	cout << "두번째 삼각형 각도를 작성하세요" << endl;
//	cin >> num2;
//	
//	short num3;
//	cout << "세번째 삼각형 각도를 작성하세요" << endl;
//	cin >> num3;
//
//	if (num1 + num2 + num3 == 180) {
//		cout << "삼각형 만들수 있습니다람쥐" << endl;
//	}else{
//		cout << "못만듭니다." << endl;
//	}
//}

//  시험 범위 모든 구문을 사용한 

//int main() {
//
//    int choice;
//   
//    do {
//        cout << "1. 숫자를 더하는연산자" << endl;
//        cout << "2. 빼기를 사용하는 연산자" << endl; 
//        cout << "3. 곱하기 하는 연산자" << endl;
//        cout << "4. 나누기 하는 연산자" << endl;
//        cout << "5. 나가기 " << endl;
//        cout << "Enter 눌러서 선택하세요: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            int num1, num2;
//            cout << "Enter two numbers to add: ";
//            cin >> num1 >> num2;
//
//            cout << num1 << " + " << num2 << " = " << num1 + num2 <<endl;
//            break;
//        }
//        case 2: {
//            int num1, num2;
//            cout << "Enter two numbers to subtract: ";
//            cin >> num1 >> num2;
//            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
//            break;
//        }
//        case 3: {
//            int num1, num2;
//            cout << "Enter two numbers to multiply: ";
//            cin >> num1 >> num2;
//            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//            break;
//        }
//        case 4: {
//            int num1, num2;
//            cout << "Enter two numbers to divide: ";
//            cin >> num1 >> num2;
//            if (num2 == 0) {
//                cout << "Error: division by zero." << endl;
//            }
//            else {
//                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//            }
//            break;
//        }
//        case 5: {
//            cout << "Goodbye!" << endl;
//            break;
//        }
//        default: {
//            cout << "Invalid choice. Please try again." << endl;
//            break;
//        }
//        }
//    } while (choice != 5);
//
//    return 0;
//}


//1 부터 100까지 소수 구하는 C++ 코드

//void main() {
//	for (int i = 1; i < 101; i++) {
//		short flage = 1;
//
//		for (int j = 2; j < i; ++j) {
//			if (i % j == 0) {
//				flage = 0;
//				break;
//			}
//		}
//		if (flage == 1) {
//			cout << "소수인 " << i << "  를 찾았습니다." << endl;
//		}
//	}
//}



//입력받은 값을 소수로 확인하는 코드 
//void main() {
//	int num;
//	cout << "값을 입력하세요" << endl;
//	cin >> num;
//	short a = true;
//
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0) {
//			a = false;
//			cout << num << "은 소수가 아닙니다." << endl;
//			break;
//		}
//	} // for문 끝자락
//	if (a == true) {
//		cout << num << "은 소수입니다." << endl;
//	}
//
//}
//




//int main() {
//
//    int choice;
//    int num3 = 0;
//    do {
//        cout << "1. 숫자를 더하는연산자" << endl;
//        cout << "2. 빼기를 사용하는 연산자" << endl;
//        cout << "3. 곱하기 하는 연산자" << endl;
//        cout << "4. 나누기 하는 연산자" << endl;
//        cout << "5. 나가기 " << endl;
//        cout << "6. 초기화 하기" << endl;
//        cout << "Enter 눌러서 선택하세요: ";
//
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            int num1, num2;
//            if (num3 != 0) {
//                cout << "더할값을 입력하세요: ";
//                cin >> num2;
//                cout << num3 << " + " << num2 << " = " << num3 + num2 << "\n" << endl;
//                num3 = num3 + num2;
//                continue;
//            }
//            else {
//                int num1, num2;
//                cout << "초기 더할값을 입력하세요: ";
//                cin >> num1 >> num2;
//                cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n" << endl;
//                num3 = num1 + num2;
//                continue;
//            }
//
//        }
//        case 2: {
//            int num1, num2;
//            if (num3 != 0) {
//                cout << "뺄값을 입력하세요: ";
//                cin >> num2;
//                cout << num3 << " - " << num2 << " = " << num3 - num2 << "\n" << endl;
//                num3 = num3 - num2;
//                continue;
//            }
//            else {
//                int num1, num2;
//                cout << "초기 뺄값을 입력하세요: ";
//                cin >> num1 >> num2;
//                cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n" << endl;
//                num3 = num1 - num2;
//                continue;
//            }
//        }
//        case 3: {
//            int num1, num2;
//            if (num3 != 0) {
//                cout << "곱할값을 입력하세요: ";
//                cin >> num2;
//                cout << num3 << " X " << num2 << " = " << num3 * num2 << "\n" << endl;
//                num3 = num3 * num2;
//                continue;
//            }
//            else {
//                int num1, num2;
//                cout << "초기 곱할값을 입력하세요: ";
//                cin >> num1 >> num2;
//                cout << num1 << " - " << num2 << " = " << num1 * num2 << "\n" << endl;
//                num3 = num1 * num2;
//                continue;
//            }
//        }
//        case 4: {
//            int num1, num2;
//
//            if (num3 != 0) {
//                cout << "나눌 값을 입력하세요: ";
//                cin >> num2;
//                if (num2 == 0) {
//                    cout << "Error: 0은 나눌수가 없습니다." << endl;
//                }
//                else {
//                    cout << num3 << " / " << num2 << " = " << num3 / num2 << "\n" << endl;
//                    num3 = num3 / num2;
//                    continue;
//                }
//            }
//            else { //num3 값이 0일때 발동하는 else문 
//                cout << "나눌 값을 입력하세요 : ";
//                cin >> num1 >> num2;
//                if (num2 == 0) {
//                    cout << "Error: 0은 나눌수가 없습니다.\n" << endl;
//                }
//                else {
//                    cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n" << endl;
//                    num3 = num1 / num2;
//                }
//                continue;
//
//            }
//        }
//        case 5: {
//            cout << "Goodbye!" << endl;
//            break;
//        }
//        case 6:
//            num3 = 0;
//            cout << "값이 초기화 되었습니다.\n\n\n" << endl;
//            continue;
//        default: {
//            cout << "잘못입력하셧습니다 다시입력해주세요\n\n\n" << endl;
//            continue;
//        }
//        }
//    } while (choice != 5);
//
//    return 0;
//}





//void main() {
//	for (int i = 2; i < 10; i++) {
//		cout << "" << endl;
//		cout <<i<< "단 출력" << endl;
//		short j = 1;
//		while (j<9) {
//	
//		cout << i << "x" << j << "=" << i * j << endl;
//		j++;
//
//		}
//	}
//}



//1번 사용자로부터 두 개의 정수를 입력받아, 두 수 사이의 모든 정수의 합을 구하는 프로그램을 작성하세요. (for문 사용)

//void main() {
//	int num1;
//	int num2;
//	int sum = 0;
//	cout << "두 개의 정수를 입력하세요" << endl;
//	cin >> num1 >> num2;
//	num1 = num1 + 1;
//	for (num1; num1 < num2; num1 += 1) {
//		cout << num1 << endl;
//		sum+=num1;
//	}
//	cout << "두 수 사이의 모든 정수의 합은" << sum << endl;
//}

//void main()
//{
//	for (int i = 1; i < 101; i++) {
//		if (i % 3 == 0 or i % 5 == 0) {
//			cout << i << endl;
//		}
//			
//	}
//
//}

//1 부터 100까지 소수 구하는 C++ 코드

//void main() {
//	for (int i = 1; i < 101; i++) {
//		short flage = 1;
//
//		for (int j = 2; j < i; ++j) {
//			if (i % j == 0) {
//				flage = 0;
//				break;
//			}
//		}
//		if (flage == 1) {
//			cout << "소수인 " << i << "  를 찾았습니다." << endl;
//		}
//	}
//}


//입력받은 값을 소수로 확인하는 코드 

//

//void main()
//{
//	short sArr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pI = (int*)sArr;
//	int iData = *((short*)(pI + 2));
//	cout << iData << endl;
//}





// //구조체 연습문제 
//
//struct Robot {
//	string name;
//	int height;
//	int weight;
//	int power;
//};
//
//// (2) 로봇의 명세를 출력하는 함수 Print 구현
//void Print(Robot* robot) {
//	cout << "로봇 명세" << endl;
//	cout << "이름: " << robot->name << endl;
//	cout << "신장: " << robot->height << "m" << endl;
//	cout << "무게: " << robot->weight << "T" << endl;
//	cout << "마력: " << robot->power << endl;
//	cout << endl;
//}
//
//// (3) 로봇들의 평균 신장, 평균 무게, 평균 마력을 출력하는 함수 Avg 구현
//void Avg(Robot robots[4]) {
//	double totalHeight = 0;
//	double totalWeight = 0;
//	double totalPower = 0;
//
//	for (int i = 0; i < 4; i++) {
//		totalHeight += robots[i].height;
//		totalWeight += robots[i].weight;
//		totalPower += robots[i].power;
//	}
//
//	double avgHeight = totalHeight / 4;
//	double avgWeight = totalWeight / 4;
//	double avgPower = totalPower / 4;
//
//	cout << "로봇들의 평균 신장: " << avgHeight << "m" << endl;
//	cout << "로봇들의 평균 무게: " << avgWeight << "T" << endl;
//	cout << "로봇들의 평균 마력: " << avgPower << endl;
//	cout << endl;
//}
//
//int main() {
//	// (4) 모든 로봇의 명세를 출력하는 프로그램
//	Robot robots[4] = {
//		{"태권브이", 18, 80, 3000},
//		{"마징가", 17, 70, 2500},
//		{"메칸더브이", 20, 90, 3500},
//		{"그랜다이져", 22, 100, 5000}
//	};
//
//	for (int i = 0; i < 4; i++) {
//		Print(&robots[i]);
//	}
//
//	Avg(robots);
//
//	return 0;
//}


//void main(){
//	int a = 3;
//	int* p = &a;
//
//
//	cout << ++ * p << endl;
//
//}


//void main() {
//
//	char* pC = NULL;
//	int* pI = NULL;
//	double* pD = NULL;
//
//
//	cout << (void*)(pC + 2) << endl;
//	cout << (void*)(pI + 2) << endl;
//	cout << (void*)(pD + 2) << endl;
//
//
//}


//void main() {
//
//	int i;
//	int* p = &i;
//	*p = 1;
//	cout << *p << endl;
//
//}


//void main() {
//	int a=1;
//
//	int* ra;
//	ra = &a;
//
//	cout << a << endl;
//
//
//}

//	char str[] = "C++";
//
//
//	cout << sizeof(str) << endl;
//
//
//}


//void main() {
//	int arr[2][3] = { {11, 12, 13}, {21, 22, 23} };
//
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//
//
//}


//void main() {
//	int arr[2][3] = { {11, 12, 13}, {21, 22, 23} };
//	/*int** pp = (int**)arr;*/
//	int(*pp)[3] = arr;
//	cout << pp[1][2] << endl;
//
//}



//typedef struct STag {
//
//	int m;
//	char str1[4];
//	const char* str2;
//}SType;
//
//
//void main() {
//
//	SType s1;
//	s1.m = 2017;
//	memcpy(s1.str1, "C++", 4);
//	s1.str2 = "World";
//	SType s2;
//	s2 = s1;
//
//	cout << s2.m << " " << s2.str1 << "  " << s2.str2 << endl;
//}



typedef struct STag {

	char m;

}SType;



void main() {

	SType a, b;

	a.m =1;
	b = a;


	if (a == b) {
		cout << "Equal" << endl;
	}
}