/*
 날짜를 다루는 Date 클래스를 작성하고자 한다 Date를 이용하는ㄴ main()과 실행결과는 다음과 같다. 클래스 Date를 작성하여 아래 프로그램에 추가하라 
 */

//#include <iostream>
//#include <string>
//#include <sstream>  // istringstream 사용을 위해 필요
//using namespace std;
//
//class Data {
//private:
//    // 클래스 선언부
//    int Year;
//    int Month;
//    int Day;
//public:
//    Data(int year,int month,int day);
//    Data(const string& date);
//    int getYear();
//    int getMonth();
//    int getDay();
//    void show();
//};
//
////클래스 구현부
// //생성자 1
//Data::Data(int year, int month, int day) {
//        Year = year;
//        Month = month;
//        Day = day;
//    }
//    
//    //생성자2
//Data::Data(const string& date) {
//        // 문자열을 슬래시('/')를 기준으로 나누기 위해 istringstream 사용
//        istringstream ss(date);
//        string temp;
//        
//        // 연도
//        getline(ss, temp, '/');
//        Year = stoi(temp);  // 문자열을 정수로 변환
//        
//        // 월
//        getline(ss, temp, '/');
//        Month = stoi(temp);  // 문자열을 정수로 변환
//        
//        // 일
//        getline(ss, temp, '/');
//        Day= stoi(temp);  // 문자열을 정수로 변환
//    }
//
////getter
//    int Data :: getYear() {
//        return Year;  // 연도 반환
//    }
//    
//    int Data :: getMonth() {
//        return Month;  // 월 반환
//    }
//
//    int Data :: getDay() {
//        return Day;  // 일 반환
//    }
//
//    void Data :: show() {
//        // "YYYY년M월D일" 형식으로 출력
//        cout << Year<< "년" << Month << "월" << Day<< "일" << endl;
//    }
//
//
//int main() {
//    // int 형식으로 날짜를 전달하여 객체 생성 생성자 1번
//    Data birth(2014, 3, 20);
//
//    // string 형식으로 날짜를 전달하여 객체 생성 생성자2 번
//    Data independenceDay("1945/8/15");
//
//    // independenceDay 객체의 날짜를 show()로 출력
//    independenceDay.show();  // "1945년8월15일" 출력
//
//    // birth 객체의 연도, 월, 일을 출력
//    cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay()<<"\n";  // "2014,3,20" 출력
//
//    
//}
//
//
//
