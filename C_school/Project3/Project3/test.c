#include <stdio.h>

//
//  main.cpp
//  c_tttt
//
//  Created by 조기강 on 10/16/23.
//
//
//#include <iostream>
//using namespace std;
//int main() {
//
//    cout<<"sex"<<endl;
//    return 0;
//}

//처음 문제
//int main(){
//    int a= 1;
//    int b=0;
//    int sum=0;
//    do{
//        a=a+b;
//        b=b+1;
//        sum=sum+a;
//        
//    }while(b<20);{}
//    printf("%d",sum);
//}


// 1번문제
//수열 1+3+6+10+15+21+..... 10번항 까지의 합

//int main(){
//    int sum=0;
//    int a=1;
//    int b=2;
//    
//    
//    do{
//        sum=sum+a;
//        a=a+b;
//        b+=1;
//        
//    }while( b-2<10);{
//        
//    
//    }
//    
//    
//    printf("%d",sum);
//    return 0;
//}
//


//2번문제

//1-2+3-4+5-6.....+99-100
// 각 항 누적 합
// 각 항 계산
// 부호 결정 SW

// SW : 0 =>+
// SW : 1 =>-
//
//int main(){
//    int sum =0;
//    int a =0;
//    short sw =0;
//    
//    do{
//        a=a+1;
//        if(sw==0){// 양수인가 확인
//            sum=sum+a;
//            sw=1;
//        }else{
//            sum=sum-a;
//            sw=0;
//            
//        }
//        
//        
//    }while(a<100);{
//        
//        
//    }
//    
//    printf("%d",sum);
//    
//    return 0;
//}


//예제1. (-1)*2*(-3)*4*(-5)*6....*10

//int main(){
//    int a=1;
//    int sum;
//    int i=0;
//    do{
//        ++i;
//        if(a%2==0){
//            sum=sum*a;
//            a=a+1;
//            
//        }else{
//            sum=sum*(a*-1);
//            a=a+1;
//        }
//        
//    }
//    while(i<10);{
//        
//        
//    }
//    
//    printf("%d",sum);
//    return 0;
//}


//2번 예제
//-1+2-4+7-11+16-22+.... 20번째 항까지의 합계

//int main() {
//    int a=1;
//    int b=0;
//    int sum=0;
//    int sw=-1;
//    
//    
//    do{
//        a=a+b;
//        b=b+1;
//        sum=sum+(a*sw);
//        sw=sw*-1;
//        
//    
//    }
//    while(b<20);{
//        
//        
//    }
//    printf("%d",sum);
//    return 0;
//}



//예제3. (77*1)+(76*2)+(75*3)+........+(1*77)

//int main(){
//    int a=77;
//    int b=1;
//    int sum=0;
//    
//    
//    do{
//        sum=sum+(a*b);
//        --a;
//        ++b;
//        
//        
//    }while(b<=77);{ //77항까지 반복해야한다.
//    }
//    printf("%d",sum);
//    return 0;
//}


//예제4. 1!+2!+3!+4!+5!+6!.....+10!


//int main(){
//    
//    int sum =0;
//    int a=1;
//    int b=0;
//    int c=0;
//    
//    while(c<10){
//        c=c+1;
//        a=1;
//        b=0;
//        
//        while(b<c){
//            b=b+1;
//            a=a*b;
//        }
//        sum=sum+a;
//    }
//    printf("%d",sum);
//    
//}


//int main(){
//    int sum=0;
//    int a=1;
//    int i=0;
//    
//    do{
//        ++i;
//        a=a*i;
//        sum=sum+a;
//        
//    }
//    while(i<10);{
//        }
//    printf("%d",sum);
//}



//예제 5. 1+1+2+3+5+8+13+.... 20번째 항까지의 합
//피보나치 수열 문제

//int main(){
//    
//    int a=1; //현제 값
//    int b=0; //이전값
//    int c=0; //임시변수
//    int sum=0;
//    int cnt=0; //몇항반복할지 정할 변수
//    
//    do{
//        cnt =cnt+1;
//        sum=sum+a;//현제 값을 더함
//        c=a+b; //임시변수에 현제값+이전값을 더함
//        b=a; //이전값에 현제값을 삽입
//        a=c; //현제값에 임시변수값을 삽입.
//    }
//    while(cnt<20);{
//        
//    }
//    printf("%d",sum);
//}


//문제 6. 1/1+1/2+1/3+.........1/10.

 //주의 변수를 float ,double 로 설정해줘야함
//int main(){
//    float a=0;
//    float b=1;
//    float sum=0;
//    
//    do{
//        a=1/b;
//        sum=sum+a;
//        ++b;
//        
//    }
//    while(b!=10);{
//        
//    }
//    printf("%f",sum);
//}


//문제7. 1/2+2/3+3/4+4/5......99/100

//
//int main(){
//    float a=1;
//    float b=2;
//    double sum=0;
//    float c=0; //계산해서 sum에 넣을 임시변수
//    
//    do{
//        c=a/b;
//        sum=sum+c;
//        ++a;
//        ++b;
//    }
//    while(b!=100);{
//    }
//    printf("%f",sum);
//    return 0;
//}
//93.822622

//int main() {
//
//float a = 1;
//
//float sum = 0;
//
//  
//
//do {
//
//sum = sum + a/(a+1);
//
//a = a + 1;
//
//  
//
//  
//
//} while (a<= 99);{
//}
//
//printf("%f:",sum);
//
//}
//94.812645



//문제 8 임의의 정수를 입력받아 소수를 판별하는 코드,순서도

//int main(){
//   
//    int user_input;
//    int i=2;
//    int f=1; //1일때 소수 0일때 소수아님
//    printf("정수를 입력하세요:");
//    scanf("%d",&user_input);
//    
//    do{
//        if(user_input%i==0){
//            f=0;
//            
//        }else{
//            f=1;
//        }
//        ++i;
//    }
//        
//        while (i<user_input); {
//    }
//    if(f==1){
//        printf("소수입니다.");
//    }else{
//        printf("소수가 아닙니다.");
//    }
//}

//문제 9. 임의의 정수를 입력받아 그 안에 포함된 소수의 합을 구하는 문제 do while사용


//int main(){
//    int user_input;
//    int i=2;
//    int j; //2중포문 2번째 반복용
//    int sum=0;
//    
//    printf("정수를 입력하세요: ");
//    scanf("%d",&user_input);
//    do {
//        int f=1; //1이면 소수 0이면 소수아님
//        for(j=2;j<i;j++){
//            if(i%j==0){
//                f=0;
//                break;
//            }
//            
//        }
//        if(f==1){
//            sum+=i;
//        }
//        ++i;
//    } while (i<=user_input);
//    
//    printf("입력하신 정수까지의 총합은: %d",sum);
//}
//

//문제 10. 정수를 입력받아 약수를 구해 출력하는 순서도

//int main(){
//    int a; //유저 입력값 받기
//    int b[100]={ }; //약수 담을 배열
//    int c=0;  //약수 갯수
//    int d=0;  //배열 인덱스
//    int i=1;  //for 문 출력 할때 사용하는 변수
//    int quotient;
//    printf("정수를 입력하세요: ");
//    scanf("%d",&a);
//    
//    do{
//        c=c+1;
//        if(a%c==0){
//            quotient=c;
//            b[d]=quotient;
//            d=d+1;
//        }
//        
//    }
//    while(c<=a);{
//        
//        
//    }
//    for(i=1;i<d-1;i++){
//        printf("%d \n",b[i]);
//    }
//    
//}



//문제 11. 소인수 분해 문제

//int main(){
//    int s[20]={}; //소인수 분해한 결과를 저장할 배열
//    int n; //입력값
//    int k=2; // n을 나누어 보는수
//    int c=0; //소인수 계산처리를 위한 변수
//    short y=0; //소인수 분해한 결과를 출력할때 사용할 배열 첨자 순서도는 1부터지만 프로그램 언어는 0부터 시작
//    
//    printf("정수를 입력하세요: ");
//    scanf("%d",&n);
//    if(n<2){
//        printf("2보다 작은숫자는 프로그램을 종료 합니다.");
//        return 0;
//    }
//    
//    do{
//        if(n%k==0){
//            s[c]=k;
//            c=c+1;
//            n=n/k;
//        }else{
//            k=k+1;
//        }
//    }
//    while(n!=1);{}
//    
//    if(c==1){
//        printf("값 자체가 소수입니다.");
//    }else{
//        printf("소인수분해 출력 : ");
//        for(y=0;y<c;y++){
//            printf("%d",s[y]);
//            if(y<c-1){
//                printf("x");
//            }
//        } //for 문 중괄호
//    } //else 중괄호
//}


//2회차

//1번 문제
// 수열 1+3+6+10+15+21.....10번항 까지 합
//int main(){
//    int a=1;
//    int b=2;
//    int sum=0;
//    
//    do{
//        sum=sum+a;
//        a+=b;
//        b=b+1;
//        
//        
//    }while(b-2<10);{
//    }
//    printf("%d",sum);
//}




// 출력값 220


//2번 문제
// 수열 1+2+5+10+17+26 .....10번항 까지 합
//
//int main(){
//    
//    int a=1;
//    int b=1;
//    int sum=0;
//    int i=0;
//    
//    do{
//        sum+=a;
//        a+=b;
//        b=b+2;
//        ++i;
//    }while(i<10);{
//        
//    }
//    printf("%d",sum);
//}



//295 출력

//3번 문제
// 1-2+3-4+5-6...+99-100

//int main(){
//    int sum=0;
//    int a=0;
//    int sw=0; //0일때 양수   1일때 음수
//    
//    do{
//        a=a+1;
//        if(sw==0){
//            sum+=a;
//            sw=1;
//            
//        }else{
//            sum-=a;
//            sw=0;
//            
//        }
//        
//    }while(a<100);{
//        
//    }
//    printf("%d",sum);
//}



//4번 문제

//(-1)*2(-3)*4*(-4)*6*...10
//int main(){
//    int a=1;
//    short sw=-1;
//    int mul =1;
//    
//    do{
//        mul*=(a*sw);
//        sw=sw*-1;
//        ++a;
//    }while(a<=10);{}
//    printf("%d",mul);
//}




//5번문제
// -1+2-4+7-11+16-22+....... 20번째항 까지의 합계

//int main(){
//  
//    int a=1;
//    int b=0;
//    int sum =0;
//    int sw= -1;
//    
//    do{
//        a+=b;
//        sum=sum+(a*sw);
//        sw=sw*-1;
//        ++b;
//        
//    }while(b<20);{}
//    
//    printf("%d",sum);
//}


//6번 문제
// (77*1)+(76*2)+(75*3)+.......+(1*77)
//int main(){
//    int a=77;
//    int b=1;
//    int sum=0;
//    do{
//        sum+=(a*b);
//        --a;
//        ++b;
//    }while(b<=77);{}
//    
//    printf("%d",sum);
//}






//7번 문제
// 1!+2!+3!+4! ...10!
//
//int main(){
//    int a=1;
//    int sum=0;
//    int i=1;
//    do{
//        sum+=a;
//        ++i;
//        a*=i;
//        
//        
//        
//    }while(i<=10);{
//        
//    }
//    printf("%d",sum);
//}

//8번 문제
//1+1+2+3+5+8+13....... 20번째 항까지의 합
 //피보나치 수열  문제
//


//
//int main(){
//    int a=1; //현제값
//    int b=0;// 이전값
//    int c=0; //임시변수
//    int sum=0; //더할값
//    int cnt =0; //반복 횟수
//    
//    do{
//        sum+=a;
//        c=a+b;
//        b=a;
//        a=c;
//        ++cnt;
//    }while(cnt<20);{
//        
//    }
//    printf("%d",sum);
//
//}



//10번 문제
//1/2+1/3+......+1/10

//int main(){
//    float a =1;
//    float b=1;
//    double sum =0;
//    
//    do{
//        
//        sum=sum+(1/a);
//        ++a;
//    }while(a<=10);{
//    }
//    printf("%f",sum);
//}
// 2.928968


//11번 문제
 //1/2+2/3+3/4+4/5.....99/100

//int main(){
//    float a=1;
//    float sum=0;
//    
//    do{
//        
//        sum=sum+(a/(a+1));
//        ++a;
//    }while(a<=99);{
//        
//    }
//    printf("%f",sum);
//}
//출력값 94.812645


// 12번문제 임의의 정수를 입력받아 소수를 판별하는 문제

//int main(){
//    int user_input;
//    int is_prime = 1;   //1이 소수 0이 소수아님
//    int i=2;
//    printf("정수를 입력하세요: ");
//    scanf("%d",&user_input);
//    do {
//
//               if (user_input % i == 0) {
//                   is_prime = 0; // 나누어 떨어지면 소수가 아님
//                   break;
//               }else{
//                   is_prime =1;
//               }
//        ++i;
//           } while (i < user_input);
//
//
//       if (is_prime == 1) {
//           printf("%d는 소수입니다.", user_input);
//       } else {
//           printf("%d는 소수가 아닙니다.", user_input);
//       }
//
//
//       
//   }


//13번 문제
//임의의 정수를 입력받아 그안에 포함된 소수의 합을 구하는 순서도

//int main(){
//    int user_input;
//    short f=1; //1은 소수 0은 소수아닌ㅁ
//    int i=2;
//    int sum=0;
//    printf("정수를 입력하세요: ");
//    scanf("%d",&user_input);
//    
//    do{
//        f=1; //플래그를 1로 초기화
//        for(int j=2;j<i;j++){
//            if(i%j==0){
//                f=0;
//                break;
//            }
//            
//        }
//        if(f==1){
//            sum+=i;
//        }
//        ++i;
//    }while(i<user_input);{}
//    
//    printf("%d",sum);
//    
//}


//14번 문제
 //정수를 입력받아 약수를 구해 출력하기


//int main(){
//    int b[100]={};
//    int a;
//    int c=0;
//    int d=0;
//    int i=0;
//    printf("정수를 입력하세요: ");
//    scanf("%d",&a);
//    do{
//        c=c+1;
//        if(a%c==0){
//            b[d]=c;
//            d=d+1;
//        }
//    }while(c<=a);{}
//    
//    for(i=0;i<d;i++){
//        printf("%d\n",b[i]);
//    }
//    
//}

//15번 문제
//int main(){
//    short s[20]; //소인수를 담을 배열
//    int n; //입력 받을 변수
//    int k=2; //입력받은 변수를 나눌 변수
//    int c=0; //소수 갯수를 카운터 시키며 배열 인덱스참고용
//    int y=0; // 소인수 출력할때 for 문에서 사용하는변수
//    printf("정수를 입력하세요: ");
//    scanf("%d",&n);
//    
//    if(n<=2){
//        printf("2보다 작으므로 프로그램을 종료합니다,");
//        return 0;
//        
//    }
//    
//    
//    do{
//        if(n%k==0){
//            s[c]=k;
//            c=c+1;
//            n=n/k;
//        }else{
//            k=k+1;
//        }
//        
//    }while(n!=1);{}
//    
//    if(c==1){
//        printf("%d 은 소수입니다. ",n);
//    }else{
//        for(y=0;y<c;y++){
//            printf("%d",s[y]);
//            if(y<c-1){
//                printf("x");
//            }
//        }
//        
//    }
//}


 // 1!+2!+3!+4!+  .....10

//int main() {
//    int a = 1;
//    int b = 1; // b를 1로 초기화
//    int c = 0;
//    int sum = 0;
//
//    do {
//        b = 1; // b를 1로 초기화
//        c = c + 1;
//
//        do {
//            a = a * b; // a 변수를 다시 선언하지 않고, 이전에 선언한 a를 사용
//            b = b + 1;
//            sum = sum + a;
//        } while (a >= b);
//
//    } while (c < 10);
//
//    printf("%d", sum);
//    return 0; // main 함수가 정상적으로 종료하도록 return 0; 추가
//}
 // ------------------------------------------------------------------------------


//1  a=1
//2. b=0

//3. b<20

 //문제 1. 1+2+4+7+11+16+22..... 20 번 항까지의 합계
//int main(){
//    
//    int sum=0;
//    int a=1;
//    int b=0;
//    
//    do{
//        a=a+b;
//        b=b+1;
//        sum+=a;
//        
//    }while(b<20);{}
//    printf("%d",sum);
//    
//}
//출력값 1350


//2번문제
//1+3+6+10+15+21......10번항 까지 합계 구하는 순서도

// 1. b=2;
 //2. sum=sum+a;
//3. b-2<10;
//int main(){
//    int sum =0;
//    int a=1;
//    int b=2;
//    
//    do{
//        sum+=a;
//        a=a+b;
//        b=b+1;
//        
//    }while(b-2<10);{}
//
//    printf("%d",sum);
//    
//}

//출력 220


// 3번 문제
// 임의의. 정수 A를 입력받아 소수를 출력하는 순서도

// 1번 b=1;
//. 2번 b+1;
//3.   MOD(a,b)==0;

//int main(){
//    int a;
//    int b=1;
//    scanf("%d",&a);
//    printf("정수를 입력하세요: ");
//    do{
//        ++b;
//    
//        
//        
//    }while(a%b!=0);{}
//    if(a==b){
//        printf("소수");
//    }else{
//        printf("소수아님");
//    }
//    
//}

//4번문제
// 1-2+3-4+5-6......+99-100

// 1. sum=sum+a;
// 2. sw=1;
// 3. sum-=a;
// 4. sw=0;


//int main(){
//    
//    int sum=0;
//    int a=0;
//    int sw=0;
//    
//    do{
//        a=a+1;
//        if(sw==0){
//            sum+=a;
//            sw=1;
//        }else{
//            sum-=a;
//            sw=0;
//        }
//        
//    }while(a<100);{}
//    printf("%d",sum);
//}





//5번 문제

//1!+2!+3!+4!+5!.........+10! 를 구하라

//1. c=0;
//2. a=1;
//3. b=0;
//4. a=a*b;
//5. b<c;


//int main(){
//    int sum=0;
//    int a=1; //전체 팩토리얼
//    int b=0; //a를 곱할때 사용하는 변수
//    int c=0; //전체 카운터
//    
//    do{
//        c=c+1;
//        a=1;
//        b=0;
//        do{
//            b=b+1;
//            a=a*b;
//        }while(b<c);{}
//        sum=sum+a;
//    }while(c<10);{}
//    
//    printf("%d",sum);
//}

 //출력값 :4037913



//6번 문제

//두수를 입력받아 두수 의 최대공략수 최소 공배수를 계산해서 출력하는 코드



//int main(){
//    int a,b; //입력값
//    int c;//  임시변수
//    int remainder =0; //임시변수2
//    int LCM;//최대 공약수
//    int GCD;//최소 공배수
//    
//    printf("정수입력: ");
//    scanf("%d",&a);
//    scanf("%d",&b);
//    c=a*b;
//    if(a<b){
//        GCD=a; //작은값을 최대 공약수에 삽입 임시로 넣음
//        a=b; //큰값을 a
//        b=GCD; //작은값을 임시변수에 있던걸 넣어주기
//    }
//    remainder=a%b;
//    
//    while(remainder!=0){
//        a=b; //작은값을 a
//        b=remainder; //b에다가 나눈 나머지 값
//        remainder=a%b;
//    }
//    GCD=b; //작은값에 GCD 입력
//    LCM=c/GCD; //LCM에   c나누기 GCD
//    
//    
//    printf("GCD : %d", GCD);
//    printf("LCM %d",LCM);
//}



//1번문제 10개의 숫자를 입력 받아 배열에 저장한 후 최대값을 구하는 문제
// 값 입력 배열 : A(10)
// 최대값 저장 변수 : MAX
//

//
//int main(){
//    int a[10];
//    int i=0;
//    int MAX=0;
//    
//    
//    
//    do {
//        printf("정수를 입력하세요 : ");
//        scanf("%d",&a[i]);
//        
//    } while (i<10);{
//    }
//    
//    MAX= a[0]; // MAX = 0;
//    i=1;
//    
//    do{
//        if(MAX<a[i]);{
//            MAX= a[i];
//        }
//        i=i+1;
//        
//    }while(i<10);{}
//    
//    
//    printf("%d",MAX);
//}



// for 문 사용 해서만들기

//int main(){
//    int a[10];
//    int max=0;
//    
//    
//    for(int i=0;i<10;i++){
//        printf("정수를 입력하세요: ");
//        scanf("%d",&a[i]);
//        
//    }
//    max =a[0];
//    
//    for(int i=1;i<10;i++){
//        if(max<a[i]){
//            max=a[i];
//        }
//    }
//    
//    printf(" MAX 값: %d",max);
//}


//int main(){
//    int a[10];
//    int max=0;
//    
//    
//    for(int i=0;i<10;i++){
//        printf("정수를 입력하세요: ");
//        scanf("%d",&a[i]);
//        
//    }
//    max =a[0];
//    
//    for(int i=1;i<10;i++){
//        if(max<a[i]){
//            max=*a+i; //포인터 주소값 으로 대체
//        }
//    }
//    
//    printf(" MAX 값: %d",max);
//}



//2번문제 숫자를 입력 받아 배ㅕㄹ에 저장한 후 최대값,최소값을 구하는 문제

//int main(){
//    int a[10];
//    int min=0;
//    int max=0;
//    int i=0;
//    
//    for(int i=0; i<10;i++){
//        printf("정수를 입력하세요: ");
//        scanf("%d",&a[i]);
//    }
//    max=a[0];
//    min=a[0];
//    for(i=1;i<10;i++){
//        if(a[i]<min){
//            min=a[i];
//        }
//        if(max<a[i]){
//            max=a[i];
//        }
//    }
//    
//    printf("최대값: %d,최소값%d",max,min);
//}



//int main(){
//    int a[10];
//    int min=0;
//    int max=0;
//    int i=0;
//    int sum=0;
//    
//    for(int i=0; i<10;i++){
//        printf("정수를 입력하세요: ");
//        scanf("%d",&a[i]);
//        sum+=a[i];
//    }
//    max=a[0];
//    min=a[0];
//    for(i=1;i<10;i++){
//        
//        if(a[i]<min){
//            min=a[i];
//        }else if (max>a[i]){
//            max=a[i];
//        }
//      
//    }
//    sum= sum-min-max;
//    printf("최대값: %d,최소값%d",max,min);
//    printf(" 최소값 최대값을 뺀 평균: %f", (float)sum/8);
//}
//



//
//int main(){
//    int *a,b;
//    
//    a=&b;
//    *a=199;
//    printf("%d",b);
//    
//}


//int main(){
//    int *a;  //double 로 포인터는 타입을 일치시켜야함.
//    double b,tmp;
//    tmp =3.14159;
//    
//    a=&tmp;
//    b=*a;
//    printf("%f",b);
//    
//}

//int main(){
//    int *a;
//    *a =199;
//    printf("%d",*a);
//    
//}

//int main(){
//    char *c_p,c;
//    int *i_p,i;
//    float *f_p,f;
//    double*d_p,d;
//    
//    
//    
//    
//    
//}




//int main(){
//    int *a,b;
//    
//    a=&b;
//    b=1;
//    printf("%p\n",a);
//    *a++;
//    printf("%d %p %d",b,a,*a);
//    
//    
//}
// //출력값 : x16fdff2c4
//// 1 0x16fdff2c8 1876947656
//
//
//
//
//int main(){
//    int *a,b;
//    a=&b;
//    b=1;
//    printf("%p\n",a);
//    
//    (*a)++;
//    printf("%d %p %d",b,a,*a);
//    
//    
//}
//// 출력값 0x16fdff2c4
// //2 0x16fdff2c4 2
//
//
//
//
//int main(){
//    int *a,b;
//    a=&b;
//    b=1;
//    printf("%p\n",a);
//    
//    ++*a;
//    printf("%d %p %d",b,a,*a);
//    
//    
//}
//
////출력값 0x16fdff2c4
////2 0x16fdff2c4 2



//1부터 100까지 수 중에서 5의 배수의 개수와 합을 구하는 문제


// for 문 사용
//int main(){
//    
//    int cnt=0; //개수 변수
//    int sum=0; //합계 변수
//    int i=1; //1~100 변수
//    
//    for(int i=1;i<=100;i++){
//        if(i%5==0){
//            sum+=i;
//            cnt=cnt+1;
//        }
//        
//    }
//    
//    printf("합계: %d 5의 배수 개수: %d",sum,cnt);
//    
//}



//int main(){
//    int cnt=0;
//    int sum=0;
//    int i=0;
//    
//    do{
//        i=i+1;
//        if(i%5==0){
//            cnt=cnt+1;
//            sum=sum+i;
//        }
//        
//        
//    }while(i<100);{
//        
//    }
//    
//    printf("합계: %d 5의 배수 개수: %d",sum,cnt);
//}


//10개의 양의 정수를 입력받아 배열에 저장한후 저장된 자료 중 7에 가장 가까운 자료를 찾는 순서도

//int main(){
//    int a[10];// 입력받은 변수
//    int dif=0; // 두수의 차
//    int s_dif=999;// 두수의 차이 중 가장 작은 값
//    int b=0; // 가장 가까운 수 저장 변수
//    
//    for (int i=0;i<10;i++){
//        printf("정수를 입력하세요: ");
//        scanf("%d",&a[i]);
//        
//    }
//    
//    
//    for(int j=0;j<10;j++){
//        dif=a[j]-7;
//        if(dif<0){
//            dif=dif*-1;
//        }
//        if(dif<s_dif){
//            s_dif=dif;
//            b=a[j];
//        }
//      
//    }
//    
//    
//    printf("가장 작은수: %d",b);
//}





// 중복된 값이 나오게 하기

//int main() {
//    int a[10];   // 입력 변수
//    int dif = 0;  // 두 수의 차
//    int s_dif = 36000000; // 두 수의 차이 중 가장 작은 값
//    int b = 0;  // 가장 가까운 수 저장 변수
//    int c[10];  // 가장 가까운 수들을 저장할 배열
//    int cnt = 0;  // c 배열 인덱스에 사용될 변수
//
//    for (int i = 0; i < 10; i++) {
//        printf("정수를 입력하세요: ");
//        scanf("%d", &a[i]);
//    }
//
//    for (int j = 0; j < 10; j++) {
//        dif = a[j] - 7;
//        if (dif < 0) {
//            dif = -dif;
//        }
//        if (dif == s_dif) {
//            c[cnt] = a[j];
//            cnt++;
//        }
//        if (dif < s_dif) {
//            s_dif = dif;
//            b = a[j];
//            // 새로운 최소값을 찾았으므로 c 배열 초기화
//            cnt = 0;
//            c[cnt] = b;
//            cnt++;
//        }
//    }
//
//    printf("가장 작은 수 출력\n");
//    for (int k = 0; k < cnt; k++) {
//        printf("%d ", c[k]);
//    }
//    
//  
//}






//버블 정렬
//10개의 숫자를 입력받아 배열에 저장한 후 저장된 자료를 오름차순으로 정렬

//int main() {
//    int i = 0;
//    int j = 0;
//    int a[10];
//    int temp = 0; //임시 변수
//
//    for (i = 0; i < 10; i++) {
//        printf("정수를 입력하세요: ");
//        scanf("%d", &a[i]);
//    }
//
//    for (i = 0; i < 9; i++) {
//        for (j = 0; j < 9 - i; j++) {
//            if (a[j] > a[j + 1]) { //내림차순으로 정렬하려면 부호를 뒤집어야 합니다.
//                temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//        }
//    }
//
//    // 정렬된 배열 출력
//    printf("오름차순으로 정렬된 배열:\n");
//    for (i = 0; i < 10; i++) {
//        printf("%d ", a[i]);
//    }
//
//   
//}


//선택 정렬
//10개의 숫자를 입력받아 배열에 저장한 후 저장된 자료를 오름차순으로 정렬

//int main(){
//    int i=0;
//    int j=0;
//    int a[10];
//    int temp=0; //임시 변수
//
//
//    for(int i=0;i<10;i++){
//        printf("정수를 입력하세요: ");
//        scanf("%d",&a[i]);
//
//    }
//
//    for (int i = 0; i < 9; i++) {
//        for (int j = i+1; j < 10; j++) {
//            if (a[i] > a[j]) {
//                int temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//    }
//
//    // 정렬된 배열을 출력
//       printf("오름차순으로 정렬된 배열:\n");
//       for (int i = 0; i < 10; i++) {
//           printf("%d ", a[i]);
//       }
//
//}
//


//삽입 정렬



//버블 정렬 while

//int main(){
//        int i=0;
//        int j=0;
//        int a[10];
//        int temp=0; //임시 변수
//    
//    
//    
//    
//    while(i<10){
//        printf("정수를 입력하세요: ");
//        scanf("%d",&a[i]);
//        ++i;
//        
//    }
//    
//    i=0;
//    while(i<9){
//        j=0;
//        while(j<9-i){
//            if(a[j]>a[j+1]){
//                temp=a[j];
//                a[j]=a[j+1];
//                a[j+1]=temp;
//            }
//            ++j;
//        }
//        ++i;
//    }
//    i=0;
//    while(i<10){
//        printf("%d\n",a[i]);
//        ++i;
//    }
//}




//선택 정렬


//int main(){
//
//            int i=0;
//            int j=0;
//            int a[10];
//            int temp=0; //임시 변수
//    
//    
//    while(i<10){
//        printf("정수를 입력하세요: ");
//        scanf("%d",&a[i]);
//        
//        
//    }
//    
//    i=0;
//    while(i<9){
//        while(j<9){
//            if(a[i]>a[j]){
//                temp=a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//            ++j;
//        }
//        ++i;
//    }
//}


//삽입 정렬

//1번째 문제

//10개의 숫자를 입력받아 배열에 저장한 후 저장된 자료를 오름차순으로 정렬하는 순서도(for 문 )

//int main() {
//    int key;
//    int i, j;
//    int a[10];
//
//    // 입력 받기
//    for (i = 0; i < 10; i++) {
//        printf("정수를 입력하세요: ");
//        scanf("%d", &a[i]);
//    }
//
//    // 삽입 정렬
//    for (i = 1; i < 10; i++) {
//        key = a[i]; // 임시 변수에 임의로 저장
//        for (j = i - 1; j >= 0; j--) {
//            if (a[j] > key) {
//                a[j + 1] = a[j];
//            } else {
//                break;
//            }
//        }
//        a[j + 1] = key;
//    }
//
//    // 정렬된 배열 출력
//    for (i = 0; i < 10; i++) {
//        printf("%d ", a[i]);
//    }
//
// 
//}

//2번째 문제
//문제 석차구하기
// 10명의 학생에 대한 중간고사 점수의 석차를 구하는



//int main(){
//    int a[10]={};
//    int rank[10]={1,1,1,1,1,1,1,1,1,1};
//    
//    int i=0;
//    int j=0;
//    for(int i=0;i<10;i++){
//        printf("점수를 적으세요: ");
//        scanf("%d",&a[i]);
//    }
//    
//    
//    
//    for(int i=0;i<10;i++){
//        for(j=0;j<10;j++){
//            if(a[i]<a[j]){
//                rank[i]=rank[i]+1;
//                    
//                    
//                }
//                
//            }
//        }
//        
//    for(int i=0;i<10;i++){
//        printf("%d ",rank[i]);
//        
//    }
//        
//    }
//    
    


//int main(){
//    int a[10];
//    int rank[10]={1,1,1,1,1,1,1,1,1,1};
//    
//    int i=0;
//    int j=0;
//    int k=0;
//    do{
//        printf("시험 점수를 입력하세요: ");
//        scanf("%d",&a[i]);
//        
//        ++i;
//    }while(i!=10);{}
//    
//    i=0;
//    do{
//        j=0;
//        do{
//            if(a[i]<a[j]){
//                rank[i]=rank[i]+1;
//                
//            }
//            ++j;
//        }while(j!=10);{}
//        ++i;
//    }while(i!=10);{}
//    
//    
//    
//    for(int k=0;k<10;k++){
//        printf(" %d ",rank[k]);
//    }
//}
    

//10명의 이름,국어,영어,수학 을 입력받아 총점 및 석차를 구하는 문제


//int main(){
//
//    char name=[]={};
//
//    
//}

//문제 4번째 문제



//int main(){
//    int a[5][5]={};
//    for(int i=0;i<5;i++){
//        for(int j=0;j<5;j++){
//            
//            scanf("%d",&a[i][j]);
//            
//        }
//        
//    }
//    
//    
//    for (int i = 0; i < 5; i++)    // 2차원 배열의 세로 크기만큼 반복
//    {
//        for (int j = 0; j < 5; j++)    // 2차원 배열의 가로 크기만큼 반복
//        {
//            printf("%2d ", a[i][j]); // 2차원 배열의 인덱스에 반복문의 변수 i, j를 지정
//        }
//        printf("\n");                // 가로 요소를 출력한 뒤 다음 줄로 넘어감
//    }
//    
//    
//    
//}



//문제 5.
//int main(){
//    int a[5][5]={};
//    for(int i=0;i<5;i++){
//        for(int j=0;j<=i;j++){
//            
//            scanf("%d",&a[i][j]);
//            
//        }
//        
//    }
//    
//     for (int i = 0; i < 5; i++)    // 2차원 배열의 세로 크기만큼 반복
//     {
//         for (int j = 0; j <=i; j++)    // 2차원 배열의 가로 크기만큼 반복
//         {
//             
//             printf("%2d ", a[i][j]); // 2차원 배열의 인덱스에 반복문의 변수 i, j를 지정
//         }
//         printf("\n");                // 가로 요소를 출력한 뒤 다음 줄로 넘어감
//     }
//    
//}






//7번 문제

//
//int main(){
//    int i=0;
//    int j=0;
//    int a[6][6];
//    int cnt =1;
//    
//    
//    for(i=0;i<5;i++){
//        
//        for(j=i;j>=0;j--){
//            a[i][j]=cnt;
//            ++cnt;
//        }
//        
//    }
//    
//         for (int i = 0; i < 5; i++)
//         {
//             for (int j = 0; j <=i; j++)
//             {
//    
//                 printf("%2d ", a[i][j]);
//             }
//             printf("\n");
//         }
//    
//    }
    
    
//8번 문제

// 번호 국어 ,영어,슈헉,합계,평균,석차 를 구하는 프로그램

//int main() {
//    int num[3] = {1, 2, 3};   // 번호
//    int kor[3] = {80, 60, 90}; // 국어
//    int eng[3] = {70, 80, 60}; // 영어
//    int mat[3] = {50, 80, 60}; // 수학
//    int sum[3] = {0, 0, 0};    // 합계
//    float ave[3] = {0, 0, 0};  // 평균 (부동 소수점으로 변경)
//    int sp[3] = {1, 1, 1};     // 석차
//    
//    for (int i = 0; i < 3; i++) {
//        sum[i] = kor[i] + eng[i] + mat[i];
//        ave[i] = (float)(sum[i]) / 3;  // 정확한 부동 소수점 평균 계산.
//    }
//    
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            if (ave[i] < ave[j]) {
//                sp[i] = sp[i] + 1;
//            }
//        }
//    }
//    // 출력
//    printf("번호\t국어\t영어\t수학\t합계\t평균\t   석차\n");
//    for (int k = 0; k < 3; k++) {
//        printf("%d\t%d\t%d\t%d\t%d\t%.2f\t%d\n", num[k], kor[k], eng[k], mat[k], sum[k], ave[k], sp[k]);
//    }
//    
//  
//
//}



//2023_11_20 문제. 1
   


//int main() {
//    int a[5][5] = { 0 };
//
//    int num = 1;
//    int s = 2;
//    int e = 2;
//    for (int i = 0; i < 5; i++) {
//        for (int j = s; j <= e; j++) {
//            a[i][j] = num;
//            num++;
//        }
//        if (i < 2) {
//            s = s - 1;
//            e = e + 1;
//        }
//        else {
//            s = s + 1;
//            e = e - 1;
//        }
//    }
//
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            if (a[i][j] != 0) {
//                printf("%3d", a[i][j]);
//            } else {
//                printf("   "); // 빈 공간은 3개의 공백으로 출력
//            }
//        }
//        printf("\n");
//    }
//
//
//}


//문제 2


//int main(){
//    int a[5][5];
//    int k=1,i,j,s;
//    
//    for(i=0;i<5;i++){
//        for(j=0;j<5;j++){
//            if(i % 2==0){
//                s=j;
////               s=4-j;
//            }else{
//                s=4-j;
////                s=j;
//            }
//            a[i][s]=k;
//            k=k+1;
//        }
//    }
//    for(i=0;i<5;i++){
//        for(j=0;j<5;j++){
//            printf("%3d",a[i][j]);
//            
//        }
//        printf("\n");
//        
//    }
//    
//    
//}



//문제 3



//int main() {
//    int A[5][5] = { 0 };
//
//    int k = 0;
//    int s = 0;
//    int e = 4;
//    int F = 1;
//
//    for (int i = 0; i < 5; i++) {
//        for (int j = s; j <= e; j++) {
//            k = k + 1;
//            A[i][j] = k;
//        }
//
//        if (i == 2) {
//            F = F * -1;
//        }
//        s = s + F;
//        e = e - F;
//    }
//
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            if (A[i][j] != 0) {
//                printf("%3d", A[i][j]);
//            }
//            else {
//                printf("   ");
//            }
//         }
//        printf("\n");
//    }
//}

// 문자열 입력받기

//int main(){
//    char name[10];
//    char dep[10];
//    
//    scanf("%s",dep);
//    scanf("%s",name);
//    printf("%s",dep);
//    printf("학과 ");
//    printf("%s",name);
//    
//    
//}

////뮨자열 입력받은 학과와 이름의 길이를 출력
//
//#include <string.h>
//int main() {
//    char name[10];
//    char dep[10];
//    
//    printf("학과 입력: ");
//    scanf("%9s", dep);
//
//    printf("이름 입력: ");
//    scanf("%9s", name);
//
//    printf("%s 학과 %s\n", dep, name);
//    printf("이름의 길이: %lu\n", strlen(name));
//
//
//}

//변수형(문자열)문제 홀수가(odd)가 입력 되면 1~10중 홀수를 짝수(even)가 입력되면 1~10중 짝수를 출력
//#include <String.h>
//
//int main(){
//    int i;
//    int temp;
//  char str[10];
//    printf("odd(홀수), even(짝수)중 하나를 입력하세요: ");
//    scanf("%s",str);
//    
//    if(strcmp(str,"odd")==0){
//        temp=1;
//    }else if(strcmp(str,"even")==0 ){
//        temp=0;
//        
//    }else{
//        printf("잘못 입력하셨습니다.");
//        temp=3;
//    }
//    for(i=1;i<=10;i++){
//        if(i%2==temp){
//            printf("%d ",i);
//        }
//    }
//    
//}
//맥북은 한글입력시 ㅎㅗㄹㅅㅜ 이렇게 입력되어서 영어로 변경




//2023 11 27 문제




//int main() {
//    // 7x7 크기의 배열 선언 및 초기화
//    int a[7][7] = {0};
//    
//    // 중앙 행의 인덱스를 계산
//    int c = (7 / 2) + 1;
//    
//    // 배열에 할당될 값 및 열의 개수 초기화
//    int k = 0;
//    int e = 0;
//
//    // 행을 순회하는 외부 루프
//    for (int i = 0; i < 7; i++) {
//        // 중앙 행보다 위에 있는 경우
//        if (i < c) {
//            // 할당할 열의 개수 계산
//            e = 7 - i;
//        } else { // 중앙 행 이후인 경우
//            // 할당할 열의 개수 계산
//            e = i + 1;
//        }
//
//        // 현재 행에 값을 할당하는 내부 루프
//        for (int j = 0; j < e; j++) {
//            // 값 증가 및 배열에 할당
//            k = k + 1;
//            a[i][j] = k;
//        }
//    }
//
//    // 배열 출력
//    for (int i = 0; i < 7; i++) {
//        for (int j = 0; j < 7; j++) {
//            // 배열의 각 요소 출력
//            if (a[i][j] != 0) {
//                printf("%3d", a[i][j]);
//            } else {
//                // 값이 0인 경우 공백 출력
//                printf("   ");
//            }
//        }
//        // 한 행이 끝날 때마다 줄 바꿈
//        printf("\n");
//    }
//
//
//}




//int main() {
//   int a[9][9] = { 0 };
//   int k, c, e;
//
//   k = 0;
//   c = (7 / 2) + 1;
//
//   for (int i = 1; i <= 8; i++) {
//      if (i < c) {
//         e = 8 - i;
//      }
//      else {
//         e = i;
//      }
//      for (int j = 1; j <= e; j++) {
//         k = k + 1;
//         a[i][j] = k;
//      }
//   }
//
//    for (int i = 1; i < 8; i++) {
//           for (int j = 1; j < 8; j++) {
//               // 배열의 각 요소 출력
//               if (a[i][j] != 0) {
//                   printf("%3d", a[i][j]);
//               } else {
//                   // 값이 0인 경우 공백 출력
//                   printf("   ");
//               }
//           }
//           // 한 행이 끝날 때마다 줄 바꿈
//           printf("\n");
//       }
//   
//       
//}




// 문제 2
//
//int main() {
//    int a[9][9] = { 0 };
//    int t=0;
//    int q=0;
//    int  c = (9 / 2) + 1;
//    int e=0;
//    for (int t = 0; t < 9; t++) {
//        if (t < c) {
//            e = 9- t;
//        }
//        else {
//            e = t+1;
//        }
//        for (int j = 0; j < e; j++) {
//            q = q + 1;
//            a[j][t] = q;
//        }
//    }
//    
//    for (int t = 0; t < 9; t++) {
//        for (int j = 0; j < 9; j++) {
//            // 배열의 각 요소 출력
//            if (a[t][j] != 0) {
//                printf("%3d", a[t][j]);
//            } else {
//                // 값이 0인 경우 공백 출력
//                printf("   ");
//            }
//        }
//        // 한 행이 끝날 때마다 줄 바꿈
//        printf("\n");
//    }
//
//
//}




// 3번 문제



//#define MAX 7
//
//int main() {
//
//    int arry[MAX][MAX] = {0};
//    int center = 0, flag = 1;
//    int cnt = 1;
//    for (int i = 0; i < MAX; i++)
//    {
//        if (i >= ((MAX / 2) + 1))
//        {
//            if (flag == 0)
//            {
//                center += 2;
//            }
//            else
//            {
//                flag = 0;
//                center = 1;
//            }
//        }
//        for (int j = 0; j < MAX - center ; j++)
//        {
//            if (j < (MAX - center)/2)
//            {
//                arry[i][j] = cnt;
//            }
//            else {
//                    arry[i][j + center] = cnt;
//            }
//            cnt++;
//        }
//    }
//
//    for (int i = 0; i < MAX; i++)
//    {
//        for (int j = 0; j < MAX; j++)
//        {
//            printf("%4d", arry[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#define size 7
//
//int main() {
//    int a[size + 1][size + 1] = {0};  // 2차원 배열 선언 및 초기화
//    int f, i, j, n = 1;  // 변수 선언 및 초기화
//    int end = size + 2;  // 특정 조건을 검사하기 위한 변수
//    int step = 0;  // 조건에 따라 j값을 업데이트하기 위한 변수
//
//    f = (int)(size / 2) + 2;  // 패턴을 생성하는데 사용되는 변수 초기화
//
//    // 상단부 패턴 값 할당
//    for (i = 1; i < f; i++) {
//        for (j = 1; j <= size; j++) {
//            a[i][j] = n;  // 배열에 값을 할당하고 증가
//            n++;
//        }
//    }
//
//    // 하단부 패턴 값 할당
//    for (i = f; i <= size; i++) {
//        for (j = 1; j <= size; j++) {
//            if ((i + j) == end) {
//                j = j + step;  // 특정 조건에 따라 j값을 업데이트
//                step = step + 2;  // 업데이트 된 j값에 따라 step을 증가
//            } else {
//                a[i][j] = n;  // 배열에 값을 할당하고 증가
//                n++;
//            }
//        }
//    }
//
//    // 배열 출력
//    for (i = 1; i <= size; i++) {
//        for (j = 1; j <= size; j++) {
//            if (a[i][j] != 0) {
//                printf("%3d", a[i][j]);  // 값이 0이 아닌 경우에는 값 출력
//            } else {
//                printf("   ");  // 값이 0인 경우 공백 출력
//            }
//        }
//        // 한 행이 끝날 때마다 줄 바꿈
//        printf("\n");
//    }
//
//    return 0;
//}





 // 난수  rand()    0~32767 사이 난수 발생
//#define _CRT_SECURE_NO_WARNING
//#include <time.h>
//#include <stdlib.h>
//
//int main() {
//    int val;
//    srand(time(NULL));
//    
//    for (int i = 0; i < 10; i++) {
//        val = rand();
//        printf("%d\n", val);
//    }
//
//    return 0;
//}






//   12월 04일

//.  함수


//제곱미터를 평으로 반환하는 프로그램




//float sq(int sm);//{
//    float sq;
//    sq = sm*3.305785;
//    return sq;
//}



//int main(){
//    
//    
//    int sm;
//    float s;
//    printf("제곱미터 를 작성하시오: ");
//    scanf("%d",&sm);
//
//    s=sq(sm);
//    printf("평수 :%f",s);
//    
//    
//}
//float sq(int sm){
//    float sq;
//    sq = sm/3.305785;
//    return sq;
//}




//문제 섭씨 온도 를 화씨 온도로 변환

// (9/5 * C+ 32 )

//void hop(double c){
//    double f = (9.0 / 5.0) * c + 32.0;
//    
//    printf("화씨: %f",f);
//    
//    
//    
//}
//int main(){
//    double c;
//    printf("섭씨 온도를 입력하세요: ");
//    scanf("%lf",&c);
//    hop(c);
//    
//}
//


//함수 매개변수 포인터 사용


// 두 변수값을 서로 바꾸는 swap()함수 작성


//void  swap(int *a,int *b);//{
//    
//    
//    //    int temp=*a;
//    //    *a= *b;
//    //    *b=temp;
////}
//
//
//int main(){
//    int a=5;
//    int b=10;
//    swap(&a,&b);
//    
//    printf("%d,%d " ,a,b);
//    
//    
//   
    
    
//
//}
//void  swap(int *a,int *b){
//    
//        int temp=*a;
//        *a= *b;
//        *b=temp;
//}





//함수 parameter 1 차원 배열
 // 평균 합계 구하기



//void sumAndAverage(float *b, int size) {
//    float l[size];  // 배열 크기를 size로 설정
//    float sum = 0;
//    float avg = 0;
//
//    // 배열 초기화
//    for (int i = 0; i < size; i++) {
//        l[i] = b[i];
//    }
//
//    for (int i = 0; i < size; i++) {
//        sum += l[i];
//    }
//    avg = sum / size;
//    printf(" 합계: %f, 평균: %f", sum, avg);
//}
//
//int main() {
//    // 배열의 크기를 미리 지정
//    int size;
//    printf("배열의 크기를 입력하세요: ");
//    scanf("%d", &size);
//
//    float a[size];
//
//    printf("배열의 요소를 입력하세요:");
//    for (int i = 0; i < size; i++) {
//        scanf("%f", &a[i]);
//    }
//
//    sumAndAverage(a, size);
//
//    return 0;
//}


// 2차원 배열


//
//void hop(int(*l)[2]);
//void hop1(int(*l)[2]);
//int main(){
//    
//    int l[5][2] ={1,2,3,4,5,6,7,8,9,10};
//    hop(l);
//    hop1(l);
//}
//
//void hop(int(*b)[2]){
//    int a[5][2];
//    int i,j;
//    for(i=0;i<=4;i++)
//        for(j=0;j<=1;j++){
//            a[i][j] = b[i][j]*2;
//            printf("%d \n",a[i][j]);
//        }
//    
//}
//
//void hop1(int a[][2]) {
//    int i, j;
//    for (i = 0; i <= 4; i++)
//        for (j = 0; j <= 1; j++) {
//            printf("%d \n", a[i][j]);
//        }
//}




// 난수를 활용하여 가위,바위,보 게임을 만들기
// 입력  1 가위 2 바위 3 보.


//#include <stdlib.h>
//void game(int user_pick){
//    int computer_pick =rand()%4;
//
//    if(user_pick==1&&computer_pick==3){
//        printf("유저픽: 가위 \n 컴퓨터픽: 보.\n 유저 승");
//        
//    }else if (user_pick==1&&computer_pick==2){
//        printf("유저픽: 가위 \n 컴퓨터픽: 바위.\n 유저 패");
//        
//    }else if (user_pick==2&&computer_pick==1){
//        printf("유저픽: 바위 \n 컴퓨터픽: 가위.\n 유저 승");
//    }else if (user_pick==2&&computer_pick==3){
//        printf("유저픽: 바위 \n 컴퓨터픽: 보.\n 유저 패");
//    }else if (user_pick==3&&computer_pick==1){
//        printf("유저픽: 보 \n 컴퓨터픽: 가위.\n 유저 패");
//    }else if (user_pick==3&&computer_pick==2){
//        printf("유저픽: 보 \n 컴퓨터픽: 바위.\n 유저 승");
//    }
//}
//    
//    int main(){
//        int user_pick;
//        printf(" 가위 바위 보 게임 무엇을 낼것입니까? 가위:1 바위:2 보:3    \n");
//        scanf("%d",&user_pick);
//        game(user_pick);
//        
//        
//    }


// 난수 문제 2 난수를 활용하여 숫자 맞추기 게임

/*
컴퓨터가 난수발생 1~100
 사용자로 부터 추측값 받기
 사용자 입력>컴퓨터 값 이면 "값이 큽니다."
 사용자 입력<컴퓨터 값 이면 "값이 작습니다."
 일치하면 "정답입니다." 와 함께 시도 횟수 출력
 */

//#include <stdlib.h>
//void game(){
//    int user_pick;
//    printf("숫자를 입력하세요: ");
//    scanf("%d",&user_pick);
//    int count =0;
 // int random=rand()%101;
//
//    while (user_pick!=random) {
//        
//        
//        if(user_pick>random){
//            ++count;
//            printf("너무 커요\n");
//            
//        }else if (user_pick<random){
//            ++count;
//            printf(" 너무 작아요\n");
//
//        }
//        printf("숫자를 다시 입력하세요: ");
//        scanf("%d",&user_pick);
//        
//    }
//    ++count;
//    printf("맞췃습니다!  시도 횟수: %d ",count);
//}
//    
//    int main(){
//        
//        game();
//    }
//




// 시험 공부

//1 번문제 수열 1+2+4+7+11+16+22....20번 항까지의 합계 구하는 순서도 ,코드


//int main(){
//    
//    int sum=0;
//    int a=1;
//    int b=0;
//    
//    do{
//        a+=b;
//        ++b;
//        sum+=a;
//    }while(b<20);{}
//    
//    printf("%d",sum);
//}


//2번문제

//1+3+6+10+15+21......10번항 까지 합계 구하는 순서도



//int main(){
//    int sum=0;
//    int a=1;
//    int b=2;
//    
//    do{
//        sum+=a;
//        a=a+b;
//        b=b+1;
//    }while(b-2<10);{}
//    printf("%d",sum);
//    
//}



// 3번 문제

// 임의의. 정수 A를 입력받아 소수를 출력하는 순서도

//int main(){
//    int a;
//    int b=1;
//    
//    scanf("%d",&a);
//    
//    do{
//        ++b;
//    }while(a%b!=0);{}
//    if(a==b){
//        printf("소수 입니다.");
//    }else{
//        printf("소수가 아닙니다.");
//    }
//    
//}


//4번문제

// 1-2+3-4+5-6......+99-100

 
 

// 1. sum=sum+a;

// 2. sw=1;

// 3. sum-=a;

// 4. sw=0;




//int main(){
//    
//    
//    int a=0;
//    int sum=0;
//    int sw=0;
//    
//    
//    
//    do{
//        ++a;
//        if(sw==0){
//            sum+=a;
//            sw=1;
//            
//        }else if(sw==1){
//            sum-=a;
//            sw=0;
//        }
//        
//    }while(a<100);{}
//    printf("%d",sum);
//}




//5번 문제

 
 

//1!+2!+3!+4!+5!.........+10! 를 구하라

 
//int main(){
//    
//    int sum=0;
//    int a=1;
//    int b=0;
//    int c=0;
//    
//    
//        
//    while(c<10){
//        ++c;
//        a=1;
//        b=0;
//        while (b<c) {
//            b=b+1;
//            a=a*b;
//        }
//        sum+=a;
//    }
//    printf("%d",sum);
//}



//int main(){
//    int a;
//    int b;
//    int c=0;
//    int remainder=0;
//    int GCD;
//    int LCM;
//    
//    scanf("%d",&a);
//    scanf("%d",&b);
//    c=a*b;
//    
//    if(a<b){
//        GCD=a;
//        a=b;
//        b=GCD;
//    }
//    remainder=a%b;
//    
//    while (remainder!=0) {
//        a=b;
//        b=remainder;
//        remainder=a%b;
//        
//    }
//    GCD=b;
//    LCM=c/GCD;
//    
//    printf("%d,%d",GCD,LCM);
//
//    
//    
//}


// 10진수를 입력받아 2진수로 변환하기 단 1000이하의 숫자만 입력받기


//int main(){
//    int a[10]={};
//    int b;
//    int OB;
//    int c=0;
//    int quotient =1;
//    int remainder =0;
//    scanf("%d",&b);
//     OB=b;
//    
//    
//    while (quotient!=0) {
//        c=c+1;
//        quotient=b/2;
//        remainder = b%2;
//        a[c]=remainder;
//        b=quotient;
//    }
//    printf("10진수:%d 를 2진수로 변환 \n",OB);
//    for(int i=c;i>0;i--){
//        printf("%d",a[i]);
//    }
//    
//    
//}



//10개의 숫자를 입력 받아 배열에 저장후 최대값 최소값 구하는 문제


//int main(){
//    int a[10];
//    int i=0;
//    int max=0;
//    int min =0;
//    
//    for(int i=0;i<10;i++){
//        scanf("%d",&a[i]);
//    }
//    max=a[0];
//    min=a[0];
//    for(int i=0;i<10;i++){
//        if(max<a[i]){
//            max=a[i];
//            
//        }
//        if(min>a[i]){
//            min=a[i];
//        }
//    }
//    printf("max:%d min:%d",max,min);
//    
//}



//int main() {
//    int a[10];
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    int avg = 0;
//    int f = 0;
//
//    while (b < 10) {
//        scanf("%d", &a[b]);
//        b = b + 1;
//    }
//
//    c = a[0];
//    d = a[0];
//    e = a[0]; // 여기를 수정
//    f = 1;    // 여기를 수정
//
//    while (f < 10) {
//        e = e + a[f];
//
//        if (a[f] < c) {
//            c = a[f];
//        } else if (a[f] > d) {
//            d = a[f];
//        }
//
//        f = f + 1;
//    }
//
//    e = e - (c + d);
//    avg = e / 8;
//    printf("%d", avg);
//}

//30 20 50 40 70 60 100 40 70 90  => 56




//문제 10개의 양의 정수를 입력받아 배열에 저장한 후  저장된 자료 중 7에 가까운 자료를 찾는 문제


//int main(){
//    int a[10];
//    int b=0;
//    int i=0;
//    int dif=0; //두수의 차
//    int dif_s = __INT_MAX__; //두수의 차이중 가장 작은값
//    int sum=0;
//    
//    for(int i=0;i<10;i++){
//        scanf("%d",&a[i]);
//    }
//    i=0;
//    while(i<10){
//        dif=a[i]-7;
//        if(dif<0){
//            dif*=-1;
//        }
//        
//        if(dif_s>dif){
//            dif_s=dif;
//            b=a[i];
//        }
//        ++i;
//    }
//    printf("%d",b);
//}




// 선택 정렬 문제

//int main(){
//    int a[10];
//    int i=0;
//    int j=0;
//    int temp=0;
//    
//    for(int i=0;i<10;i++){
//        scanf("%d",&a[i]);
//        
//    }
//    i=0;
//    while(i<9){
//        j=i+1;
//        while (j<10) {
//            if(a[i]>a[j]){
//                temp=a[i];  //선택은 작은값이 임시변수
//                a[i]=a[j];
//                a[j]=temp;
//                
//            }
//            ++j;
//        }
//        ++i;
//    }
//    
//    for(int i=0;i<10;i++){
//        printf("%d",a[i]);
//        
//    }
//    
//}

// 버블 정렬

//int main(){
//    int a[10];
//    int i=0;
//    int j=0;
//    int temp=0;
//    
//    for(int i=0;i<10;i++){
//        scanf("%d",&a[i]);
//    }
//    i=0;
//    while(i<10){
//        j=i;
//        while(j<10){
//            if(a[j]>a[j+1]){
//                temp=a[j]; //버블은 높은값이 임비변수
//                a[j]=a[j+1];
//                a[j+1]=temp;
//            }
//            ++j;
//        }
//        ++i;
//    }
//    for(int i=0;i<10;i++){
//        printf("%d",a[i]);
//    }
//}


 //삽입 정렬



//int main() {
//    int a[10];
//    int i = 0;
//    int j = 0;
//    int h = 1;
//    int key = 0;
//
//  
//    for(int i=0;i<10;i++){
//        scanf("%d",&a[i]);
//    }
//    
//    
//    while (h<10) {
//        key=a[h];
//        j=h-1;
//        while (j>=0) {
//            if(key<a[j]){
//                a[j+1]=a[j];
//                --j;
//            }else{
//                break;
//            }
//        }
//        a[j+1]=key;
//        ++h;
//    }
//    
//    
//    for(int i=0;i<10;i++){
//        printf("%d ",a[i]);
//    }
//}





