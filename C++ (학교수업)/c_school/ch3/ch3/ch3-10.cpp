//#include <iostream>
//#include <cstring>  // strcmp 사용을 위해 추가
//using namespace std;
//
//// Add 클래스
//class Add {
//private:
//    int a;
//    int b;
//public:
//    void setValue(int x, int y);
//    int calculate();
//    
//};
////선언부
////setter
//void Add::setValue(int x, int y) {
//    a = x;
//    b = y;
//}
//int Add::calculate() {
//    return a + b;
//}
//
//// Sub 클래스
//class Sub {
//private:
//    int a;
//    int b;
//public:
//    void setValue(int x, int y);
//    int calculate();
//};
////  sub선언부
//void Sub:: setValue(int x, int y) {
//    a = x;
//    b = y;
//}
//int Sub ::calculate() {
//    return a - b;
//}
//
//
//// Mul 클래스
//class Mul {
//private:
//    int a;
//    int b;
//public:
//    void setValue(int x, int y);
//    int calculate();
//};
////Mul 선언부
//void Mul::setValue(int x, int y) {
//    a = x;
//    b = y;
//}
//int Mul::calculate() {
//    return a * b;
//}
//
//
//// Div 클래스
//class Div {
//private:
//    int a;
//    int b;
//public:
//    int calculate() ;
//    void setValue(int x, int y);
//    
//};
//
//void Div::setValue(int x, int y) {
//    a = x;
//    b = y;
//}
//int Div::calculate() {
//    if (b == 0) { //0으로 나눌시
//        cout << "Error: 0으로 나누었습니다." << endl;
//        return -1;  // 오류 처리
//    }
//    return a / b; //정상적인 연산 처리 리턴
//}
//
//
//
//int main() {
//    Add a;
//    Sub s;
//    Mul m;
//    Div d;
//
//    int num_1, num_2;
//    char sign;
//
//    while (true) {
//        // 사용자로부터 입력 받기
//        cout << "두 정수와 연산자를 입력하세요>> ";
//        cin >> num_1 >> num_2 >> sign;
//
//        // 연산자에 맞는 객체의 setValue()와 calculate() 호출
//        if (sign == '+') {
//            a.setValue(num_1, num_2);
//            cout << a.calculate() << endl;
//        } else if (sign == '-') {
//            s.setValue(num_1, num_2);
//            cout << s.calculate() << endl;
//        } else if (sign == '*') {
//            m.setValue(num_1, num_2);
//            cout << m.calculate() << endl;
//        } else if (sign == '/') {
//            d.setValue(num_1, num_2);
//            cout << d.calculate() << endl;
//        } else {
//            cout << "잘못된 연산자입니다." << endl;
//        }
//    }
//
//
//}
//
