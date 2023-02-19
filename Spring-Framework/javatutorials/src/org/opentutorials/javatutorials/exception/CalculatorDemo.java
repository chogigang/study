package org.opentutorials.javatutorials.exception;
//예외 :예외란 무엇인가.

/*class Calculator{
int left, right;
public void setOprands(int left, int right){
this.left = left;
this.right = right;
}
public void divide(){
System.out.print("계산결과는 ");
System.out.print(this.left/this.right);
System.out.print(" 입니다.");
}
}
public class CalculatorDemo {
public static void main(String[] args) {
Calculator c1 = new Calculator();
c1.setOprands(10, 0);   10을 0으로 나누기 했다
c1.divide();   
}
}
 수학적으로 10을 0으로 나누면 의미가 없기때문에 일반적으로 프로그래밍 언어에서는 이것을 에러로 처리하거나
 nan 이라고 하는 특수한 형태의 데이터를 반환하는걸 통해서 비정상적인 상황 이라는 것을 애플리케이션을 구축
 하는 사람에게 알려주게된다.*/

class Calculator{
int left, right;
public void setOprands(int left, int right){
this.left = left;
this.right = right;
}
public void divide(){
										//계산결과는 오류가 발생했습니다 : /by zero
	try {								//시도 예외를 처리하기 위한 핵심적인 문법적인 요소 오류가 발생할거같은곳을 try라고 하는것으로 묶어서 catch 라고 하는 키워드를쓴다
System.out.print("계산결과는 ");
System.out.print(this.left/this.right);//이부분에서 뭔가 문제가 발생할 가능성이 있다라는것을 예측할수있다.
System.out.print(" 입니다.");
} catch(Exception e){					// 예외를 처리하기 위한 핵심적인 문법적인 요소,생신건 메소드랑 비슷하다 이건
System.out.println("오류가 발생했습니다 : "+e.getMessage());
}										//try 안에서 서 코드가 실행하다가 에러가 발생하면 그 순간 트라이 안에서의 실행은 중지된다 그리고
}										//catch 키워드가 이끄는 이중괄호 안에 있는 구문이 실행되기 시작하는것이다.
}										/* 자바 버추얼 머신이 catch(Exception e) 를 실행하는 과정에서 트라이 안에서 만약 에러가 발생 했다면 자바 버추얼 머신이 자동으로캐치
										라고 하는 구문을 호출하게 된다 그리고 그 구문에  매개변수로 에러에 대한 정보를 담고 있는 객체를 e 매개 변수로 전달을 한다 그리고 그 객체의
										데이터 타입은 Exception 클래스다 이클래스 안에는 getMessage라고 하는 메소드가 포함이 되어있어서
										에러가 발생 했을때 이자바 버추얼 머신이  전달하는 Exception라는 클래스의 인스턴스인 e라고하는 변수에 
										getMessage 메소드를 호출하면 에러가 발생한 이유에 대한 내용이 이렇게 리턴 되게 되는것이다.*/
public class CalculatorDemo {
public static void main(String[] args) {
Calculator c1 = new Calculator();
c1.setOprands(10, 0);
c1.divide();
Calculator c2 = new Calculator();
c2.setOprands(10, 5);
c2.divide();
}
}



