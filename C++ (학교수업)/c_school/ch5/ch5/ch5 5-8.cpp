///*
// 문제 7번의 MyInttStack를 수정하여 다음과 같이 선언하였다. 스택에 저장할 수 있는 정수의 최대 개수는 생성자에서 주어지고 size 맴버에 유지한다. MyIntStack 클래스를 작성하라.
// */
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class MyIntStack {
////클래스 선언부
//private:
//    int* p; //스택 메모리로 사용할 포인터
//    int size;// 스택의 최대크기
//    int tos;//SP 탑포인트
//public:
//    MyIntStack() :MyIntStack(1) {} //기본 생성자 1
//    MyIntStack(int size); //생성자2
//    MyIntStack(MyIntStack& s); // 생성자3
//    ~MyIntStack(); //소멸자
//    bool push(int n);
//    bool pop(int& n);
//};
////클래스 구현부
////생성자 2
//MyIntStack::MyIntStack(int size) {
//    this->p = new int[size];
//    this->size = size;
//    this->tos = -1;
//}
////복사 생성자
//MyIntStack::MyIntStack(MyIntStack& s) {
//    int len = s.size;
//
//    this->p = new int[len]; //포인터로 길이만큼 동적할당
//    this->size = len;
//    this->tos = s.tos;
//
//    for (int i = 0; i <= tos; i++) {
//        this->p[i] = s.p[i];
//    }
//}
////클래스 소멸자
//MyIntStack::~MyIntStack() {
//    delete[] p;
//}
////
//bool MyIntStack::push(int n) {
//    if (tos >= 9) return false; //꽉찻을때.
//    p[++tos] = n;
//    return true;//여유 공간이 있을시
//}
////pop 연산
//bool MyIntStack::pop(int& n) {
//    if (tos < 0) return false; //비어있을시
//    n = p[tos--];
//    return true; //스택안에 값이 있을시
//}
//
//int main() {
//    //생성자 2
//    MyIntStack a(10);
//    a.push(10);
//    a.push(20);
//    // 복사 생성자
//    MyIntStack b = a;
//    b.push(30);
//
//    int n;
//    a.pop(n);
//    cout << "스택 a에서 팝한 값 " << n << endl;
//
//    b.pop(n);
//    cout << "스택 b에서 팝한 값 " << n << endl;
//
//}
