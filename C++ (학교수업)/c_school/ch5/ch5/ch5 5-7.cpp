///*
// 다음과 같이 선언된 정수를 저장하는 스택 클래스 MyIntStack을 구현하라
// MyIntStack  스택에 저장할 수 있는 정수의 최대 개수는 10이다.
// */
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class MyIntStack {
//    //클래스 선언부
//private:
//    int p[10]; //최대 10개의 정수 저장
//    int tos; //스택의 꼭대기를 가리키는 인덱스
//public:
//    MyIntStack();
//    bool push(int n);
//    bool pop(int& n); 
//};
////생성자 초기화
//MyIntStack::MyIntStack() {
//    tos = -1; //탑포인트 스택 빈공간 상태는 -1 로 선언
//}
//// 클래스 구현부
//bool MyIntStack::push(int n) { //정수 n 푸쉬 . 꽉 차 있으면 false,아니면 true 리턴
//    if (tos >= 9) return false;
//    p[++tos] = n;
//    return true;
//}
//
//bool MyIntStack::pop(int& n) { //pop하여 n에 저장 스택이 비어있으면 false , 아니면 true 리턴
//    if (tos < 0) return false;
//    n = p[tos--]; //탑포인트 감소
//    return true;
//}
//
//int main() {
//    MyIntStack a;
//    for (int i = 0; i < 11; i++) {
//        if (a.push(i)) cout << i << ' '; // 푸쉬
//        else cout << endl << i + 1 << " 번째 stack full" << endl; // 스택이 꽉 찻을때 출력문
//    }
//    int n;
//    for (int i = 0; i < 11; i++) {
//        if (a.pop(n)) cout << n << ' '; //팝
//        else cout << endl << i + 1 << " 번째 stack empty"; //스택이 비었을때  pop명령어를 사용시 출력문
//    }
//    cout << endl;
//
//
//}
