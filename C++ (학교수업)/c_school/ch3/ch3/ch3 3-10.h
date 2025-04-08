#ifndef CH3 3_10_H
#define CH3 3_10_H

class Add {
public:
    void setValue(int x, int y); //입력값 받아오기
    int calculate(); //계산 함수
private:
    int a, b; // 두정수를 저장할 맴버 변수 
};

class Sub {
public:
    void setValue(int x, int y);
    int calculate();
private:
    int a, b;
};

class Mul {
public:
    void setValue(int x, int y);
    int calculate();
private:
    int a, b;
};

class Div {
public:
    void setValue(int x, int y);
    int calculate();
private:
    int a, b;
};

#endif // CH3_10_H

