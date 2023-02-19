package org.opentutorials.javatutorials.exception;
// 예외 checked와 unchecked
import java.io.IOException;

public class ThrowException2 {
	void throwArithmeticException() {
		throw new ArithmeticException();//예외를 처리하지않아도컴파일 에러가 발생하지 않는다 이건 unchecked
}
	void throwIOException1() {
		try {
			throw new IOException();// unchecked이다  IO익셉션은  예외처리를 하지 않으면 컴파일조차 되지 않기 때문에 트라이 캐치를 사용하거나
			} catch (IOException e) {
				e.printStackTrace();
			}			
	}
		void throwIOException2() throws	IOException{//뜨로우즈를 사용 해서 그 예외에 대한 책임을 사용자에게  넘기거나 둘중 하나를 했어야했다.
			throw new IOException();
		}

}


