#include <iostream>
#include <string>

using namespace std;

class MyIntStack {
    //클래스 선언부
private:
    int p[10]; //최대 10개의 정수 저장
    int tos; //스택의 꼭대기를 가리키는 인덱스
public:
    MyIntStack();
    bool push(int n);
    bool pop(int& n); 
};
//생성자 초기화
MyIntStack::MyIntStack() {
    tos = -1;
}
// 클래스 구현부
bool MyIntStack::push(int n) { //정수 n 푸쉬 . 꽉 차 있으면 false,아니면 true 리턴
    if (tos >= 9) return false;
    p[++tos] = n;
    return true;
}

bool MyIntStack::pop(int& n) { //pop하여 n에 저장 스택이 비어있으면 false , 아니면 true 리턴
    if (tos < 0) return false;
    n = p[tos--];
    return true;
}

int main() {
    MyIntStack a;
    for (int i = 0; i < 11; i++) {
        if (a.push(i)) cout << i << ' ';
        else cout << endl << i + 1 << " 번째 stack full" << endl;
    }
    int n;
    for (int i = 0; i < 11; i++) {
        if (a.pop(n)) cout << n << ' ';
        else cout << endl << i + 1 << " 번째 stack empty";
    }
    cout << endl;


}
