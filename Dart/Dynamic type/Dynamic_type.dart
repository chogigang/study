//다이나믹 타입

/*
Dynamic 타입은 타입 체크를 하지 않고 런타임에 객체의 타입을 결정합니다.
이를 사용하면 타입 안정성을 보장하지 않지만, 동적으로 객체의 타입을 변경하는 경우에 유용합니다.

Dynamic 타입을 사용하면 타입 안정성을 보장하지 않습니다.
이를 사용하면 타입 오류를 일으키는 코드를 작성할 수 있으므로, 신중하게 사용하는 것이 좋습니다.
  

또한,
Dynamic 타입을 사용하면 일부 라이브러리나 프레임워크에서 제공하는 타입 관련 기능을 사용할 수 없게 될 수 있습니다.

Dart의 Dynamic 타입은 타입 체크를 하지 않는 것으로,
동적으로 객체의 타입을 변경할 수 있는 유용한 기능이지만 이를 사용하려면 신중하게 고려해야 합니다.

*/
import 'dart:io';
void main(){
  
List<dynamic>/* 문자 ,숫자 */ a=[1,2,3,'hahahahahahhahahaha'];


 print("나이를 입력하세요");
  String? Stringage =stdin.readLineSync();
  dynamic b=int.parse(Stringage!); //여기서 String 이거나 double도 가능하다.


// dynamic b;
b;
print(b);



}