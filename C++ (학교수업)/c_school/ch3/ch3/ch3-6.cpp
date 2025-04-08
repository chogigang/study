//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class EvenRandom {
//    //선언부
//private:
//    int min = 0;
//    int max = 0;
//public:
//    int next();                          // 짝수 난수 생성
//    int nextInRange(int min, int max);   // 주어진 범위에서 난수 생성
//
//    EvenRandom() {
//        srand(time(NULL));  // 난수 생성 시드 초기화
//    }
//};
// //구현부 
//int EvenRandom::next() {
//    // 짝수 난수를 반환 (0, 2, 4, 6, 8, ...)
//    return 2 * (rand() % (RAND_MAX / 2 + 1));
//}
//
//int EvenRandom::nextInRange(int min, int max) {
//    // 범위 내에서 짝수 난수를 생성
//    int rangeMin = (min % 2 == 0) ? min : min + 1;  // min이 짝수가 아니면 +1
//    int rangeMax = (max % 2 == 0) ? max : max - 1;  // max가 짝수가 아니면 -1
//
//    if (rangeMin > rangeMax) {
//        return -1;  // 범위가 잘못된 경우 처리 (예: 3 ~ 4)
//    }
//
//    return 2 * (rand() % ((rangeMax - rangeMin) / 2 + 1)) + rangeMin;
//}
//
//int main() {
//    EvenRandom r;
//
//    // 0에서 RAND_MAX까지의 짝수 난수 10개 출력
//    cout << "--0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개--" << endl;
//    for (int i = 0; i < 10; i++) {
//        int n = r.next();
//        cout << n << ' ';
//    }
//    cout << endl << endl;
//
//    // 2에서 4까지의 짝수 난수 10개 출력
//    cout << "--2에서 4까지의 짝수 랜덤 정수 10개 --" << endl;
//    for (int i = 0; i < 10; i++) {
//        int n = r.nextInRange(2, 4);
//        cout << n << ' ';
//    }
//    cout << endl;
//
//    return 0;
//}
