//#include<stdio.h>
//
//main() {
//	int sum = 0;
//	int a = 1;
//	int sum1 = 0;
//	int b = 1;
//	int sum2 = 0;
//	int c = 1;
//	do {
//		sum = +a;
//		++a;
//	} while (sum <= 100); { }
//
//
//	//printf("%d 1부터 100가지의 수를 더하는 문제",sum);
//
//	do {
//		if (b % 2 == 0) {
//			sum1 = sum1 + b;
//			b = b + 1;
//		}
//
//	} while (b<= 100); {
//	//	printf("%d",sum1);
//	}
//	
//
//	do {
//		if (c % 3 == 0) {
//			sum2 = sum2 + c;
//			c = c + 1;
//		}
//
//	} while (c <= 100); {
//	//	printf("%d", sum2);
//	}
//
//	printf("%d 1부터 100가지의 수를 더하는 문제: ",sum);
//
//}






// #include <stdio.h>

// int main() {
//     int sum = 0;
//     int a = 1;
//     int sum1 = 0;
//     int b = 1;
//     int sum2 = 0;
//     int c = 1;

//     do {
//         sum += a;
//         a=a+1;
//     } while (a <= 100);

//     do {
//         if (b % 2 == 0) {
//             sum1 += b;
//         }
//         b=b+1;
//     } while (b <= 100);

//     do {
//         if (c % 3 == 0) {
//             sum2 += c;
//         }
//         c=c+1;
//     } while (c <= 100);

//     printf("1부터 100까지의 수를 더한 결과: %d\n", sum);
//     printf("1부터 100까지의 짝수를 더한 결과: %d\n", sum1);
//     printf("1부터 100까지의 3의 배수를 더한 결과: %d\n", sum2);

//     return 0;
// }

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
//


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

//----------------------------------------------

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



// int main(){
//     int a,b; //입력값
//     int c;//  임시변수
//     int remainder =0; //임시변수2
//     int LCM;//최대 공약수
//     int GCD;//최소 공배수
    
//     printf("정수입력: ");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     c=a*b;
//     if(a<b){
//         GCD=a; //작은값을 최대 공약수에 삽입 임시로 넣음
//         a=b; //큰값을 a
//         b=GCD; //작은값을 임시변수에 있던걸 넣어주기
//     }
//     remainder=a%b;
    
//     while(remainder!=0){
//         a=b; //작은값을 a
//         b=remainder; //b에다가 나눈 나머지 값
//         remainder=a%b;
//     }
//     GCD=b; //작은값에 GCD 입력
//     LCM=c/GCD; //LCM에   c나누기 GCD
    
    
//     printf("GCD : %d", GCD);
//     printf("LCM %d",LCM);
// }



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



