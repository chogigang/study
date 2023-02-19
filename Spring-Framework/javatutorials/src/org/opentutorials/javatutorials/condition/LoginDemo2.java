package org.opentutorials.javatutorials.condition; //if문 안에는 또다른 if 문이 들어가서 더 복잡한 조건을 만들수있다 
                                                   //if문 하고 else 문 하고 하나로 응집할수 있는 장치가 논리 연산자다 
public class LoginDemo2 {
	public static void main(String[] args) {
		String id = args[0]; // 로그인 데모 2 입렵값으로 egoing 
		String password = args[1]; // 1111, 입력값들이 변수값이 담긴다 
		if (id.equals("egoing")) {// id 라는 변수에 args[0]번째 equals("egoing") 라는 변수가 담김
			if(password.equals("1111")) { //password 라는 변수에 args[1] 번째 .equals("1111") 변수가 담김
			} else {// 페스워드 펄스(거짓) 일경우 엘스쪽으로 내려옴 
				System.out.println("wrong");//펄스이기때문에 롱이 출력됨
			}
			
			} else {//맨위 아이디 변수값에서 펄스(거짓)일경우 이쪽 앨스로 내려옴 
			System.out.println("wrong");//펄스 이기때문에 롱이 촐력
		}
	}
}//