 //연산자 
import 'dart:ffi';

void main(){
  // 사칙연산
 print(1+1); //더하기 연산자
 print(2-1); //뺄샘 연산자
 print(2*2); // 곱샘 연산자
 print(2/2); //나눗셈 연산자
 print(2%2);  //나머지 연산자


// 대입 연산자
// a=1 ; a  = 는 대입한다는 의미 같다라는 의미는 == 이다
 int num1 =1; //변수 를 선언
 int num2 =1;

print(num1+num2); //변수를 선언후 연산자 가능

//증감 연산자  전위 연산자, 후임 연산자 가능하다

++num1; 
print(num1); //증감 연산자 후 증가한 변수 값출력

int seq =5;
print(seq);
seq +=5;  //5증가
print(seq);
seq =seq+5;// 위와 같은 증감 연산자이다.
print(seq);
seq -=1;// 빼기 
print(seq);
seq *=2;
print(seq);

//나머지는 다름 
num seq2 =15;

seq2 /=5;
print(seq2);
//기존에는 int 가 아닌 num으로 변수를 선언했습니다. 계산에서는 실수가 (double)가 될수 있으니 계산할 땐 num으로 변수를 선언하는게 좋다.
//이건 파이썬에서 넘어온것이다.

seq2%=2; //나머지 연산자.
print(seq2);



// //문자열 +연결 연산자 

String name1 = 'hello';
String name2 = 'world';

print(name1+name2); // 문자열에 더하기 연산자를 하면 문자열이 이어진다.



// //비교 연산자

int qq =1;
int ww =2;

print(qq>ww);//false
print(qq>=ww);//false
print(qq<=ww);//true
print(qq<ww);//true

// //논리 연산자
// boolea 에 앞글자인 bool 을 사용하며 true false 둘중 하나만 출력하는 논리 연산자이다.
// &&(and) , ||(or), !(not) 의 종류가 있다.


// // and 연산자  &&
// 두개의 값이 참일때 트루 하나라도 거짓이면 false 를 출력한다.

bool asd = true;
bool asd1= true;

print(asd&&asd1);//true


 // //or 연산자 ||
//두개의 값이 하나라도 참일경우 true를 출력

bool a = true;
bool b = false;

print(a || b); //true


// not 연산자 !

bool c = false;
print(!c); //true




// Dart의 비트 연산자 모음

//AND 연산자 
// 비트 AND(&): 두 개의 피연산자의 각 비트가 모두 1인 경우에만 해당 비트가 1이 됩니다.

int n =1;

int m =1;
int result = n & m;

// OR연산자
// 비트 OR 연산자(|) 두개 의피연산자 중 하나 이상의 비트가 1인경우 해당비트가 1이 됩니다.

int result1 = n | m;

//비트 XOR(^)연산자  (Exclusive OR 이클루시브 오알 )  
//
int result3 = n ^ m;

// 비트 연산자 NOT(~)
//피연산자의 각 비트를 반전시킵니다. 1은 0으로, 0은 1로 변환됩니다.
int result4 =~n;

//비트 이동 연산자 
//피연산자를 이동시켜 비트열을 변환 시킵니다.

//비트 왼쪽 시프트 
//피연산자를  왼쪽으로 지정된 수만큼   이동시킵니다. 오른쪽에는 0으로 채워집니다.
int result5 = n <<2; //왼쪽으로 2번 비트열 이동 이동하면서 오른쪽으로 0으로 비트열 채워짐

//비트 오른쪽 시프트
//비트를 오른쪽  피연산자의 비트를 오른쪽 으로 지정된 수만큼 이동시킵니다. 왼쪽에서는 부호비트(최상위 비트)가 채워집니다
int result6= m >>2; //오른쪽으로 2비트열 이동 양수는 0으로 채워지고 음수는 1으로 이동한만큼 비틍녈이 채워짐





}