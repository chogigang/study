package POLYTECH;

abstract class Animal{
		abstract void cry();
		
} 
class Dog extends Animal{
	
	
	void cry(){
		System.out.println(" 이야호");
	}
	
}

class Cat extends Animal{
	
	
	void cry(){
		System.out.println(" siuuuuu ");
	}
	
}


public class Program08 {

	public static void main(String[] args) {
	
		
	Dog dog =new Dog();
	Cat cat =new Cat();
	
	cat.cry();
	dog.cry();
	

	}

}




// 추상클래스 
/*
  추상 클래스란 다른 클래스들의 공통이 되는 변수나 메서드의 이름과 형태만 기술해 놓았을 뿐 구체적인 내용이 없는 클래스
  
  
  추상 클래스는 abstract 라는 수식자를 사용한다.
 */




/*
 인터페이스 
 

 
  
  */
 