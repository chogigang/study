package org.opentutorials.javatutorials.condition;

public class LoginDemo {
	public static void main(String[] args) {
		String id = args[0];//(args[])입력값  이 들어온다 
		if(id.equals("egoing")){//비교연산자,문자 같다면,트루라면
		System.out.println("right");//트루라면 라이트가 출력
		} else {
		System.out.println("wrong");//펄스(거짓)이라면 어롱을  출력함
		}
}
}
