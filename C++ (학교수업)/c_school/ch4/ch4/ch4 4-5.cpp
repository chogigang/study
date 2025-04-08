///*
// string 클래스를 이용하여 사용자가 입력한 영문 한 줄을 입력받고 글자 하나만 랜덤하게 수정하여 출력하는 프로그램을 작성하라
// */
//
//#include <iostream>
//#include <string>
//#include <ctime>   // 타이머 기능을 사용하기 위한 헤더 (난수 생성을 위한 시드 설정)
//#include <cstdlib> // rand() 함수 사용을 위한 헤더
//
//using namespace std;
//
//int main() {
//    string str; // 사용자로부터 입력받을 문자열 변수
//
//    cout<<"아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)"<<endl;
//    while (true) { // 무한 루프
//        getline(cin, str); // 한 줄 입력받음 (공백 포함 문자열 입력 가능)
//
//        // 사용자가 "exit"를 입력하면 프로그램 종료
//        if (str.compare("exit") == 0)
//            break; // compare 함수로 "exit" 문자열과 비교하여 같으면 루프 종료
//
//        srand((unsigned)time(0)); // 난수 생성기 시드 설정 (현재 시간 기준)
//
//        // 입력받은 문자열의 길이 내에서 랜덤한 위치 선택
//        int n = rand() % (str.length());
//
//        // 난수 생성기 시드 설정 (같은 시드를 다시 설정 → 문제 발생 가능)
//        srand((unsigned)time(0));
//
//        // 'a'부터 'z'까지의 랜덤한 소문자 생성
//        char ch = 'a' + rand() % 26; //찾는대 엄청 오래걸림
//
//        // 선택된 위치의 문자 변경
//        str[n] = ch; 
//
//        // 변형된 문자열 출력
//        cout << ">> " << str << endl;
//    }
//
// 
//}
