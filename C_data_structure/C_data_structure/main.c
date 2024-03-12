int calc_sum(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        sum+=i;
        
    }
    
    
    
    return sum;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    clock_t start,finish;
    double duration;
    
    printf("1부터 10까지의 합은 %d입니다.\n",calc_sum(10));
    start =clock(); //시작 시각 저장
    calc_sum(100000000);
    finish = clock(); // 종료시간 저장
    
    
    
    duration = (double)(finish - start)/CLOCKS_PER_SEC;
    printf("1부터 1억까지의 합을 구하는데 걸리는 시간 :%f 초 \n",duration);
    
}
