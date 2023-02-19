package org.opentutorials.javatutorials.conditionaloperator;

public class LoginDemo3 {
	public static void main(String[] args) {
		String id = args[0];
		String password = args[1];
		if (id.equals("egoing") &&password.equals("11111")) {//id절과 password절 사이에 &&(and)위치 하고있다
				System.out.println("right");//id절과 페스워드 절이 둘다 트루일때 라이트가 실행됀다,하나라도 틀릴시 엘스 절로 넘어간다
		}	else {//아이디랑 페스워드가 하나라도 틀릴시 엘스 절로 넘어간다
			System.out.println("worng");
		}
		}
	}

