///*
// 다음은 색의 3요소인 red,green,blue 로 색을 추상화 한 Color 클래스를 선언하고 활용하는 코드이다. 빈칸을 채워라
// red,green,blue는 0-255의 값만 가진다.
// 
// */
//
//#include <iostream>
//using namespace std;
//
//// 클래스 선언부,구현부
//class Color{
//    int red,green,blue; //맴버변수
//    public :
//    //생성자 맴버변수 초기화
//    Color(){
//        red =0;
//        green=0;
//        blue=0;
//        
//    }
//    Color(int r,int g,int b){ //생성자 오버로딩
//        red=r;
//        green=g;
//        blue=b;
//
//    }
//    // 클래스 구현부
//    void setColor(int r,int g,int b){
//        red=r;
//        green=g;
//        blue=b;
//    }
//    void show(){
//        cout<<red<<" "<<green<<" "<<blue<<" "<<endl; //색깔 rgb 출력문
//    }
//};
//
//int main(){
//    Color screenColor(255,0,0); //빨간색의 screenColor 객체 생성
//    Color *p; //포인터 변수 p를 생성
//    p = &screenColor; //포인터 p에 screenColor 참조 연산자 사용
//    p->show(); // 포인터 연산자 함수 호출문
//    
//    Color colors[3]; // 색깔을 담을 배열선언
//    *p=colors[3]; // colors 배열의 시작주소를 포인터 변수 p에 선언
//    
//    p->setColor(255, 0, 0); //color 배열 첫번째 인덱스에 값을 넣음
//    (p+1)->setColor(0, 255, 0); //2번째 인덱스에 rgb 값 넣음
//    (p+2)->setColor(0, 0, 255);
//    
//    for(int i=0;i<3;i++){
//        (p+i)->show(); //반복문을 사용하여 출력문 사용
//    }
//    
//}
//
//
