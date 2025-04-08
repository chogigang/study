//Rec 클래스를 결과와 같이 작성해야한다 .
 // 목요일 수업활동일지
// 4-14 예제

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"7+23+5+100+25 와 같이 것셈 문자열을 입력하세요."<<endl;
    getline(cin,s,'\n'); //문자열 입력받기
    
    int sum =0;
    int startIndex =0;
    while(1){
        int fIndex =s.find('+',startIndex); //+찾기 문자열 비교용
        if(fIndex == -1){ //+ 발견  못함
            string part =s.substr(startIndex); // 숫자로 판단후 잘라서 part 변수에 넣어줌
            if(part == "" ){ //반복중 공백이면 while문을 벗어남 2+3+  +로끝나는 경우
                break;
            }
            cout<<part<<endl;
            sum+=stoi(part);
            break;
        } //1번째 조건문
        
        int count = fIndex - startIndex; //+ 가 발견되었을 경우 +전까지 숫자 위치 인덱스를 계산
        string part =s.substr(startIndex,count); //if 문 안에 있는 part와 구분 필요.   startIndex부터 count 개의 문자로 서버스트링 만듬
                                                 //for문으로 순환하면 for(startIndex=n;startindx<cont;startIndex++) <<- 이런식 마지막 매개변수숫자는 자를때 포함시키지않는다
        
        cout<<part<<endl;
        sum+=stoi(part);
        startIndex = fIndex+1;
    }
    cout<<"숫자들의 합은 "<<sum<<endl;
    
}


//4-12 예제
//#include<iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    string names[5];//string 배열 선언
//    
//    for(int i=0; i<5;i++){ //이름을 5번 입력받음
//        cout<< "이름 >>";
//        getline(cin,names[i],'\n'); //\n은 ''로 고정
//        
//    }
//    string latter =names[0];// 첫번째 입력값 사전상 가장 뒤에 넣을 변수
//    for(int i=1;i<5;i++){ //5번 반복
//        if(latter<names[i]){// 첫글자 비교해서 사전순서상 뒷순위인지 아닌지 비교
//            latter=names[i]; //사전 순서상 뒷순위이면 값을 변경
//        }
//        
//    }
//    cout<<"사전에서 가장 뒤에 나오는 문자열은"<<latter<<endl;
//}
                        

// 실습문제 4번
//#include<iostream>
//using namespace std;
//
//class Sample{
//    //선언부
//    private:
//    int *p;
//    int size;
//public:
//    Sample(int n){ //생성자
//        size =n; //사이즈 값
//        p =new int[n]; //사이즈값 받아서 동적할당
//    }
//    void read(); //입력값 받는 클래스 함수
//    void write(); //클래스
//    int big();
//    ~Sample(); //소멸자
//};
// //구현부
//
//
//void Sample::read(){ //입력값 받기
//    for(int i=0;i<size;i++){
//        cin>>p[i];
//    }
//}
//int  Sample::big(){ //큰값 비교
//    int max =0;
//    for(int i=0;i<size;i++){
//        if (max<p[i]){
//            max =p[i];
//        }
//    }
//    return max;
//}
// //단순 출력 getter
//void Sample::write(){
//    for(int i=0; i<size;i++){
//        cout<<p[i]<<" ";
//    }
//    cout<<endl;
//}
//// 소멸자 구현 
//Sample::~Sample(){
//    delete [] p;
//}
//
//int main(){
//    Sample s(10);
//    s.read();
//    s.write();
//    cout<<"가장 큰 수는 "<<s.big()<<endl;
//    
//}


//4-10 제어클래스
//#include <iostream>
//using namespace std;
//class Circle{
//private:
//    int radius;
//public:
//    Circle(); //기본 생성자
//    ~Circle(){}; //소멸자
//    void setRadius(int r){ //setter
//        radius =r;
//    }
//    double getRadius(){ //getter
//        return 3.14*radius*radius;
//    }
//};
//Circle::Circle(){ //기본생성자
//    radius =1;
//}
//class CircleManager{
//private:
//    int size =0; //입력받을 값
//    Circle *p =NULL; //Circle 클래스의 주소값
//public:
//    CircleManager(int size){ //사이즈 값 받음
//        this->size =size; //
//        p =new Circle[size];
//    }
//    void input();
//    void show();
//    ~CircleManager();
//    
//    
//};
//
//CircleManager::~CircleManager(){
//    delete [] p;
//}
//
//void CircleManager::input(){
//    double radius;
//    for(int i=0;i<size;i++){
//        cout<<"원"<<i+1<<" :";
//        cin>>radius;
//        p[i].setRadius(radius);
//    }
//}
//    
//    void CircleManager::show(){
//        int count =0;
//        for(int i=0;i<size;i++){
//            cout<<(p+i)->getRadius()<<" ";
//            if((p+i)->getRadius()>=100&&(p+i)->getRadius()<=200){
//                    count++;
//                }
//            }
//            cout<<endl<<"면적이 100에서 200사이인 원의 개수는 "<<count<<endl;
//        }
//
//int main(){
//    
//    CircleManager cm(4);
//    cm.input();
//    cm.show();
//    
//    
//}

//4-10 예제
//#include <iostream>
//using namespace std;
//
//class Circle{
//private:
//    int radius;
//public:
//    Circle();
//    ~Circle(){};
//
//    void setRadius(int r){ radius=r;}
//    double getArea(){return 3.14*radius*radius; }
//    
//};
//Circle::Circle(){
//    radius=1;
//}
//int main(){
//    int n,radius; //입력값 받기.
//    cout<<"생성하고자 하는 원의 개수?";
//    cin>> n;
//    Circle *pArrar =new Circle[n];
//    for(int i=0;i<n;i++){
//        cout<<"원"<<i+1<<" :";
//        cin>>radius;
//        pArrar[i].setRadius(radius);
//        
//    }
//    int count=0; //카운트 새기
//    Circle *p =pArrar; // pArrar 시작주소
//    for(int i=0;i<n;i++){
//        cout<<p->getArea()<<" ";
//        if(p->getArea()>=100&&p->getArea()<=200){
//            count++;
//        }
//        p++; //배열 인덱스 주소 증가
//    }
//    cout<<endl<<"면적이 100에서 200사이인 원의 개수는 "<<count<<endl;
//    delete [] pArrar;
//}

// 4-8 예제
//#include <iostream>
//using namespace std;
//
//class Circle{
//    //선언부
//private:
//    int radius;
//public:
//    Circle(); //생성자
//    Circle(int r); //생성자
//    ~Circle(); //소멸자
//    void setRaius(int r){
//        radius =r;
//    }
//    double getArea(){
//        return 3.14*radius*radius;
//    }
//
//
//};
//
//Circle::Circle(){
//    radius=1;
//    cout<<"생성자 실행 radius = "<<radius<<endl;
//}
//Circle::Circle(int r){
//    radius =r ;
//    cout<<"생성자 실행 radius = "<<radius<<endl;
//}
//Circle::~Circle(){
//    cout<<"소멸자 실행 radius = "<<radius<<endl;
//}
//
//
//int main(){
//    int radius;
//    while(true){
//        cout<<"정수의 반지름 입력(음수이면 종료) >> ";
//        cin >> radius;
//        if(radius < 0) break;
//        Circle *p =new Circle(radius);
//        cout<<"원의 면적은" <<p->getArea()<<endl;
//        delete p;
//    }
//    
//}



// 4-7 예제
//#include <iostream>
//using namespace std;
//
//class Circle{
//    //선언부
//private:
//    int radius;
//public:
//    Circle(); //생성자
//    Circle(int r); //생성자
//    ~Circle(); //소멸자
//    void setRaius(int r){
//        radius =r;
//    }
//    double getArea(){
//        return 3.14*radius*radius;
//    }
//    
//  
//};
//
//
//Circle::Circle(){
//    radius=1;
//    cout<<"생성자 실행 radius = "<<radius<<endl;
//}
//Circle::Circle(int r){
//    radius =r ;
//    cout<<"생성자 실행 radius = "<<radius<<endl;
//}
//Circle::~Circle(){
//    cout<<"소멸자 실행 radius = "<<radius<<endl;
//}
//int main(){
//    Circle *p, *q;
//    p= new Circle;
//    q = new Circle(30);
//    cout<<p->getArea()<<endl<<q->getArea()<<endl;
//    delete p;
//    delete q;
//}

////4-6 예제
//#include <iostream>
//using namespace std;
//
//int main(){
//    int n;
//    int avg;
//    cout<<" 입력할 정수의 개수는 :";
//    cin>>n;
//    
//    if(n<=0){
//        return 0;
//    }
//    int *p =new int[n]; //동적 할당
//    if(!p){ //
//        cout<<"메모리를 할당할수 없습니다."<<endl;
//        return 0;
//    }
//    for(int i=0;i<n;i++){
//        cout<<i<<"번째 정수:";
//        cin>>p[i];
//        
//    }
//    for (int i=0;i<n;i++){
//        avg+=p[i];
//    }
//    avg = avg/n;
//    cout<<"평균="<<avg<<endl;
//    delete [] p;
//}


//4-2 객체 배열 문제
//#include <iostream>
//using namespace std;
//
//class Circle{
//private:
//    int radius;
//public:
//    Circle(){radius =1;}
//    Circle(int r){radius =r;}
//    void setRadius(int r){radius =r;}
//    double getArea();
//};
//
//double Circle::getArea(){
//    return  3.14*radius*radius;
//}
//
//int main(){
//    
//    Circle circleArray[3];
//    
//    circleArray[0].setRadius(10);
//    circleArray[1].setRadius(20);
//    circleArray[2].setRadius(30);
//    
//    for(int i=0;i<3;i++){
//        cout<<"Circle"<<i<<"의 면적은"<<circleArray[i].getArea()<<endl;
//        
//        
//    }
//    Circle *p;
//    p=circleArray;
//    for(int i=0;i<3;i++){
//        cout<<"Circle"<<i<<"의 면적은"<<p->getArea()<<endl;
//        p++;
//    }
//  //  p=circleArray; //포인터 주소 초기화
//    
//    for(int i=0;i<3;i++){
//        cout<<"Circle"<<i<<"의 면적은"<<p->getArea()<<endl;
//        p++;
//    }
//
//}



//연습문제 150p
//#include<iostream>
//#include <string>
//using namespace std;
//class Account {
//private:
//    // 선언부
//    string name; //이름
//    int id; // 아이디
//    int balance; //잔액
//   
//   
//public:
//    string getOwner(); //이름
//    int deposit(int b); //입금
//    int withdraw(int b);// 출금
//    int inquiry(); //잔액 조회
//     // 생성자
//    Account(string n,int i,int b){
//        name=n;
//        id=i;
//        balance =b;
//    }
//};
// //구현부
////getter,이름
//string Account::getOwner(){
//    return name;
//}
//// 입금
//int Account::deposit(int b){
//    return balance+=b;
//}
////출금
//int Account::withdraw(int b){
//    return balance-=b;
//}
//
//// 잔액 조회
//int  Account::inquiry(){
//    return balance;
//}
//
//int main(){
//    Account a("kitae",1,5000);
//    a.deposit(50000);
//    cout<<a.getOwner()<<"의 잔액은 "<<a.inquiry()<<endl;
//    int money =a.withdraw(20000);
//    cout<<a.getOwner()<<"의 잔액은 "<<a.inquiry()<<endl;
//    
//}

//p149 문제  -> 실습문제 1번
//#include <iostream>
//using namespace std;
////클래스 선언부
//class Tower{
//private:
//    int height;
//public:
//    Tower(){
//        height=1;
//    }
//    int getHeight();
//    void setHeight(int h);
//    Tower(int h){
//        height=h;
//    }
//};
//
////클래스 구현부
////getter
//int Tower::getHeight(){
//    return height;
//}
//// setter 이친구는 연습상 그냥 적음
//void Tower::setHeight(int h){
//     height=h;
//}
//
//int main(){
//    Tower myTower;
//    Tower seoulTower(100);
//    cout<< "높이는 "<<myTower.getHeight()<<"미터"<<endl;
//    cout<< "높이는 "<<seoulTower.getHeight()<<"미터"<<endl;
//    
//}



//수업활동 일지 문제  원의 넓이 계산
//#include <iostream>
//using namespace std;
//class Circle{
//private:
//    int radius;
//public:
//    Circle();
//    int getRadius();
//    void setRadius(int r);
//    double getArea();
//};
//
////클래스 구현부
//// 생성자
//Circle::Circle(){
//    radius=1;
//}
////getter
//    int Circle:: getRadius(){
//    return radius;
//}
////setter
//    void Circle::setRadius(int r){
//        radius=r;
//    }
//    double Circle::getArea(){
//        return (radius*radius)/3.14;
//    }
//
//    
//    int main(){
//        int r;
//        cout<<"반지름 입력: ";
//        cin>> r;
//        Circle cr;
//        cr.setRadius(r);
//        cout<<"반지름이 "<<cr.getRadius()<<" 인 원의 면적은 :"<<cr.getArea()<<endl;
//    }

//3-11 예제

//#include "Calculator.h"
//
//int main(){
//    Calculator calc;
//    calc.run();
//}



// getter,setter 를 사용해서 삼각형 넓이는 구하는 프로그램 작성
//#include<iostream>
//using namespace std;
//
//class Tarea{
//    // 클래스 선언부
//private:
//    float weight,heigh;
//    
//public:
//   float getWeight();
//    float getHeigh(); //값만 호출
//    void area();
//    void setWeight(float w); //값을 받아 변환
//    void setHeigh(float h);
//    
//    Tarea(){
//        weight=0;
//        heigh=0;
//    }
//};
//// 클래스 구현부
////getter
//float Tarea::getWeight(){
//    return weight;
//}
//
//float Tarea::getHeigh(){
//    return heigh;
//}
////setter
//void Tarea::setWeight(float w){
//    weight=w;
//}
//void Tarea::setHeigh(float h){
//    heigh=h;
//}
//void Tarea::area(){
//    cout << "삼각형의 넓이는 " <<(weight*heigh)/2<< " 제곱미터 입니다." <<endl;
//}
//
//
//int main(){
//    float w=0;
//    float h=0;
//    
//    cout<<"가로 길이를 입력하세요:";
//    cin>>w;
//    cout<<"세로 길이를 입력하세요:";
//    cin>>h;
//    
//    Tarea tr;
//    tr.setHeigh(h); //setter 로 값을 변경
//    tr.setWeight(w);
//    cout<<"가로: "<<tr.getWeight()<<" 세로: "<<tr.getHeigh()<<endl;
//    tr.area();
//    
//}


// 살습문제 삼각형 넓이 구하는 프로그램 (생성자 사용)
//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//    int weight;
//    int height;
//
//public:
//    Circle() {  // 기본 생성자
//        weight = 1;
//        height = 1;
//    }
//
//    Circle(int w, int h) {  // 매개변수 생성자
//        weight = w;
//        height = h;
//    }
//
//    float getArea() {  // 삼각형 넓이 계산
//        return (weight * height) / 2.0;
//    }
//};
//
//int main() {
//    int w = 0;
//    int h = 0;
//
//    cout << "가로 길이를 입력하세요: ";
//    cin >> w;
//    cout << "세로 길이를 입력하세요: ";
//    cin >> h;
//
//    Circle cr(w, h);
//    cout << "삼각형의 넓이: " << cr.getArea() << endl;
//}
//




//3-7 소멸자 작성 및 실행
//#include<iostream>
//using namespace std;
//
//class Circle{
//public:
//    //클래스 선언부
//    int radius;
//    Circle();//매개변수 없는 생성자
//    Circle(int r); //오버로딩
//    ~Circle(); //소멸자 선언
//    double getArea();// 함수 동적 할당
//
//};
//
////클래스 구현부
//Circle::Circle():Circle(1){ //위임 생성자
//}
//
//Circle::Circle(int r){ //타갯 생성자
//    radius =r;//반지름 값 초기화
//    cout<<"반지름"<<radius<<"원 생성"<<endl;
//}
//Circle::~Circle(){
//    cout<<"반지름"<<radius<<"원 소멸"<<endl;
//    
//}
//
//double Circle::getArea(){
//    return 3.14*radius*radius;
//}
//
//int main(){
//    Circle donut;// 선언 및 동적 할당
//    double area =donut.getArea(); //함수 호출
//    cout<<"donut 면적은"<<area<<endl;
//
//
//    Circle pizza(30); //선언 및 동적할당
//    area =pizza.getArea(); //함수 호출
//    cout<<"pizza 면적은"<<area<<endl;
//
//}



//3-6
//#include <iostream>
//using namespace std;
//
//class Rectangle{
//public:
//    int height;
//    int width;
//    bool isSquare();
//    Rectangle();
//    Rectangle(int h,int w);
//    Rectangle(int h);
//    
//};
//
//Rectangle::Rectangle():Rectangle(1){
//  
//}
//Rectangle::Rectangle(int g,int w){
//    height=g;
//    width=w;
//}
//Rectangle::Rectangle(int len){
//    height=len;
//    width=len;
//    
//}
//bool Rectangle::isSquare(){
//    if(height==width){
//        return true;
//    }else{
//        return false;
//    }
//    
//}
//
//int main(){
//    Rectangle rect1;
//    Rectangle rect2(3,5);
//    Rectangle rect3(3);
//    
//    if(rect1.isSquare())cout<<"rect1은 정사각형이다."<<endl;
//    if(rect2.isSquare())cout<<"rect2은 정사각형이다."<<endl;
//    if(rect3.isSquare())cout<<"rect3은 정사각형이다."<<endl;
//}
//

//3-5 맴버 변수 초기화와 이임 생성자 활용
//#include<iostream>
//using namespace std;
//
//class Point{
//    //클래스 선언부
//private:
//    int x,y; //private 맴버변수 지정
//public:
//    Point();
//    Point(int a,int b);
//    void show();
//
//};
//// 클래스 구현부  private 맴버변수를 함수로 호출해서 처리
//void Point::show(){
//    cout<<"("<<x<<","<<y<<")"<<endl;
//    
//}
//
//Point::Point():Point(0,0){}// 위임생성자
//Point::Point(int a,int b){ //타겟 생성자
//    x=a;
//    y=b;
//}
//
//int main(){
//    Point oriigin;
//    Point target(10,20);
//    oriigin.show();
//    target.show();
//}

//3-4 위임 생성자 예제
//#include<iostream>
//using namespace std;
//
//class Circle{
//public:
//    //클래스 선언부
//    int radius;
//    Circle();//매개변수 없는 생성자
//    Circle(int r); //오버로딩
//    double getArea();// 함수 동적 할당
//    
//};
//
////클래스 구현부
//Circle::Circle():Circle(1){ //위임 생성자
//}
//
//Circle::Circle(int r){ //타갯 생성자
//    radius =r;//반지름 값 초기화
//    cout<<"반지름"<<radius<<"원 생성"<<endl;
//}
//
//
//double Circle::getArea(){
//    return 3.14*radius*radius;
//}
//
//int main(){
//    Circle donut;// 선언 및 동적 할당
//    double area =donut.getArea(); //함수 호출
//    cout<<"donut 면적은"<<area<<endl;
//
//    
//    Circle pizza(30); //선언 및 동적할당
//    area =pizza.getArea(); //함수 호출
//    cout<<"pizza 면적은"<<area<<endl;
//    
//}



//3-3 예제
//#include<iostream>
//using namespace std;
//
//class Circle{
//public:
//    //클래스 선언부
//    int radius;
//    Circle();//매개변수 없는 생성자
//    Circle(int r); //오버로딩
//    double getArea();// 함수 동적 할당
//    
//};
//
////클래스 구현부
//Circle::Circle(){ //매개변수 없는 생성자
//    radius=1;
//    cout<<"반지름"<<radius<<"원 생성"<<endl;
//}
//
//Circle::Circle(int r){ //매개변수 있는 생성자
//    radius =r;//반지름 값 초기화
//    cout<<"반지름"<<radius<<"원 생성"<<endl;
//}
//
//
//double Circle::getArea(){
//    return 3.14*radius*radius;
//}
//
//int main(){
//    Circle donut;// 선언 및 동적 할당
//    double area =donut.getArea(); //함수 호출
//    cout<<"donut 면적은"<<area<<endl;
//
//    
//    Circle pizza(30); //선언 및 동적할당
//    area =pizza.getArea(); //함수 호출
//    cout<<"pizza 면적은"<<area<<endl;
//    
//}



//예제 3-2 Rectangle 클래스 만들기
//#include<iostream>
//using namespace std;
//
//class Rectangle {
//public: //접근지정자
//    int width; //선언부
//    int heigh;
//    int getArea();
//};
//    int Rectangle :: getArea(){
//        return width*heigh;
//    }
//
//
//int main(){
//    Rectangle rect;
//    rect.width=3;
//    rect.heigh=5;
//    cout <<"사각형의 면적은 "<<rect.getArea()<<endl;
//}


//3-1 클래스의 객체 생성 및 활용
//#include<iostream>
//using namespace std;
//
//
//class Circle{ //클래스 선언부
//    public :
//    int radius;
//    double getArea();
//};
//
//double Circle ::getArea(){ //클래스 구현부
//    return 3.14*radius*radius;
//    
//}
//
//int main(){
//    Circle donut;
//    donut.radius=1;
//    double area =donut.getArea();
//    cout<<"donut 면적은 "<<area<<"\n";
//    
//    
//    Circle pizza;
//    pizza.radius=30;
//    area =pizza.getArea();// area 변수 초기화
//    cout<<"pizza 면적은 "<<area<<"\n";
//    
//}




//2-7 문제
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(){
//
//    string song =("Falling in love with you");
//    string elvis =("Elvis presle");
//    
//    string singer;
//    
//    
//    cout<< song +"를부른 가수는?";
//    cout<<"힌트 첫글자는  "<<elvis[0]<<"입니다. \n";
//    
//    cout<<" :";
//    getline(cin,singer);
//    if(singer==elvis){
//        cout<<"정답입니다.  \n" ;
//    }else{
//        cout<<"틀렸습니다."+elvis+"입니다. \n";
//        
//    }
//    
//    
//}




//2-6 문제
// cin.getline() 을 이용하여 빈칸을 포함하는 문자열을 읽는 문제를 풀어라
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(){
//    cout<<"주소를입력하세요 :";
//    
//    char address[100];
//    
//    cin.getline(address, 100,'\n'); //무조건 매개변수 3개 'n' 작은 따움표를 써야하며 생략 가능
//    cout<<"주소는" <<address<<"입니다. \n";
//    
//    
//}
//


//2-5 문제
//#include <iostream>
//#include <cstring>
//using namespace std;
//// 정확한 암호를 입력받을 때 프로그램을 종료하는 프로그램을 작성
//
//
//int main(){
//    char password[20];
//    cout<<"프로그램의 종료하려면 암호를 입력하세요";
//    while (true) {
//        cout<<"암호";
//        cin>>password;
//        if(strcmp(password,"C++")==0 ||strcmp(password,"c++")==0){
//            cout<<"프로그램을 종료합니다.";
//            break;
//        }else{
//            cout<<"암호가 틀렷습니다.";
//        }
//        
//    }
//    
//    
//}



//2-4번 문제
// 다섯명의 나이를 입력받아 평균나이,최대 나이 를 출력하는 프로그램 작성
//#include<iostream>
//using namespace std;

//void input(int userarr[5]){
//    cout<<"5명의 나이를 입력 :";
//    for (int i=0;i<5;i++){
//        cin>>userarr[i];
//    }
//    
//}
//
////평균
//float avg(int userarr[5]){
//    float avg=0;
//    for (int i=0; i<5;i++){
//        avg += userarr[i];
//    }
//    avg = avg/5;
//    return avg;
//}
//
////최대
//int max(int userarr[5]){
//    int max =0;
//    
//    for (int i=0;i<5;i++){
//        
//        if(max<userarr[i]){
//        max =userarr[i];
//        }
//    }
//    return max;
//}
//
//
//void output(float avg,int max){
//    cout<<"나이의 평균"<<avg<<"\n";
//    cout<<"나이 최대값"<<max<<"\n";
//    
//}
//
//int main(){
//int userarr[5]={0,0,0,0,0};
//    input(userarr);
//   float avg_val = avg(userarr);
//   int max_val = max(userarr);
//    output(avg_val,max_val);
//    
//}


//1-3 번 문제
//  5개의 정수를 입력 받아 *를 이용하여 작성하시오
//#include<iostream>
//using namespace std;

//void input(int inputarr[5]){
//    cout << "다섯개의 정수를 입력하세요 :";
//    for (int i = 0; i < 5; i++) {
//
//           cin >> inputarr[i];
//    }
//}
//
//void output(int inputarr[5]){
//    for(int i=0;i<5.; i++){
//        int count =inputarr[i];
//          cout<<"번호"<<i;
//          for(int j=0; j<count;j++){
//              cout<<'*';
//          }
//          cout<<"\n";
//      }
//}
//
//int main(){
//    int inputarr[5]={0,0,0,0,0};
//
//    input(inputarr);
//    output(inputarr);
//
//}
//


// 1-2
// 스위치 케이스 문을 사용한 섭씨 화씨
//#include<iostream>
//using namespace std;
//int main(){
//
//    char ch;
//    int input,output;
//
//    cout<<"화씨를 입력할경우 F,f 섭씨를 입력할 경우 C,c를 입력하세요: ";
//    cin>> ch;
//
//    cout<<"온도를 입력하세요: ";
//    cin>>input;
//
//
//    switch (ch) {
//        case 'c':
//        case 'C':
//            output = (9.0/5.0)*input+32;
//            cout<<"섭씨: "<<input<<"\n변환된 화씨: "<<output<<"\n";
//            break;
//        case 'f':
//        case 'F':
//            output = (5.0/9.0)*(input-32);
//            cout<<"화씨: "<<input<<"\n변환된 섭씨: "<<output<<"\n";
//            break;
//
//        default:
//            cout<<"잘못된 출력입니다.\n";
//            break;
//    }
//
//
//}




// 1-1
//  섭씨 화씨  예제
//#include<iostream>
//using namespace std;
//int main(){
//    char ch; //문자 입력받는 용
//    float input ,output;
//    
//    cout<<"화씨를 입력할경우 F,f  섭씨를 입력할경우 C,c를 입력하세요:";
//    cin>>ch;
//    
//    cout<<"온도를 입력하세요 : ";
//    cin >>input;
//    
//    if(ch == 'f' || ch =='F'){
//        output = (5.0/9.0)*(input-32);
//        cout<<"화씨: "<<input<<"\n변환된 섭씨: "<<output<<"\n";
//        
//
//    }else if(ch=='c'||ch =='C'){
//        output = (9.0/5.0)*input+32;
//        cout<<"섭씨:"<<input<<"\n 변환된 화씨: "<<output<<"\n";
//        
//    }else{
//        cout<<"잘못된 출력입니다.";
//    }
//}




