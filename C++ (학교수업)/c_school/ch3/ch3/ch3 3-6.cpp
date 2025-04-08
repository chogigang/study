/*
 문제 5번을 참고하여 짝수 정수만 랜덤하게 발생시키는 EvenRandom 클래스를 작성하고 EvenRandom 클래스를 이용하여
 10개의 짝수를 랜덤하게 출력하는 프로그램을 완성하라 0도 짝수로 처리한다.
 */

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
//    int rangeMin = (min % 2 == 0) ? min : min + 1;  //max가 짝수면 그대로, 홀수면 -1 해서 짝수로 맞춤
//    int rangeMax = (max % 2 == 0) ? max : max - 1;  // 짝수면 그대로, 홀수면 -1 해서 짝수로 맞춤
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
//
//// 이예제도 인터넷에 많이 찾아봄
