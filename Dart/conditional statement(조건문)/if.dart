// if문 
import 'dart:io';
void main(){

//값이 홀수일때 홀수를 출력 짝수일때 짝수를 입력
// int num =2;
// if(num%2 ==0){
// print("짝수입니다.");
// }else{
// print("홀수입니다.");

// }

// import 'dart:io';
// print("값을 입력하세요:");
//   String? Stringnum = stdin.readLineSync();
//   int num1 = int.parse(Stringnum!);
//  if(num1%2==0){
//   print("짝수입니다.");
// }else{
// print("홀수입니다.");
//  }

// import 'dart:io';

 print("나이를 입력하세요");
  String? Stringage =stdin.readLineSync();
  int age=int.parse(Stringage!);

  if(9>age){
    print("어린이 입니다.");
  }else if(20>age&&age>=10){
    print("10대 입니다.");
  }else if(30>age&&age>=20){
    print("20대 입니다.");
  }else if(40>age&&age>=30){
    print("30대입니다.");
  }else{
    print("설문조사 대상이 아닙니다.");
  }



}

//조건문 if문 입니다 참 혹은 거짓 으로 판명되며 참일때만 if문 밑에 단이 출력 거짓이면 else 혹은 else if 를 출력합니다

