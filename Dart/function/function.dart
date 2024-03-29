// 함수

//[함수가 반환하는 데이터형] [함수이름]([파라미터 데이터형] [파라미터 변수명]){
    //함수 수행문
 //   return //반환할 값;

int sum(int n){
return n+10;

}
void str(){
print('안녕하세요');

}



void main(){

  print(sum(0));
  print(sum(14));
  str(); // 문자열 출력문들은 print(str()) 를 사용하면 에러가 나온다.

}



/*
함수는 기본적으로 main 함수 위에 작성을 해야 합니다. 
대부분의 프로그래밍 언어의 컴파일러,인터프리터 는 
위에서부터 하나하나 코드를 읽으면서 내려오는대
main 함수 밑에 함수를 작성하면 함수를 인식 못하고 프로그램이 실행이 됩니다.
그래서 대부분의 프로그래밍언어들은 main 함수 위에 함수를 선언하고 코드를 작성합니다

반환타입 함수명(매개변수) {
  // 함수의 동작과 로직
  // 반환값 (return) (반환타입과 일치해야 함)
}

반환타입 (return type): 함수가 반환하는 값의 데이터 타입을 나타냅니다. 반환값이 없는 경우 void를 사용합니다.
반환값이 있는 경우 해당 타입을 지정합니다.
매개변수 (parameters): 함수에 전달되는 값들을 나타냅니다. 필요에 따라 매개변수를 설정할 수 있으며,
여러 개의 매개변수를 사용할 수도 있습니다.
함수의 동작과 로직: 함수의 실행될 코드 블록을 나타냅니다.
함수가 수행할 작업과 연산 등을 정의합니다.
반환값 (return value): 함수의 실행 결과로 반환되는 값입니다. 
반환값이 있는 경우 return 키워드를 사용하여 값을 반환합니다.


*/

