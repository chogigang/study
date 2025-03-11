#include <stdio.h>
#include<iostream>
using namespace std;

//2-4번 문제
// 다섯명의 나이를 입력받아 평균나이를 출력하는 프로그램 작성


void input(int userarr[5]){
    cout<<"5명의 나이를 입력 :";
    for (int i=0;i<5;i++){
        cin>>userarr[i];
    
    }
    
}

//평균
int avg(int userarr[5]){
    int avg;
    int sum;
    for (int i=0; i<5;i++){
        sum = userarr[i];
    }
    avg = sum/5;
    return avg;
}

//최대
int max(int userarr[5]){
    int max =0;
    
    for (int i=0;i<5;i++){
        
        if(max<userarr[i]){
        max =userarr[i];
        }
    }
    return max;
}


void output(int avg,int max){
    cout<<"나이의 평균"<<avg<<"\n";
    cout<<"나이 최대값"<<max<<"\n";
    
}

int main(){
int userarr[5]={0,0,0,0,0};
    input(userarr);
   int avg_val = avg(userarr);
   int max_val = max(userarr);
    output(avg_val,max_val);
    
}


//1-3 번 문제
//  5개의 정수를 입력 받아 *를 이용하여 작성하시오

//void input(int inputarr[5]){
//    cout << "다섯개의 정수를 입력하세요 :";
//    for (int i = 0; i < 5; i++) {
//
//           cin >> inputarr[i];
//    }
//}
//
//void output(int inputarr[5]){
//    for(int i=0;i<5.; i++){
//        int count =inputarr[i];
//          cout<<"번호"<<i;
//          for(int j=0; j<count;j++){
//              cout<<'*';
//          }
//          cout<<"\n";
//      }
//}
//
//int main(){
//    int inputarr[5]={0,0,0,0,0};
//
//    input(inputarr);
//    output(inputarr);
//
//}
//











// 1-1
//  섭씨 화씨  예제
//int main(){
//    char ch; //문자 입력받는 용
//    float input ,output;
//    
//    cout<<"화씨를 입력할경우 F,f  섭씨를 입력할경우 C,c를 입력하세요:";
//    cin>>ch;
//    
//    cout<<"온도를 입력하세요 : ";
//    cin >>input;
//    
//    if(ch == 'f' || ch =='F'){
//        output = (5.0/9.0)*(input-32);
//        cout<<"화씨: "<<input<<"\n변환된 섭씨: "<<output<<"\n";
//        
//
//    }else if(ch=='c'||ch =='C'){
//        output = (9.0/5.0)*input+32;
//        cout<<"섭씨:"<<input<<"\n 변환된 화씨: "<<output<<"\n";
//        
//    }else{
//        cout<<"잘못된 출력입니다.";
//    }
//}


// 1-2
// 스위치 케이스 문을 사용한 섭씨 화씨
//int main(){
//    
//    char ch;
//    int input,output;
//    
//    cout<<"화씨를 입력할경우 F,f 섭씨를 입력할 경우 C,c를 입력하세요: ";
//    cin>> ch;
//    
//    cout<<"온도를 입력하세요: ";
//    cin>>input;
//    
//    
//    switch (ch) {
//        case 'c':
//        case 'C':
//            output = (9.0/5.0)*input+32;
//            cout<<"섭씨: "<<input<<"\n변환된 화씨: "<<output<<"\n";
//            break;
//        case 'f':
//        case 'F':
//            output = (5.0/9.0)*(input-32);
//            cout<<"화씨: "<<input<<"\n변환된 섭씨: "<<output<<"\n";
//            break;
//      
//        default:
//            cout<<"잘못된 출력입니다.\n";
//            break;
//    }
//    
//    
//}

//1-3 번 문제
//  5개의 정수를 입력 받아 *를 이용하여 작성하시오

//void input(int inputarr[5]){
//    cout << "다섯개의 정수를 입력하세요 :";
//    for (int i = 0; i < 5; i++) {
//
//           cin >> inputarr[i];
//    }
//}
//
//void output(int inputarr[5]){
//    for(int i=0;i<5.; i++){
//        int count =inputarr[i];
//          cout<<"번호"<<i;
//          for(int j=0; j<count;j++){
//              cout<<'*';
//          }
//          cout<<"\n";
//      }
//}
//
//int main(){
//    int inputarr[5]={0,0,0,0,0};
//
//    input(inputarr);
//    output(inputarr);
//
//}
//


