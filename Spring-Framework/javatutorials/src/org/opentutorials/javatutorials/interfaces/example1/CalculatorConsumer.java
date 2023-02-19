package org.opentutorials.javatutorials.interfaces.example1;//인터페이스 사용이유
class CalculatorDummy{//가짜 클래스 
    public void setOprands(int first, int second, int third){}
    public int sum(){
        return 60;
    }
    public int avg(){
        return 20;
    }
}
public class CalculatorConsumer {//계산기 사용하는 로직
    public static void main(String[] args){
        CalculatorDummy c = new CalculatorDummy();
        c.setOprands(10,20,30);
        System.out.println(c.sum()+c.avg());
    }
}

/*package org.opentutorials.javatutorials.interfaces.example1;
class Calculator {
int left, right;
public void setOprands(int left, int right) {
this.left = left;
this.right = right;
}
public void sum() {
System.out.println(this.left + this.right);
}
public void avg() {
System.out.println((this.left + this.right) / 2);
}
}
실제 계산기의 로직을 받았을대 기존 생각했던 로직과 다르게 나왔다 커뮤니케이션 미스로 로직이 꼬여 오류가 날것이다.
이 문제를 예방 하기 위해서 진행되는 약속자체를 코드 레벨에서 자바가 제공하는 기능을 통해 그 약속을 지정할수 있다면
더 확실하고 더 안정적인 작업을 진행 할수 있을것이다 그 방법이 인터페이스다
그걸통해 서로가 상호간의 더 염격한 더 손실이 적은 커뮤니케이션 미스가 적은 약속을 서로가 체결할 수 있다라는 
점이 강점이다.
*/





/*<인터페이스>
1. 인터페이스의 역할: 어떤 객체가 있고 그 객체가 특정한 인터페이스를 사용한다면 그 객체는 반드시 인터페이스의 메소드들을 구현.
인터페이스는 하위 클래스에 특정한 메소드가 반드시 존재하도록 강제한다.
상속은 extends를 사용하지만 인터페이스는 implements를 사용

2. 협업자 상호간에 구체적인 약속을 하면 된다. 특히 그 약속을 코드 안에서 할 수 있다면 참 좋을 것이다. 그렇다. 인터페이스가 필요한 순간임.
public interface Calculatable {
public void setOprands(int first, int second, int third) ;
public int sum();
public int avg();
=> 인터페이스를 이용해서 서로가 동일한 메소드를 만들도록 규약을 만들어서 공유한 결과 각자가 상대의 일정이나 구현하는 방식에 덜 영향을 받으면서 에플리케이션을 구축

3. 인터페이스의 규칙
- 하나의 클래스가 여러개의 인터페이스를 구현 할 수 있다.
- 인터페이스도 상속이 된다.
- 인터페이스의 맴버는 반드시 public이다.
- abstract vs interface:
==인터페이스는 클래스가 아닌 인터페이스라는 고유한 형태를 가지고 있는 반면 추상 클래스는 일반적인 클래스다.
==인터페이스는 구체적인 로직이나 상태를 가지고 있을 수 없고, 추상 클래스는 구체적인 로직이나 상태를 가지고 있을 수 있다.*/