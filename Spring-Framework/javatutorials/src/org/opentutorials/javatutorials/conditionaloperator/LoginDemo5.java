package org.opentutorials.javatutorials.conditionaloperator;

public class LoginDemo5 {//논리 연산자 or
	public static void main(String[] args) {
		String id = args[0];
		String password = args[1];
		if ((id.equals("egoing") || id.equals("k8805") || id.equals("sorialgi"))//3개 아이디중 하나라도 적으면 참
		&& password.equals("111111")) {//위에 아이디 참을 적고 비밀번호 지역도 참을 적어야한다
		System.out.println("right");// 둘다 참일시 
		} else {
		System.out.println("wrong");//하나라도 펄스(거짓)일시 
		}
	}

}
