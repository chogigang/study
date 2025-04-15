///*
// 책의 이름과 가격을 저장하는 다음 Book 클래스에 대해 물음에 답하여라.
// */
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book {
//    //선언부
//private:
//    string title;
//    int price;
//public:
//    Book(string title, int price);
//    Book(Book& b);
//    ~Book();
//    //setter
//    void set(string tile, int price);
//    //getter
//    void show() { cout << title << ' ' << price << "원" << endl; }
//};
//
//// 구현부
//// 생성자
//Book::Book(string title, int price) {
//    this->title = title;
//    this->price = price;
//}
////소멸자
//Book::~Book() { }
//void Book::set(string title, int price) {
//    this->title = title;
//    this->price = price;
//}
////생성자 복사
//Book::Book(Book& b) {
//    this->title = b.title; //b.을 안붙이면 쓰래기값이 들어감
//    this->price = b.price;
//}
//
//// 복사 생성자 정의 (사용자 정의 버전)
////  컴파일러는 기본적으로 '디폴트 복사 생성자'를 제공하지만,
//// 사용자가 아래처럼 직접 정의하면 컴파일러는 이를 사용한다.
//
//
//int main() {
//    Book cpp("명품C++", 10000);
//    Book java = cpp; // cpp 객체를 복사해서 java 객체 생성 (복사 생성자 호출)
//    java.set("명품자바", 12000);  // java 객체의 정보 변경
//    cpp.show();
//    java.show();
//}
//
//
////참조. https://4z7l.github.io/2020/07/25/myungpum-cpp-ch5.html
