import 'dart:ffi';

void main(){
String name = "엄준식";
int num1 = 2;
print("Hello World");
print("$name");
print('num의 값은$num1 입니다. 지금은 파이썬의 f프린트 같은 기능으로 작성했습니다.');
print('프린트문 안에서도 사칙 연산도 가능합니다 .${num1+2} 이렇게 가능합니다..');

}

/*
모든 앱에는 실행이 시작되는 최상위 main()함수가 필요합니다. 명시적으로값을
반환하지 않는 함수에는 void 반환 유형이 잇습니다. 콘솔에 텍스트를 표시하려면
최상위 print()함수를 사용할 수 있습니다.
파이썬의 f print 처럼 문자열 안에 $ 를 써서 문자열 사이에 변수를 출력할수 있습니다.
*/
