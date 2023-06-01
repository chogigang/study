// 입력값 받기

import 'dart:io';

/*
Dart는 입력값을 받을때는 무조건 문자열 스트링을 받아야 합니다. 그후 형변환을 하면서 자기가 원하는 타입으로 
자료형을 바꿔야 사용하실수 있습니다 
첫번쩨로는 외부 라이브러리를 불러와야 합니다. import 'dart:io';
변수 하나를 선언 해야 하며 그 변수는 null 값을 허용 해야합니다 null값을 허용하려면 자료형 뒤에 ? 를 붙여야합니다.
그리고 stdin.readLineSync(); 을 작성을 해야합니다.
그리고 자기가 원하는 자료형 타입으로 바꾸고 싶으면 변수를 하나 만들고 그안에  입력값을 대입연산자로 넣어줘야합니다.


*/
void main(){

print("값을 입력하세요");
String? input =stdin.readLineSync();

int b= int.parse(input!); // 받은 값을 형변환을 바꿔주는 메서드는 자료형.parse(변수명!)을 사용하면 됩니다.
print(b);




}
/* 
!는 Dart에서 Nullable 타입의 변수에 접근할 때 사용되는 "non-null 단정 연산자"입니다.

Dart에서 변수의 타입 뒤에 ?를 붙이면 해당 변수는 Nullable 타입이 됩니다.
Nullable 타입은 값이 할당되지 않았거나 null 값을 가질 수 있는 타입을 의미합니다.

예를 들어, String? input은 Nullable String 타입의 변수로, null 또는 String 값을 가질 수 있습니다.
만약 이 변수를 사용할 때 null 체크를 하지 않고 바로 사용하게 되면 컴파일러는 경고를 발생시킵니다.

하지만, String! input과 같이 !를 사용하여 변수를 선언할 경우,
해당 변수는 Nullable 타입이지만 컴파일러는 이 변수가 null 값을 가질 수 없다고 가정합니다.
따라서 null 체크를 생략하고 해당 변수를 사용할 수 있습니다.
그러나 만약 해당 변수가 실제로 null 값을 가지고 있다면, 런타임에서 NullPointerException이 발생하게 됩니다.

예를 들어, int b = int.parse(input!)에서 input!은 non-null 단정 연산자를 사용하여 input 변수가 null이 아님을 명시적으로 표시한 것입니다.
이렇게 표시함으로써 컴파일러는 input이 null 값을 가질 수 없다고 가정하고 int.parse() 함수를 호출합니다.
그러나 만약 input 변수가 실제로 null 값을 가지고 있다면, NullPointerException이 발생하게 됩니다.

따라서 !는 변수의 Nullable 타입을 non-null로 단정하는 역할을 합니다. 주의해서 사용해야 하며,
변수가 실제로 null 값을 가지지 않는지 확인하는 것이 중요합니다.

*/