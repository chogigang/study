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
//	//printf("%d 1���� 100������ ���� ���ϴ� ����",sum);
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
//	printf("%d 1���� 100������ ���� ���ϴ� ����: ",sum);
//
//}






#include <stdio.h>

int main() {
    int sum = 0;
    int a = 1;
    int sum1 = 0;
    int b = 1;
    int sum2 = 0;
    int c = 1;

    do {
        sum += a;
        a=a+1;
    } while (a <= 100);

    do {
        if (b % 2 == 0) {
            sum1 += b;
        }
        b=b+1;
    } while (b <= 100);

    do {
        if (c % 3 == 0) {
            sum2 += c;
        }
        c=c+1;
    } while (c <= 100);

    printf("1���� 100������ ���� ���� ���: %d\n", sum);
    printf("1���� 100������ ¦���� ���� ���: %d\n", sum1);
    printf("1���� 100������ 3�� ����� ���� ���: %d\n", sum2);

    return 0;
}