package org.opentutorials.javatutorials.constant2;
//상수2 enum + 열거형의 활용


/*
class Fruit{
public static final Fruit APPLE = new Fruit();// 파이날은 수정할수 없는 멍령어 인거 복습하자
public static final Fruit PEACH = new Fruit();
public static final Fruit BANANA = new Fruit();
}*/

enum Fruit{
	APPLE("red"),PEACH("pink"),BANANA("yellow");//("")는 생성자를 호출하는 것이고 그생성자의 매개변수를 위한 인자를 Fruit(String color)로 전달해서 red라는 값이 this.color = color; 뒤쪽 컬러로 들어간다
	private String color;
	public String getColor() {//당연히 메소드도 가능하다
		return this.color;	
	}
	Fruit(String color){
		System.out.println("Call Constructor"+this);//열거형의 활용  위 클래스 코드랑 같은것
		this.color = color;							//뒤쪽 color는  Fruit(String color) 이쪽 컬러를 의미 매개변수가 지역변수 고 지역 변수가 전역 변수보다 우선순위가 높기 때문이다/this.color값은 위쪽 상수에 저장된다.
													//this 를 명시 하지않는 경우 지역변수를 쓰고 디스를 명시한 경우 전역 변수를 사용한다.	
	}
}
/*
class Company{
public static final Company GOOGLE = new Company();
public static final Company APPLE = new Company();
public static final Company ORACLE = new Company();
}
*/
enum Company{
	GOOGLE,APPLE,ORACLE//위와 같은 기능을 하고있다.
}
/*
 * 위 방법과 차이는 클래스 로 우리가 상수를 정의하게 되면은 클래스가 가지고 있는 각가의 멤버를 우리가 배열처럼 열거할수 없다라는 단점이
 * 있다 Company 가 어떠한 상수를 가지고 있는지를 코드를 작성하는 사람이 알고 있어야 된다는 것 Company 열거형이 클래스 방식과
 * 다른점 중에하나는 그 열거형의 어떠한 데이터가 있는지 몰라도 마치 배열처럼 그 안에 들어있는 열거형이 갖고 있는 데이터를 하나씩 꺼내서
 * 처리할 수 있는 기능을 제공한다는 것이다 그때 사용하는 메소드가 values 라고하는것
 *
 *public class ConstantDemo {
	public static void main(String[] args) {
		for(Fruit f : Fruit.values()){
			System.out.println(f+", "+f.getColor());
 
 for인 구문 구조는 Fruit f : Fruit.values()) 세미 콜론 뒤쪽 어떠한 데이터들의 집합이 오는것이고
 앞쪽에는 집합에 소속되어 있는 하나하나 꺼내서 바로 f 라고 하는 변수안에 담어주는 형식의 자바의 문법이다.
 
 */	


public class ConstantDemo {
public static void main(String[] args) {
	
Fruit type = Fruit.APPLE;
	switch(type){
    case APPLE://케이스 에서 사용하는 이 각각의 레이블은 스위치 문으로 전달하는 데이터 타입이 플루트 라는것을 
    			// 스위치는 알고있기 때문에 앞에 플루트를 적지 않아도 그 풀루트 에 상수만 적어도 된다라는 약속이 되어있다
    			//열거형의 활용중에 어떠한 상수의 기능만 하는것이 아니라 그 상수가 어떠한 값을 갖게하는 등
    			//더 많은 일을 할수 있다는것이 enum형의 장점이고 더 적은코드로 더 많은 일을 할수 있다는 장점이다.
        System.out.println(57+" kcal,color" + Fruit.APPLE.getColor());
        break;
    case PEACH:
        System.out.println(34+" kcal,color" + Fruit.PEACH.getColor());
        break;
    case BANANA:
        System.out.println(93+" kcal,color" + Fruit.BANANA.getColor());
        break;
		}
	
	}
}



//파이날은 수정할수 없는 멍령어 인거 복습하자
/*위와 같은 로직에서 숫자 1에 해당하는 과일은 언제나 사과여야 한다. 그러므로 변하지 않는 값인 상수값에 따라서 
 * 그 값에 해당하는 과일의 의미를 고정하고 있다. 그런데 주석으로 상수의 의미를 전달하고 있지만 주석이 없어졌거나, 
 * 주석이 상수를 사용하는 코드와 멀어진다면 각 숫자에 해당하는 과일이 무엇을 나타내는지 알아보기거 어렵거나 불가능해질 수 있다.
 *이런 때는 이름이 있다면 더 좋을 것이다. 변수도 상수가 될 수 있다. 변수를 지정하고 그 변수를 final로 처리하면 한번 설정된 변수의 값은 더 이상 바뀌지 않는다. 
 *또한 바뀌지 않는 값이라면 인스턴스 변수가 아니라 클래스 변수(static)로 지정하는 것이 더 좋을 것이다.
 */

/*
<상수와 enum>
1. 상수는 변하지 않는 값이다. 아래에서 좌항이 변수이고 우항이 상수이다.
	int x = 1;
2. 접두사 붙이기: 이름이 중복될 확률을 낮출 수 있다. 이러한 기법을 네임스페이스라고 한다.;
*인터페이스를 이렇게 사용할 수 있는 것은 인터페이스에서 선언된 변수는 무조건 public static final의 속성을 가진다.; 
*언제나 오류는 컴파일 시에 나타나도록 하는 것이 바람직하다. 
*실행 중에 발생하는 오류는 찾아내기가 더욱 어렵다.

3. enum: enum은 열거형(enumerated type)이라고 부른다. 열거형은 서로 연관된 상수들의 집합.
 *enum은 class, interface와 동급의 형식을 가지는 단위다. 하지만 enum은 사실상 class임.
 *enum이 서로 다른 상수 그룹에 대한 비교를 컴파일 시점에서 차단할 수 있다는 것을 의미.
 *사용 이유?
 *코드가 단순해진다.
 *인스턴스 생성과 상속을 방지한다.
 *키워드 enum을 사용하기 때문에 구현의 의도가 열거임을 분명

4. enum과 생성자
 *열거형의 특성: 열거형은 연관된 값들을 저장한다. 또 그 값들이 변경되지 않도록 보장한다.
 *뿐만 아니라 열거형 자체가 클래스이기 때문에 열거형 내부에 생성자, 필드, 메소드를 가질 수 있어서 단순히 상수가 아니라 더 많은 역할을 할 수 있다.
 * */

