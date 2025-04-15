/*
 다음과 같이 "yes"가 입력될 때까지 종료하지 않는 프로그램을 작성하라. 사용자로부터의 입력은 cin.getline() 함수를 사용하라
 */

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string endcmd ="yes"; //종료할 코맨트 변수
    char userinput[100]; //입력받을 배열 변수
    while(1){
        cout<<"종료하고싶으면 yes를 입력하세요:";
        cin.getline(userinput,100,'\n'); //문자열 입력 받는 함수
        if(endcmd==userinput){ //문자열 if문으로 비교
            cout<<"종료합니다... "<<endl;
            break;
        }
        
    }
    
}


