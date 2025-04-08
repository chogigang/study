///*
// 덧샘(+),뺄셈(-),곱셈(*),나눗셈(/),나머지(%)의 정수 5칙 연산을 할 수 있는 프로그램을 작성하라 정수와 연산자는 하나의 빈칸으로 분리되며 atoi() 함수를 사용해도 된다.
// */
//#include <iostream>
//#include<cstring>
//using namespace std;
//
//int main(){
//
//    int num_1 =0; //전항
//    int num_2 =0;// 후항
//    char sign[10]; //부호
//    
//    while (1) {
//        cin >> num_1>>sign>>num_2; //입력값 받기 입력할때 하나 입력후 스페이스바 를 해야 정상적으로 입력됨 주의
//        
//        if(strcmp(sign,"+")==0){ //strcmp 문자열 배교 같으면 0을 출력
//            cout<<num_1<<sign<<num_2<<"="<<num_1+num_2<<"\n"; // 출력문안에서 처리
//        }else if(strcmp(sign,"-")==0){ // 문자열 비교
//            cout<<num_1<<sign<<num_2<<"="<<num_1-num_2<<"\n";
//        }
//        else if(strcmp(sign,"*")==0){
//            cout<<num_1<<sign<<num_2<<"="<<num_1*num_2<<"\n";
//        }
//        else if(strcmp(sign,"/")==0){
//            if (num_2 != 0){
//                cout <<num_1<<sign<<num_2<<"="<< num_1 / num_2 << endl;
//            }else{
//                cout << "0으로 나눌 수 없습니다."<<endl;
//            }
//        }
//        else if(strcmp(sign,"%")==0){
//            
//            cout<<num_1<<sign<<num_2<<"="<<num_1%num_2<<"\n";
//        }else{
//            cout<<"프로그램을 종료합니다. \n";
//            break;
//        }
//    }
// // 스위치 케이스문으로 처리 가능하지만 바쁘기 때문에 나중에 해보자 과제가 처리해야할 과제가 너무 많다..
//    
//}
