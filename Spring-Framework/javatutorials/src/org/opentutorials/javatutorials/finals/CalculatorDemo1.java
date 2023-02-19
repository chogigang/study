package org.opentutorials.javatutorials.finals;
class Calculator {
static final double PI = 3.14;//final 선언하면 바뀔수없는 상수가 된다.
int left, right;
public void setOprands(int left, int right) {
this.left = left;
this.right = right;
//Calculator.PI = 6;  이미pi의 값은 3.14로 final을 선언했기때문에 고정시켜버렷기때문에 자바는거부를한다.
}
public void sum() {
System.out.println(this.left + this.right);
}
public void avg() {
System.out.println((this.left + this.right) / 2);
}
}
public class CalculatorDemo1 {
public static void main(String[] args) {
Calculator c1 = new Calculator();
System.out.println(c1.PI);
//Calculator.PI = 10;  클래스 밖깥쪽에서도 final 선언한 pi값을 변경할려고해도 오류가 뜬다.
}
}
/* 필드에서 final 을 선언하면 클래스 밖이던 메소드 밖이던 그 선언한 값은 절대로 안바뀐다.
 * 메소드 final은 상속과 관련이 있다. 빈도수는 높진않다.
 * 
 * */	
 