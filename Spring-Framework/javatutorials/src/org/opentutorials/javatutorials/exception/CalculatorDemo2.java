package org.opentutorials.javatutorials.exception;
	class DivideException extends Exception { //DivideException는 Exception보다 자식 클래스이고  checked 경우 무조건 예외처리를 해야한다.
	DivideException(){
	super(); //슈퍼클래스의 기본 생성자를 호출하는것 Exception 클래스의 기본 생성자는 예외 메시지가 전달되지 않는 경우, 예외 객체를 생성할 때 사용할 수 있다
	}
	DivideException(String message){
	super(message);
	}
	}
	class Calculator1{//같은 패키지에 같은 이름의 카큘레이터가 있어서 1을 추가함
	int left, right;
	public void setOprands(int left, int right){
	this.left = left;
	this.right = right;
	}
	public void divide() throws DivideException{
	if(this.right == 0){
	throw new DivideException("0으로 나누는 것은 허용되지 않습니다.");
	}
	System.out.print(this.left/this.right);
	}
	}
	public class CalculatorDemo2 {
	public static void main(String[] args) {
	Calculator1 c1 = new Calculator1();
	c1.setOprands(10, 0);
	try {                                   //checked 이기때문에 트라이 캐취 문을 추가 했다. 이걸 안해주면 무조건 오류가 나기때문에 checked 는 무조건 해줘야한다
	c1.divide();
	} catch (DivideException e) {
	e.printStackTrace();
	}
	}
	}
	
