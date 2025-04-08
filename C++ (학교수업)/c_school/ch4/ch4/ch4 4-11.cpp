//#include <iostream>
//#include <string>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//// 원료를 저장하는 Container 클래스
//class Container {
//    int size; // 현재 원료의 양
//public:
//    Container() { size = 10; } // 기본 생성자: 초기 용량을 10으로 설정
//    void fill() { size = 10; } // 용량을 최대치(10)로 채움
//    void consume() { size = size - 1; } // 1만큼 소모
//    int getSize() { return size; } // 현재 용량 반환
//};
//
//// 커피 자판기 클래스
//class CoffeeVendingMachine {
//    Container tong[3]; // 3개의 원료 저장소 (커피, 물, 설탕)
//    void fill(); // 원료를 모두 채우는 함수
//    void selectEspresso(); // 에스프레소 선택 시 작동하는 함수
//    void selectAmericano(); // 아메리카노 선택 시 작동하는 함수
//    void selectSugarCoffee(); // 설탕커피 선택 시 작동하는 함수
//    void show(); // 현재 원료의 상태를 출력하는 함수
//public:
//    void run(); // 커피 자판기 실행 함수
//};
//
//// 원료를 모두 채우는 함수
//void CoffeeVendingMachine::fill() {
//    for (int i = 0; i < 3; i++)
//        tong[i].fill(); // 모든 저장소를 가득 채움
//    show(); // 현재 상태 출력
//}
//
//// 에스프레소 선택 시 실행되는 함수 (커피 1, 물 1 소모)
//void CoffeeVendingMachine::selectEspresso() {
//    if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) {
//        tong[0].consume(); // 커피 1 소모
//        tong[1].consume(); // 물 1 소모
//        cout << "에스프레소 드세요" << endl;
//    }
//    else {
//        cout << "원료가 부족합니다" << endl;
//    }
//}
//
//// 아메리카노 선택 시 실행되는 함수 (커피 1, 물 2 소모)
//void CoffeeVendingMachine::selectAmericano() {
//    if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) {
//        tong[0].consume(); // 커피 1 소모
//        tong[1].consume(); // 물 1 소모
//        tong[1].consume(); // 물 1 추가 소모 (총 2 소모)
//        cout << "아메리카노 드세요" << endl;
//    }
//    else {
//        cout << "원료가 부족합니다" << endl;
//    }
//}
//
//// 설탕커피 선택 시 실행되는 함수 (커피 1, 물 2, 설탕 1 소모)
//void CoffeeVendingMachine::selectSugarCoffee() {
//    if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {
//        tong[0].consume(); // 커피 1 소모
//        tong[1].consume(); // 물 1 소모
//        tong[1].consume(); // 물 1 추가 소모 (총 2 소모)
//        tong[2].consume(); // 설탕 1 소모
//        cout << "설탕커피 드세요" << endl;
//    }
//    else {
//        cout << "원료가 부족합니다" << endl;
//    }
//}
//
//// 현재 원료의 상태를 출력하는 함수
//void CoffeeVendingMachine::show() {
//    cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
//}
//
//// 커피 자판기 실행 함수
//void CoffeeVendingMachine::run() {
//    cout << "***** 커피자판기를 작동합니다. *****" << endl;
//
//    while (true) {
//        int num;
//        cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>)";
//        cin >> num; // 사용자 입력 받기
//        
//        switch (num) {
//        case 1:
//            selectEspresso(); // 에스프레소 선택
//            break;
//        case 2:
//            selectAmericano(); // 아메리카노 선택
//            break;
//        case 3:
//            selectSugarCoffee(); // 설탕커피 선택
//            break;
//        case 4:
//            show(); // 현재 잔량 보기
//            break;
//        case 5:
//            fill(); // 원료 채우기
//            break;
//        default:
//            break;
//        }
//    }
//}
//
//// 메인 함수: 프로그램 시작 지점
//int main() {
//    CoffeeVendingMachine coffeeVendingMachine; // 커피 자판기 객체 생성
//    coffeeVendingMachine.run(); // 자판기 실행
//    return 0;
//}
//
//
//
//// 참조 https://4z7l.github.io/2020/07/19/myungpum-cpp-ch4.html
