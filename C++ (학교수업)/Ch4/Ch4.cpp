
/*
#include <iostream>
using namespace std;
*/
/*
void main()
{
    if (5) { //if 문 시작
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;
    }
}
*/


/*
#define SWAP(a,b) a ^=b; b ^=a; a^=b;
void main() {
    int a = 0;
    int b = 1;

    if (1) {
        SWAP(a, b);
    }
    cout << a << "" << b << endl;
}
*/
#include <iostream>
using namespace std;
    /*
    void main(){

        unsigned short age;
        cout << "당신의 나이를 입력하세요" << endl;

        cin >> age;

        if (age < 20) {
            cout << "청소년 할인" << endl;
        }

}
*/
/*
void main() {
    unsigned short run;
        cout << "오늘 얼마나 걸으셧나요? " << endl;
        cin >> run;

        if (run > 1000) {
            cout << "목표달성" << endl;

        }
}
*/

//void main() {
//   unsigned int num;
//    cout << "정수를 입력하세요" << endl;
//    cin >> num;
//
//    if (num % 2 == 0) 
//        cout << "입력한 정수는 짝수" << endl;
//    else
//        cout << "입력한 정수는 홀수" << endl;
//    }



//void mian() {
//    unsigned short num;
//    cout << "시간을 입력하세요" << endl;
//    cin >> num;
//
//    if (num < 12) {
//        cout << "오전입니다." << endl;
//    }else{
//        cout << "오후 입니다." << endl;
//    }
//
//}


//void main() {
//    unsigned int num;
//        cout << "정수를 입력하세요" << endl;
//        cin >> num;
//        if (num % 3 == 0) {
//            cout << "3의 배수" << endl;
//        }
//        else
//        {
//            cout << "3의 배수가 아니다." << endl;
//        }
//    
//}


void main() {

    unsigned int num;
    cout << "정수를 입력해서 3의 배수와 5의 배수를 확인해봅시다." << endl;
    cin >> num;

    if (num % 3 == 0 && num % 5 ==0 ) {
        cout << "3과 5의 배수입니다." << endl;
    }else {
        cout << "해당상황 없습니다." << endl;
    }
        

}