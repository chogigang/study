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
