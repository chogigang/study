#include <iostream>
using namespace std;

int main(){
    
    int*arr =new int[5];// 5개 점수를 받기위해  int 배열 5개의 크기를 동적할당
    float avg =0.0; //평균값을 계산하기 위한 변수
    
    cout<<"정수 5개를 입력하세요"<<endl;
    
    for(int i=0;i<5;i++){
        cin>>arr[i]; //정수 입력 받기
        avg+=arr[i]; //입력된 정수를 바로 평균을 구하는 변수에 넣어줌
    }
    avg=avg/5; //평균을 구하기 위해 반복문이 끝나자마자 5를 나누어 avg 변수를 초기화
    
    cout<<"5개의 정수 평균은 "<<avg<<" 입니다."<<endl;
    
}
