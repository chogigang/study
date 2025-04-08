///*
// 다음과 같이 원을 추상화한 Circle 클래스가 있다. Circle 클래스와 main() 함수를 작성하고 3개의 Circle 객체를 가진 배열을 선언하고 반지름 값을 입력받고 면적 100보다 큰 원의 개수를 출력하는 프로그램을 완성하라. Circle 클래스도 완성하라.
// */
//
//#include <iostream>
//#include <string>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//class Circle {
//    //클래스 선언부
//private:
//    int radius;
//public:
//    void setRadius(int radius); //입력
//    double getArea();
//};
// // 클래스 구현부
//void Circle::setRadius(int radius) {
//    this->radius = radius;
//}
//// 면적 구하는 함수
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//int main() {
//    Circle circles[3];
//    int cnt = 0;
//
//    for (int i = 0; i < 3; i++) {
//        int r; //입력받을 반지름
//        cout << "원 " << i + 1 << "의 반지름 >> ";
//        cin >> r;
//        circles[i].setRadius(r); //입렵값을 배열에 저장
//
//        if (circles[i].getArea() > 100) { //넓이 구하는 함수 호출후 비교
//            cnt++; //100보다 높으면 카운터
//        }
//    }
//    cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다." << endl;
//
//   
//}
//
