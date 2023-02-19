package org.opentutorials.javatutorials.Inheritance.example1;
abstract class A {//자동으로 적용됨, 추상클래스
	public abstract int b();
	//본체가 있는 메소드는 abstract 키워드를 가질 수 없다.
	//public abstract int c(){System.out.println("Hello")}
	//추상 클래스 내에는 추상 메소드가 아닌 메소드가 존재 할 수 있다.
	
	public void d() {
		System.out.println("world");
	}
	class B extends A {
	public int b() {
		return 1;
	}	
	}
	public class AbstractDemo {
	public static void main(String[] args) {
		//A obj = new A();
		//B obj = new B();
	}

}
}




/*메소드중에 하나라도 멤버중에 하나라도 앱스트렉트라고한다면 
 * 그멤버를 담고있는 클래스도 엑스트렉트가 된다.
 *  class A 는 추상 클래스 임에도 불구하고 이 추상 클래스는
 *  본체가 없는 메소드b와 같은 추상 메소드를 가지고 올수도 있지만
 *  메소드d 처럼 구체적인 로직을 가지고있는 메소드를 가질수도 있다.  */
 