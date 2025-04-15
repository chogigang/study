#include "ch3 3-10.h"   // 헤더 파일 포함
#include <iostream>    // 표준 입출력 사용
using namespace std;

// Add 클래스 구현 (덧셈)
void Add::setValue(int x, int y) {
    a = x;
    b = y;
}
int Add::calculate() {
    return a + b;
}

// Sub 클래스 구현 (뺄셈)
void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}
int Sub::calculate() {
    return a - b;
}

// Mul 클래스 구현 (곱셈)
void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}
int Mul::calculate() {
    return a * b;
}

// Div 클래스 구현 (나눗셈)
void Div::setValue(int x, int y) {
    a = x;
    b = y;
}
int Div::calculate() {
    if (b == 0) {  // 0으로 나누는 경우 오류 처리
        cout << "Error: 0으로 나누었습니다." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    // 연산 클래스 객체 생성
    Add a;
    Sub s;
    Mul m;
    Div d;

    int num_1, num_2;  // 사용자 입력을 받을 변수
    char sign;         // 연산자를 저장할 변수

    while (true) {
        // 사용자 입력 받기
        cout << "두 정수와 연산자를 입력하세요>> ";
        cin >> num_1 >> num_2 >> sign;

        // 입력된 연산자에 따라 적절한 연산 수행
        if (sign == '+') {
            a.setValue(num_1, num_2);
            cout << a.calculate() << endl;
        } else if (sign == '-') {
            s.setValue(num_1, num_2);
            cout << s.calculate() << endl;
        } else if (sign == '*') {
            m.setValue(num_1, num_2);
            cout << m.calculate() << endl;
        } else if (sign == '/') {
            d.setValue(num_1, num_2);
            cout << d.calculate() << endl;
        } else {
            cout << "잘못된 연산자입니다." << endl; // 유효하지 않은 연산자 입력 시 경고 출력
        }
    }
}
