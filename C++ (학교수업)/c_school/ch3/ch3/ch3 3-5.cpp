///*
// 랜덤 수를 발생시키는 Random 클래스를 만들자. Random 클래스를 이용하여 랜덤한 정수를 10개 출력하는 사례는 다음과 같다. Random 클래스가 생성자 . next(),nextInRange()의 3개의 멤버 함수를 가지도록 작성하고 main() 함수와 합쳐 하나의 cpp파일에 구현하라.
// */
//
//#include <iostream>
//#include<cstdlib>//랜덤 정수 발생시키기 위한 해더파일
//#include<ctime> //랜덤 정수 발생시키기 위한 해더파일
//using namespace std;
//
//class Random {
//private:
//    int min =0;
//    int max =0;
//public:
//    int next();
//    int nextInRange(int min ,int max);
//    Random(){
//        srand(time(NULL)); //현재 시간을 기반으로 시드를 설정
//    } //생정자
//};
//
////구현부
//int Random::next(){
//    return rand();
//}
//int Random::nextInRange(int min, int max){
// return rand() % (max - min + 1) + min;   // 주어진 범위에서 난수 생성하기 위해 설정
//}
//
//int main(){
//    Random r;
//    cout<<"--0에서 "<<RAND_MAX<<"까지의 랜덤 정수 10개--"<<endl;
//    for(int i=0;i<10;i++){
//        int n=r.next(); //0에서 RAND_MAX() 사이의 랜덤한 정수
//        cout<<n<< ' ';
//    }
//    cout<<endl<<endl<<"--2에서 4까지의 랜덤 정수 10개 --"<<endl;
//    for(int i=0;i<10;i++){
//        int n=r.nextInRange(2, 4); //2에서 4사이의 랜덤한 정수
//        cout<<n<< ' ';
//    }
//    cout<<endl;
//   
//}
//// 해당 랜덤 문제는 인터넷 참고를 좀 많이함.
//
