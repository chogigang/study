package org.opentutorials.javatutorials.condition;

public class Condition2Demo {

	public static void main(String[] args) {
		if(false) { // then 절을 지나처서 5만 출력된다.
			System.out.println(1);
			System.out.println(2);
			System.out.println(3);
			System.out.println(4);
		}
		System.out.println(5);
	
	if(true) { // then절 안에 모든 값이 출력 된다. 
		System.out.println(1);
		System.out.println(2);
		System.out.println(3);
		System.out.println(4);
	}
	System.out.println(5);
}
}
//맨 위값은 5만 출력 if 트루 쪽은 1,2,3,4,5 다 출력 