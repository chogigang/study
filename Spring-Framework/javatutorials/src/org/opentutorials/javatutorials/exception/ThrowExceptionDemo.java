package org.opentutorials.javatutorials.exception;
//예외 사슬 +   책임전가 throws
import java.io.*;


class B{
void run() throws FileNotFoundException,IOException{//throws 는 밑 클래스쪽으로 변수가 생기면 던저버리는것 런이라고 하는 메소드에 FileNotFoundException 이라는 예외를 throws 한다는것은
													//런이라고 하는 메소드 내부적으로  FileNotFoundException이 발생할수도 있다 라는것을 이 메소드 런에 사용자에게 강력한 암시를 주는것
													//FileNotFoundException 하는 예외를 대응할 것을 강제하는것이 되는것
	BufferedReader bReader = null;
String input = null;
/*try {
bReader = new BufferedReader(new FileReader("out.txt"));//이 코드 안에서는 더이상 뉴 파일 리더를 하는 과정에서 발생하는 예외의 대한 책임을 
//지지 않아도 되기때문에 트라이문을 삭제해도 된다.
} catch (FileNotFoundException e) {
e.printStackTrace();
}*/
/*try{
input = bReader.readLine();
} catch (IOException e){//IOException 경우에도 다음사용자에게 throws 하고싶으면 위 throws 에 IOExceptio 추가하면 된다.
e.printStackTrace();
}*/
System.out.println(input);
}
}

class C{
void run() throws FileNotFoundException,IOException{//또 다음 사용자에게 넘기고싶다면 여기다가 throws 하면 된다.
B b = new B();
try {
	b.run();//기존에 b.run();을 했을때 오류가 떳다,  예외는 중첩해서 사용할수도 있다 또는 캐치를 추가하는것
} catch (FileNotFoundException e) {
	e.printStackTrace();
}   catch (IOException e) {
	e.printStackTrace();
}
}
}
public class ThrowExceptionDemo {
public static void main(String[] args) {
C c = new C();
try {//이렇게 또 책임 전가 하는것 
	c.run();
} catch (FileNotFoundException e) {//이거 지워도 오류 안난다  FileNotFoundException 의 조상은 IOException 이기때문에 지워도 오류가 안난다.
	// TODO Auto-generated catch block
	System.out.println("out.txt 파일이 필요합니다.");
} catch (IOException e) {//이것만 남겨도 ㄱㅊ음 
	// TODO Auto-generated catch block
	e.printStackTrace();
} 
}
}

/*
 * B에 대해서 C는 사용자의 관계에 있다. 그리고 Throw은 C에 대해서 사용자의 관꼐에 있다.  B -> C-> Throw  -> 일반 사용
 * Throw는 일반 사용자가 실행시키는 것이기 때문에 최종적인 사용자는 일반사용자이다 끝단에 사용자를 보통 엔드 유저 라고 부른다.
 * B 런에서 예외가 발생했을때 B가  런 안에서 그 예외를  트라이 캐치 할수 있지만 B가 그것을 처리하지 않고
 * C에게 던질수도 있는것이다 그러면 C는 그 예외를 캐치해서 자기가 트라이,캐치 해서 처리할수도 있지만
 * 그러지 않고 다음 사용자인 ThrowExceptionDemo 에게 넘길수도 있다
 * 그리고 ThrowExceptionDemo 역시 마찬가지로 그예외를 자기가 처리할 수 있지만
 * 그냥 일반 사용자한태 넘길수 있는데 이일반 사용자에게 넘긴다 라는 뜻은 그냥 애플리케이션을 
 * 예외처리 하지않고 자동으로 종료시키겠다는 뜻이 되는것이다.
 * 
 * 	try catch 는 자기가 처리하는거고
 *  throws 는 다음 사용자에게 책임을 넘기는것이다.
 * */











 