package org.opentutorials.javatutorials.condition;

public class Condition3Demo {

	public static void main(String[] args) {
	if(true) {
		System.out.println(1);
	} else {
		System.out.println(2);//if 값이 ,트루이기때문에 실행이 안됨
	}

	
	
	if(false) {
			System.out.println(1);//if 값이 펄스 이기 때문에 실행이 안됨
		} else {
			System.out.println(2);//if 값이 펄스이기때문에 엘스가 실행됨
			}
		

	
	
	if(false) {// if 값이 펄스이기 때문에 실행 안됨
			System.out.println(1);
		} else if(false)  {//만약 엘스 에서 펄스(거짓)이면 엘스if 로넘어감
			System.out.println(2);
		} else if(false)  {//계속 조건문을 달수 있고 트루가 될때 까지 계속 넘어감
				System.out.println(3);
		} else {//결국 트루인 지점까지 then값이 트루인곳 까지 내려옴 
					System.out.println(4);
			}
	
	}

}
