package org.opentutorials.javatutorials.conditionaloperator;

public class AndDemo {
	  public static void main(String[] args) {
	        if (true && true) {// &&는 and를 의미 하는거고 트루 트루를 만나면 참이다 
	            System.out.println(1);
	        }
	 
	        if (true && false) {//트루와 펄스이기때문에 출력이 안된다.
	            System.out.println(2);
	        }
	 
	        if (false && true) {//거짓과 참 이기 때문에 출력이 안됨
	            System.out.println(3);
	        }
	 
	        if (false && false) {//둘다 거짓이기 때문에 출력이 안됨
	            System.out.println(4);
	        }
	 
	    }

}
