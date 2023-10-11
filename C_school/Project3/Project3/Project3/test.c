//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//    int sum = 0;
//    int a = 1;
//    int sum1 = 0;
//    int b = 1;
//    int sum2 = 0;
//    int c = 1;
//
//    do {
//        sum += a;
//        a=a+1;
//    } while (a <= 100);
//
//    do {
//        if (b % 2 == 0) {
//            sum1 += b;
//        }
//        b=b+1;
//    } while (b <= 100);
//
//    do {
//        if (c % 3 == 0) {
//            sum2 += c;
//        }
//        c=c+1;
//    } while (c <= 100);
//
//    printf("1부터 100까지의 수를 더한 결과: %d\n", sum);
//    printf("1부터 100까지의 짝수를 더한 결과: %d\n", sum1);
//    printf("1부터 100까지의 홀수를 더한 결과: %d\n", sum2);
//
//    return 0;
//}

//void main() {
//	//1번문제 
//	int sum = 0;
//	int a = 1;
//	int b = 2;
//
//
//	do {
//		sum = sum + a;
//		a = a + b;
//		b = b + 1;
//	} while (b - 2 < 10);
//	{
//
//	}
//
//	printf("총 합: %d", sum);
//}
//
//
//
//
//
//
//
//void main() {
//	// 2번 i 없는 문제
//	int sum = 0;
//	int a = 1;
//	int b = 1;
//
//
//	do {	
//		sum = sum + a;
//		a = a + b;
//		b = b + 2;
//		
//	}
//	while (b/2<10);
//	{
//		
//	}
//
//
//	printf("총 합 : %d " ,sum);
//	
//}
//
//void main() {
//	// 2번 i 있는 문제
//	int sum = 0;
//	int a = 1;
//	int b = 1;
//	int i = 0;
//
//
//	do {
//		sum = sum + a;
//		a = a + b;
//		b = b + 2;
//		i = i + 1;
//	} while (i < 10);
//	{
//
//	}
//
//
//	printf("총 합 : %d ", sum);
//
//}

//void main() {
//	//4번문제 if문 없이 하는거 
//	int sum = 0;
//	int a = 1;//홀수
//	int b = 2;//짝수 
//
//
//	do {
//		
//			sum += a - b;
//			a = a + 2;
//			b = b + 2;
//	
//		
//	} while (a <= 99);
//	{
//
//	}
//	printf("총 합 : %d ", sum);
//}


//
//void main() {
//	// if 문을 쓴 4번문제 
//	int sum = 0;
//	int a = 1;
//
//
//	do {
//		if (a % 2 == 0) {
//			sum = sum-a;
//			a = a + 1;
//
//		}
//		else {
//			sum = sum+a;
//			a = a+1;
//		}
//
//	} while (a <=100);{}
//	printf("총 합 : %d " ,sum);
//
//}




//----------------------------------------------

// 1번째 문제
//void main() {
//	int sum = 1;
//	int a = 0;
//	int sw = 1;
//
//	do {
//		a = a + 1;
//		if (a % 2 == 0) {
//			sum = sum *a; //짝수일때  음수
//
//		}
//		else{ 
//			sum = sum *(a*-sw); //홀수 일때 양수 
//
//		}
//
//	} while (a <10); {
//
//	}
//
//	printf("총합 : %d", sum);
//
//}
//


//2번 문제 
//void main() {
//	int sum = 0;
//	int a = 1;
//	int SW = -1;
//	int b = 0;
//
//	do {
//		a = a + b;  //-1
//		sum = sum + (a*SW);
//		SW = SW * -1;
//		b = b+1;
//	
//	} while (b < 20); {
//	
//	}
//	printf(" 총합 : %d", sum);
//}




//2번 문제
//void main() {
//	int sum = 0;
//	int a = 1;
//	int SW = -1;
//	int b = 0;
//
//	do {
//		a = a + b;
//		b = b + 1;
//		sum = sum + (a * SW);
//		SW = SW * -1;
//
//
//	} while (b < 20); {
//
//	}
//	printf(" 총합 : %d", sum);
//}





//3번 문제
//void main() {
//	int sum = 0;
//	int a = 77;
//	int b = 1;
//	do {
//		sum = sum+(a *b);
//		a = a-1;
//		b = b+1;
//	} 
//	while (b<=77); {
//	
//	}
//	printf("총합 %d",sum);
//}



//4번 문제 

//1!+2!+3!+4!+5!+.....+10!


//void main() {
//	int sum = 0;
//	int a = 1;
//
//
//
//		
//	for (int i = 1; i <= 10; ++i) {
//			a *=i;
//			sum = sum+a;
//
//		}
//		
//	
//	printf("결과 값: %d", sum);
//
//
//}


//(1*1)+(2*1)+(3*2*1)+(4*3*2*1)+(5*4*3*2*1)
// 
// 맨 앞은 i 그 뒤는 모두 a 값이다  a *=1 를 넣어서 활용하자. 
// 예를 들어    5! 는  (i=5 *a=(4*3*2*1))다 이걸 활용해서 코드를 줄여봤다. 

//결과값이 4037913





//5 문제 


//void main() {
//    int sum = 2;
//    int a = 1; //현제 값 
//    int b = 1; //이전값 
//    int c = 0; //더해서 sum에 넣을 임시값
//    int cnt = 3;
//
//    do {
//        c = a + b;
//        sum = sum + c;
//        b = a; // 이전 값 a를 b값에 저장
//        a = c; // 이전 값 c를 a값에 저장
//        cnt = cnt + 1; 
//
//        //printf("c값: %d\n", c);
//    } while (cnt <= 20);
//
//    printf("총합의 값: %d\n", sum);
//
//}

//  17710 출력값









//==========  09 25==============================

//   1번문제   1/1+ 1/2+  1/3+ ........ 1/10

//void main() {
//	float a = 0; //앞에 값
//	float b = 1;  // 뒤 값 
//	double sum = 0;
//
//
//	do {
//	
//		a = 1/ b;
//		b = b + 1;
//		sum = sum + a;
//		
//
//
//	} while (b <= 10);
//	{
//		
//	}
//
//	printf("총합 :%f \n " ,sum);
//
//
//
//}

//출력 2.928968





//2번문제


// 1/2+2/3+3/4 +4/5+ .......99/100

//void main() {
//	int a = 1;
//	float sum = 0;
//
//	do {
//	
//		sum = sum + (float)a/((float)a+1);
//		a = a + 1;
//
//
//	
//	} while (a<= 99);
//	{
//
//	}
//
//	printf("%f:",sum);
//}

//94.812645


// 3번문제   임의의 정수를 입력받아 소수를 판별하는 코드

//void main() {
//	int f = 0; //0일때 소수 플래그 성  코드 
//	int a;
//	int b = 1;
//
//	printf("정수를 입력하세요:");
//	scanf_s("%d",&a);
//
//	do {
//
//		if (a % b == 0);
//		f = 1;
//		break;
//
//	} while (b < a - 1);
//	{
//
//	}
//
//
//	if (f == 0 || a == 2)
//		printf("소수");
//	else
//	{
//		printf("소수아님 ");
//	}
//	 
//	
//}


// 3번 코드 줄인거 

//void main() {
//	//int f = 0;
//	int a;
//	int b = 1;
//	printf("정수를 입력하세요: ");
//	scanf_s("%d", &a);
//
//	do {
//		b = b + 1;
//	} while (a % b != 0);
//	{
//		if (b == a) {
//			printf("소수");
//		}
//		else {
//			printf("소수아님");
//		}
//
//	}
//
//}


//4번 문제 임의의 정수를 입력받아 소수의 합을 구하는 코드



/*
 입력값을 10 적었다


 1 +3 +5 +7 
*/



//void main() {
//    int user_input; //유저 입력값
//    int sum = 0; //합값
//    printf("정수값을 입력하시오: ");
//    scanf_s("%d", &user_input);
//
//
//    for (int i = 2; i <= user_input; i++) {
//        int f = 1; //플래그 소수 판별   
//    
//        for (int j = 2; j < i; j++) { //   /2를 안하면 무한루프 걸려서 걸었음
//            if (i % j == 0) {
//                f = 0; //소수가 아니다라는걸 의미
//                break;// 소수가 아니므로 2번째 반복문에서 탈출
//
//            }
//        }
//        if (f==1) {//소수인지 판별
//           sum=sum+i ; //소수일시 합값에 더하기
//        }
//    
//    }
//    printf(" 총합: %d  \n", sum);
//
//}





//-----------------------------------------------------------------------------------------


//1번 문제 두수를 입력받아 두수의 최대 공약수와 최소 공배수를 계산해서 출력하는 순서도 

/*
최대 공약수 

큰수를 작은수로 나누어 나머지가 0이면 그때의 작은 수가 최대 공약수 
나머지가 0이 아니면 그때의 작은 수를 큰 수로 하고 나머지를 작은수로 하여 나머지가 0이 될대까지 반복


최소 공배수
원래의 두수를 곱한 값을 최대공약수로 나눈값이 최소공배수


예)15,18
18/15 몫:1 나머지:3
작은수 15 =>  큰수  나머지 3 => 작은수

15/3 몫:5 나머지 :0
이때 나머지가 0이므로 작으수 3이 최대 공약수
최소공배수 :(18*5)/3

*/

//
//void main() {
//    int A, B, BIG, SMALL, quotient, remainder, GCD, LCM;
//
//    printf("두 수를 입력하세요: ");
//    scanf_s("%d %d", &A, &B);
//
//    if (A >= B) {
//        BIG = A;
//        SMALL = B;
//    }
//    else {
//        BIG = B;
//        SMALL = A;
//    }
//
//    do {
//        quotient = BIG / SMALL;
//        remainder = BIG % SMALL;
//        if (remainder != 0) {
//            BIG = SMALL;
//            SMALL = remainder;
//        }
//    } while (remainder != 0);
//
//    GCD = SMALL;
//    LCM = A * B / GCD;
//
//    printf("최대공약수: %d, 최소공배수: %d\n", GCD, LCM);
//
//
//}


//1번 문제 

//void main() {
//    int A, B[100], C = 0, D = 0, quotient = 0, i;
//
//    printf("정수를 입력하세요: ");
//    scanf_s("%d", &A);
//
//    do {
//        C = C + 1;
//        if (A % C == 0) {
//            quotient = C;
//            B[D] = quotient;
//            D = D + 1;
//        }
//    } while (C <= A);
//
//    for (i = 0; i < D; i++) {
//        printf("\n%d ", B[i]);
//    }
//
//}



//2번 정수를 입력받아 소인수분해하여 그 결과를 출력하는 문제


/*20을 소인수 분해하는 과정
1.20의 제곱근을 구하여 정수를 취한다. 4.47->4
2.20을 2로 나눈다. 나머지가 0이므로 2는 소인수. 2저장
3.몫인 10에 대해 다시 소인수 구함.10의 제곱근을 구하여 정수를 취한다. 3.16
2~3나누어 떨어지지않으면 10자체가 소인수
4. 10을 2로 나눈다. 나머지가 0이므로 2는 소인수.2저장
5.몫인 5에 대해서 다시 소인수 구함.5의 제곱근을 구하여 정수를 취한다. 2.23->2
6. 5를 2로 나눈다. 나머지가 0이 아니므로 다음수로 나눈다.
7. 다음수 3은 5의 제곱근 보다 크므로 더 이상 작업할 필요가 없고 5자체가 소인수 이다. 5를 저장
8 피제수와 마지막으로 구한 소인수가 같을때는 소인수 분해가 완료된것. 즉 피제수 5와 소인수 5가 같으므로 소인수 분해 종료
9 저장된 소인수 출력

ex
4＝2×2(22)
6＝2×3
8＝2×2×2(23)
9＝3×3(32)
10＝2×5
12＝2×2×3(22x3)
14＝2×7
15＝3×5
16＝2×2×2×2(24)
*/

//#include <math.h>
//void main() {
//    int A[100], B, C = 0, D = 1, E, quotient, i;
//
//    printf("정수를 입력하세요: ");
//    scanf_s("%d", &B);
//    quotient = B;
//
//    do {
//        B = quotient;
//        E = sqrt(B);
//        D = 1;
//
//        do {
//            D = D + 1;
//            if (D > E) {
//                D = B;
//                break;
//            }
//            quotient = B / D;
//        } while (B % D != 0);
//
//        C = C + 1;
//        A[C] = D;
//    } while (B != D);
//
//    printf("\n소인수분해 결과: ");
//    for (i = 1; i <= C; i++) {
//        printf("%d ", A[i]);
//    }
//}





//3번 문제 
#include <math.h>
void main() {
    int S[20], N, K = 0, C = 0, Y, quotient, i;

    printf("정수를 입력하세요: ");
    scanf_s("%d", &N);
    quotient = N;
    if (N < 2) {
        printf("입력한 정수가 2보다 작습니다. 프로그램을 종료합니다.\n");
        return;
    }
    do {
        N = quotient;
        Y = sqrt(N);
        K = 1;
        
        do {
            K = K + 1;
            if (K > Y) {
                K = N;
                break;
            }
            quotient = N / K;
        } while (N % K != 0);

        C = C + 1;
        S[C] = K;
    } while (N != K);

    printf("\n소인수분해 결과: ");
    for (i = 1; i <= C; i++) {
        printf("%d ", S[i]);
    }
    if (C == 1 && S[1] == N) {
        printf("\n입력한 정수는 소수입니다.\n");
    }
}