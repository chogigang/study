package POLYTECH;

class Calc {
	//생성자
	int x;
	int y;
	
//	int  plus(int x,int y) {
//		
//		return x+y;
//	}
	// 생성자 
	Calc(){
		x= 3;
		y= 4;
	}
	
	// 오버 로딩 
	Calc(int a,int b){
		x=a;
		y=b;
	}
	void plus() {
		
		System.out.println(x+y);
	}
	void minus() {
		System.out.println(x-y);
		
	}
	void multiple() {
		System.out.println(x*y);
	}
	
// 오버 로딩 	
//double plus (double x, double y) {
//	return x+y;
//}


}

public class Program06 {

	public static void main(String[] args) {
		Calc a =new Calc(); // 동적 할당 
		Calc b= new Calc(5,7);
			a.plus(); //  3+4 =7
			b.plus(); //    5+7= 12
			a.multiple(); //  3*4 =12
			b.minus(); //   5-7 =-2 ;
			
//	System.out.println(c.plus(12.4, 13.5));

	}


	
//static 자바에서 static은 정지된 메모리 즉 하나의 메모리 주소에 계속 저장한다는 의미로 사용한다.
	// 변수나 메서드 앞에 static을 붙일 수 있는데. 변수 앞에 static이 붙으면 그 변수는 같은 메모리 주소에 값을 계속 저장한다.






}
