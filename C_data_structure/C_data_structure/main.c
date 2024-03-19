//int calc_sum(int n){
//    int i,sum=0;
//    for(i=1;i<n;i++){
//        sum+=i;
//        
//    }
//    
//    
//    
//    return sum;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//    clock_t start,finish;
//    double duration;
//    
//    printf("1부터 10까지의 합은 %d입니다.\n",calc_sum(10));
//    start =clock(); //시작 시각 저장
//    calc_sum(100000000);
//    finish = clock(); // 종료시간 저장
//    
//    
//    
//    duration = (double)(finish - start)/CLOCKS_PER_SEC;
//    printf("1부터 1억까지의 합을 구하는데 걸리는 시간 :%f 초 \n",duration);
//    
    

//문자열 테스트
//
//#include <stdio.h>
//#include <string.h>
//
//
//
//int main(){
//    char s1[16] ="hello world";
//    char s2[16] = {'h','e','l','l','o',' ','w','o','r','l','d','\n'};
//    char s3[]="hello wordl";
//    char s4[] ={'h','e','l','l','o',' ','w','o','r','l','d','\n'};
//    char s5[20];
//    
//    
//    
//    // s5=s1; 오류
//    strcpy(s5,s1); //맥북 컴파일러는 strcpy_s 함수를 사용할수 없으며 strcpy_s(s5,20,s1); 이렇게 배열의 크기를 같이 정해준다.
//    printf("s1: %s\n",s1);
//    printf("s2: %s\n",s2);
//    printf("s3: %s\n",s3);
//    printf("s4: %s\n",s4);
//    printf("s5: %s\n",s5);
//    printf("문자열의 s1의 길이 : %d\n",strlen(s1));
//    
//}






// 행렬울 2차원 배열로 표현하기


//#include <stdio.h>
//#define ROWS 3 //행의 크기
//#define COLS 3 //열의 크기
//
//
//
//
//
//void print_mat(int m[ROWS][COLS],char* str)
//{
//    printf("%s\n",str);
//    for(int i=0;i<ROWS;i++){
//        
//        for(int j=0;j<COLS;j++){
//            printf("%3d",m[i][j]);
//            
//        }
//        printf("\n");
//}
//}
//
//void transpose_mat(int m[ROWS][COLS]){
//    
//    for(int i=0;i<ROWS;i++){
//        for(int j= i+1; j<COLS; j++){
//            int temp = m[i][j];
//            m[i][j] = m[j][i];
//            m[j][i]=temp;
//            
//        }
//    }
//    
//}
//
//
//int main(){
//    int mat[ROWS][COLS] ={4,0,1,1,6,5,7,3,6};
//    print_mat(mat,"원래 행렬");
//    transpose_mat(mat);
//    print_mat(mat,"전치 행렬");
//    
//}
//



