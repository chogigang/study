/*
 다수의 클래스를 선언하고 활용하는 간단한 문제이다. 더하기(+),빼기(-),곱하기(*),나누기(/)를 수행하는 4개의 클래스 Add, Sub Mul,Div 를 만들고자한다. 이들은 모두 공통으로 다음 멤버를 가진다.
 int 타입 변수 a,b : 피연산자
 void setValue(int x, int y )함수: 매개변수 x,y를 맴버,a,b에 복사
 int calculate()함수: 연산을 실행하고 결과 리턴
 
 main()함수는 Add,Sub,Mul,Div 클래스 타입의 객체 a,s,m,d를 생성하고 아레와 같이 키보드로부터 두개의 정수와 연산자를 입력받고 a,s,m,객체 중에서 연산을 처리할 객체의 setValue()함수를 호출한 후,
 calculate()를 호출하여 결과를 화면에 출력한다. 프로그램은 무한루프를 돈다.
 */

#include <iostream>
#include <cstring>  // strcmp 사용을 위해 추가
using namespace std;

// Add 클래스
class Add {
 //선언부
private:
    int a;
    int b;
public:
    void setValue(int x, int y);
    int calculate();
    
};
//구현부
//setter
void Add::setValue(int x, int y) {
    a = x;
    b = y;
}

int Add::calculate() {
    return a + b; //계산한 값을 리턴으로 반환
}

// Sub 클래스
class Sub {
private:
    int a;
    int b;
public:
    void setValue(int x, int y);
    int calculate();
};
//  sub선언부
void Sub:: setValue(int x, int y) {
    a = x;
    b = y;
}
int Sub ::calculate() {
    return a - b;
}


// Mul 클래스
class Mul {
    //선언부
private:
    int a;
    int b;
public:
    void setValue(int x, int y);
    int calculate();
};
//Mul 구현부
void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}
int Mul::calculate() {
    return a * b;
}


// Div 클래스
class Div {
private:
    int a;
    int b;
public:
    int calculate() ;
    void setValue(int x, int y);
    
};

void Div::setValue(int x, int y) {
    a = x;
    b = y;
}
int Div::calculate() {
    if (b == 0) { //0으로 나눌시
        cout << "Error: 0으로 나누었습니다." << endl;
        return -1;  // 오류 처리
    }
    return a / b; //정상적인 연산 처리 리턴
}



int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;

    int num_1, num_2;
    char sign;

    while (true) {
        // 사용자로부터 입력 받기
        cout << "두 정수와 연산자를 입력하세요>> ";
        cin >> num_1 >> num_2 >> sign; //입력값 받기

        // 연산자에 맞는 객체의 setValue()와 calculate() 호출
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
            cout << "잘못된 연산자입니다" << endl;
        }
    }


}

