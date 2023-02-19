package org.opentutorials.javatutorials.interfaces.example2;
//인터페이스 만듬 
public interface Calculatable {
	public void setOprands(int first, int second, int third) ;
	public int sum();
	public int avg();

}
/* Calculatable 라고 하는 인터페이스를 만들었고
 * setOprands 라는 메소드를 가지고 있고 그것은
 * 퍼스트 세컨 써드 라고 하는 3개의 정수형식의 인자를 갖는다 그리고
 * 썸과 에버리지 라는 메소드도 포함하고 있어야하는대 이것들은 int(정수) 를 리턴한다
 * 라는 약속을 쳬결*/
 



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