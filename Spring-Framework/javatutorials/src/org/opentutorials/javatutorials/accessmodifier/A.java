package org.opentutorials.javatutorials.accessmodifier;

public class A {

	public String y() {
		return "public void y()";
	}
	private String z() {
		return "public void z()";
	}
	public String x() {
		return z();
	}
	
public class AccessDemo1{//클래스 a를 사용한다.
	public static void main(String[] args) {
		
		A a = new A();
		System.out.println(a.y());//a라는 클래스에 있는 y라는 메소드를 호출
		//아래 코드는 오류가 발생한다.
		//System.out.println(a,z());//y라는 메소드와 z라는 메소드의 차이는 public과 private의 차이가 있다.
		System.out.println(a.x());

	}

}
}
/*클래스가 public 이면 누구나 그 클래스의 메소드를 호출해서 사용할수가있다. 꼭 클래스 메소드가 아니라 변수도 마찬가지다
 * 하지만 그 클래스에 소속되어 있는 메소드가 private 면 그 클래스 내부적으로는 사용할수있지만
 * 그 클래스 바깥쪽에 있는 외부의 클래스 ex)AccessDemo1 
 * 외부의클래스는 사용할수가 없고 사용하라고 하면 오류가 걸린다.
 * 그리고  System.out.println(a.x()) 는 return z(); 를 호출 하라고한다
 * 그 z부분은 private String z()일 것이다. 또 z메소드는 x라는 메소드와 같은 클래스의 소속이다.
 * 같은 클래스 에서는 private 지정되어있는 메소드를 사용할수있다 라는 의미다.
 * public, private 이부분은 바로 접근 제어자 라는 것이다.
 * */
 