#include <iostream>
#include <string>
using namespace std;

class Book {
    //선언부
private:
    string title;
    int price;
public:
    Book(string title, int price);
    Book(Book& b);
    ~Book();
    void set(string tile, int price);
    void show() { cout << title << ' ' << price << "원" << endl; }
};

// 구현부
// 생성자
Book::Book(string title, int price) {
    this->title = title;
    this->price = price;
}
//소멸자
Book::~Book() { }
void Book::set(string title, int price) {
    this->title = title;
    this->price = price;
}
//생성자 복사
Book::Book(Book& b) {
    this->title = title;
    this->price = price;
}

int main() {
    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();

    return 0;
}
