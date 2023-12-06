package POLYTECH;

 class Person {
	String name;
	int age;
	int weight;
//		Person(String name,int age,int weight){
//			this.name=name;
//			this.age=age;
//			this.weight=weight;
//		}
	void birth(String name,int age,int weight){
		this.name= name;
		this.age=age;
		this.weight=weight;
		
	}
		void eat() {
			System.out.println("먹는다");
		}
		void sleep() {
			System.out.println("잔다.");
		}
		
}
class Student extends Person{
	
	void study() {
		System.out.println("공부한다.");
	}
	@Override
	void sleep() {
		System.out.println("도서관에서 공부하다 잔다.");
	}
}

interface Money{
	abstract void give();
	abstract void receive();
	
	
}
interface Work{
	abstract void work();
	
}

class Citizen extends Student implements Money,Work{
	

	@Override
	public void work() {
		System.out.println("일한다.");
		
	}

	@Override
	public void give() {
		System.out.println("돈을 쓴다.");
		
		
	}

	@Override
	public void receive() {
		System.out.println("돈을 번다. ");
		
	}
	@Override
	void sleep() {
		System.out.println("일하다 지쳐 잠든다.");
		
	}
	
}



public class Program09 {

	public static void main(String[] args) {
//	Person p1=new Person("조기강",30,80);
		
	Person p1 = new Person();
	Citizen c1 =new Citizen();
	Student s1 = new Student();
	p1.birth("조기강",29,80);
//	p1.name="조기강";	
//	p1.sleep();
//	
//	p1.eat();
//		
//
//Student s1 = new Student();
//	s1.birth("조기강", 29, 80);
//	
//	
//	
//Citizen c1 =new Citizen();
//c1.birth("조기강", 29, 80);
//c1.work();
//c1.study();
//c1.receive();
//c1.give();
//c1.eat();
//c1.sleep();
//

	Person p[] = { new Person(),new Student(),new Citizen() 		
	};
	for(int i=0;i<3;i++) {
		p[i].sleep();
	


		}

	}
}


/*
 
인터페이스 
일종의 추상 클래스이며 인터페이스는 추상클래스 처럼 추상 메서드를 갖지만 추상클래스보다 추상화 정도가 높아서 
추상 클래스와 달리 몸통을 갖춘 일반 메서드 또는 멤버변수를 구성원으로 가질수 없다.
오직 추상메서드와 상수만을 멤버로 가질수 있으며,
외의 다른 어떠한 요소도
허용 하지 않는다.


 기말 시험 다중 상속 문제 낸다.
 


 */
