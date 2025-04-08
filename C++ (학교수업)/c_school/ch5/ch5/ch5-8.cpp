#include <iostream>
#include <string>
using namespace std;

class MyIntStack {
//클래스 선언부
private:
    int* p;
    int size;
    int tos;
public:
    MyIntStack() :MyIntStack(1) {} //기본 생성자 1
    MyIntStack(int size);
    MyIntStack(MyIntStack& s); // 생성자2
    ~MyIntStack();
    bool push(int n);
    bool pop(int& n);
};
//클래스 구현부
//생성자
MyIntStack::MyIntStack(int size) {
    this->p = new int[size];
    this->size = size;
    this->tos = -1;
}
//생성자 2
MyIntStack::MyIntStack(MyIntStack& s) {
    int len = s.size;

    this->p = new int[len];
    this->size = len;
    this->tos = s.tos;

    for (int i = 0; i <= tos; i++) {
        this->p[i] = s.p[i];
    }
}
//클래스 소멸자
MyIntStack::~MyIntStack() {
    delete[] p;
}
//
bool MyIntStack::push(int n) {
    if (tos >= 9) return false;
    p[++tos] = n;
    return true;
}
bool MyIntStack::pop(int& n) {
    if (tos < 0) return false;
    n = p[tos--];
    return true;
}

int main() {
    //생성자 1
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    // 생성자 2
    MyIntStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;

    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;

}
