/*
 덧샘(+),뺄셈(-),곱셈(*),나눗셈(/),나머지(%)의 정수 5칙 연산을 할 수 있는 프로그램을 작성하라 정수와 연산자는 하나의 빈칸으로 분리되며 atoi() 함수를 사용해도 된다.
 */
#include <iostream>
#include<cstring>
using namespace std;

int main(){

    int num_1 =0; //전항
    int num_2 =0;// 후항
    char sign[10]; //부호
    
    while (1) {
        cin >> num_1>>sign>>num_2;
        if(strcmp(sign,"+")==0){
            cout<<num_1<<sign<<num_2<<"="<<num_1+num_2<<"\n";
        }else if(strcmp(sign,"-")==0){
            cout<<num_1<<sign<<num_2<<"="<<num_1-num_2<<"\n";
        }
        else if(strcmp(sign,"*")==0){
            cout<<num_1<<sign<<num_2<<"="<<num_1*num_2<<"\n";
        }
        else if(strcmp(sign,"/")==0){
            cout<<num_1<<sign<<num_2<<"="<<num_1/num_2<<"\n";
        }
        else if(strcmp(sign,"%")==0){
            cout<<num_1<<sign<<num_2<<"="<<num_1%num_2<<"\n";
        }else{
            cout<<"프로그램을 종료합니다";
            break;
        }
    }

}
