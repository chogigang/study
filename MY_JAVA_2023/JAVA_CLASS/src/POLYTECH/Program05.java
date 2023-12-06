package POLYTECH;

//예금 계좌 클래스
class Account_1 {

		String  id;  //계좌 번호
		int result;  // 잔고
		String name;  // 예금주


		Account_1(){
		super();

		}
		Account_1(String id ,int result,String name){
			this.id=id;
			this.result =result;
			this.name =name;
		}

		void income(int money) { //입금
		result+=money;
			System.out.println(name+"님의 계좌에"+money+"원이 입급 되었습니다.");
		status();

		}
	void outcome(int money) {  //출금

		result-=money;
		if(result<0){
			System.out.println("잔액이 부족합니다.");
		}else{
			System.out.println(name+"님의 계좌에"+money+"원이 출금 되었습니다.");
			status();
		}

	}

	void status() {  // 잔액 조회
		System.out.println(name+"님의 계좌 잔액은 "+result+"입니다.");

	}

}

//사장님이 원하시는 예금계좌 클래스
//상속
class Account2_1 extends Account_1{
	String date;
	void info(){
		System.out.println("=== 계좌 정보 ==== ");
		System.out.println("계좌 번호: "+id);
		System.out.println("계좌 예금주: : "+name);
		System.out.println("계설일: "+date);
	}
}


class Account3_1 extends Account2_1{
	int  ratio;
	void TimeGone(int month){
	ratio=result*month;
	System.out.println(month+"달이 경과되었습니다.");

	}

	@Override
	void status(){
	result=result+ratio;
	ratio=0;
	super.status(); //부모 클래스의 status 를 오버라이딩 하면서 호출
	}
}

public class Program05 {

	public static void main(String[] args) {

//	Account me =new Account("1234-5678",2102301401,"조기강");
//	Account you  =new Account("9876-5432",200,"장은준");
//	Account we = new Account("3124-21421",412345123,"횡령통장");
//
////		me.id="1234-5678";
////		me.name="조기강";
////		me.result= 2102301401;
//
////		you.id="9876-5432";
////		you.name="장은준";
////		you.result=200;
////
////		we.id="3124-21421";
////		we.name="횡령통장";
////		we.result=412345123;
//
//
//
//		me.income(30000);
//		me.outcome(50000);
//
//
//		you.income(20000);
//		you.outcome(3000);
//
//
//		we.income(30000);
//		we.outcome(30000);
//

		Account3_1 man1 =new Account3_1();
		man1.id="1234_5678";
		man1.name="조기강";
		man1.result=12401;
		man1.date="2023_11_09";
		man1.ratio=0;

		man1.income(1235);
		man1.outcome(4123);
		man1.status();
		man1.TimeGone(10);
		man1.status();
		man1.info();

	}

}


//오버라이딩 vs 오버로딩
 // 오버라이딩 슈퍼 클래스를 상속 받은 서브클래스에서 슈퍼 클래스의 메서드를 다시 정의하는것
// 오버로딩 하나의 클래스 내에서 동일한 이름의 메서드를 파라미터 리턴타입 등을 다르게 하여 여러개 정의하는것



//1.예금계좌 업그레이드 이자율 연 10% 이자율을 가지는 프로그램 설정 Account3

// 마이너스일 경우 출금제한되는 계좌 Account4

