//#include <iostream>
//#include<cstdlib>
//#include<ctime>
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
//        srand(time(NULL));
//    } //생정자
//};
//
////구현부
//int Random::next(){
//    return rand();
//}
//int Random::nextInRange(int min, int max){
// return rand() % (max - min + 1) + min;   // 주어진 범위에서 난수 생성
//}
//
//int main(){
//    Random r;
//    cout<<"--0에서 "<<RAND_MAX<<"까지의 랜덤 정수 10개--"<<endl;
//    for(int i=0;i<10;i++){
//        int n=r.next();
//        cout<<n<< ' ';
//    }
//    cout<<endl<<endl<<"--2에서 4까지의 랜덤 정수 10개 --"<<endl;
//    for(int i=0;i<10;i++){
//        int n=r.nextInRange(2, 4);
//        cout<<n<< ' ';
//    }
//    cout<<endl;
//   
//}
//


