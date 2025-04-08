/*
 은행에서 사용하는 프로그램을 작성하기 위해 , 은행 계좌 하나를 표한하는 클래스 Account가 필요하다 계좌 정보는 계좌의 주인, 계좌 번호 ,잔액을 나타내는 3멤버 변수로 이루어진다. main() 함수의 실행 결과가 다음과 같도록 Account 클래스를 작성하라
 */

//#include<iostream>
//#include <string>
//using namespace std;
//
//
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
////setter,이름
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
//// getter
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
