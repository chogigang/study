package POLYTECH;

  // 객체 지향 클래스 수업 
class Human{
	
	String name; //이
	int age; //나이 
	int weight; //몸무게
		
	void eat(){
		System.out.println(name+"님이"+"식사하십니다. ");
		
	} 
	void seelp() {
		System.out.println(name+"님이"+"주무십니다.");
		
		
	}
	void medicalcheck() {
		System.out.println(name+"님의 건강검진 결과는"+age+"세"+weight+"kg 입니다. ");
		
	}
	
	
} //Person 중괄호 
public class Program04 {

	 
	
	public static void main(String[] args) {
		
		Human man1 = new Human();
		Human man2 =new Human();
		
		
		man1.name="김길동";
		man1.age=20;
		man1.weight=62;
		
		man2.name="이길동";
		man2.age=35;
		man2.weight=75;
		
		
		
		man1.eat();
		man1.seelp();
		man1.medicalcheck();
		
		man2.eat();
		man2.seelp();
		man2.medicalcheck();
		
		
		
		

	}

}
