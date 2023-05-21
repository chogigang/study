//상수  
void main(){

  const num1 =10;
  print(num1);


  final num2= 20;
  print(num2);
  // num1 =15; //에러
  // num2 = 25; //에러


}






/*
상수 즉 변하지 않는 값을 지정할때ㅏ는 final, const 둘중 하나를 선택 해서 선언 해야합니다.

const 는 일반적인 언어 c,python,js 등등 많이쓰고
final 은 java,c#등등 많이 씁니다.

둘의 차이점

final = 실행시점에 값을 결정 
const = 컴파일 타임에 값을 결정


final 변수는 값을 한번만 할당할 수 있도록 하여 프로그램의 안정성을 높일 수 있으며
const 는 컴파일 타임에 값을 계산하여 런타임 성능을 향상시킬 수 있습니다.

*/