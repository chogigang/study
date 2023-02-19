package org.opentutorials.javatutorials.exception;
import java.io.*;
// 예외의 강제 



/*
public class CheckedExceptionDemo {
    public static void main(String[] args) {
        BufferedReader bReader = new BufferedReader(new FileReader("out.txt")); 객체 인자값으로 읽어오고 싶은 파일의 이름을 적는다.
        String input = bReader.readLine();
        System.out.println(input); 
    }
}    handled exception type FileNotFoundException 라는 오류가 날것이다.
	 Unhandled exception type IOException
------------------------------------------------------------------------------------------

*public class CheckedExceptionDemo {
	public static void main(String[] args) {
		try {
		BufferedReader bReader = new BufferedReader(new FileReader("out.txt"));  // 
		} catch (FileNotFoundException e) {                                         
		e.printStackTrace();
		}
		String input = bReader.readLine();
		System.out.println(input);
		}
		}





public class CheckedExceptionDemo {
   
	public static void main(String[] args) {
        BufferedReader bReader = null;
        String input = null;
        try {
            bReader = new BufferedReader(new FileReader("out.txt"));// bReader라는 구문이 try구문 중괄호 사이에있는 지역변수
        } catch (FileNotFoundException e) {                         //또 중괄호 바깥쪽에서는 존재하지 않는 변수라는 말이기도하다        
            e.printStackTrace(); 
        }
        try{
            input = bReader.readLine();//                          bReader이 변수를 현제 사용하려고 하고있다 그이야기는 존재하지 않는 변수를 사용하려고 하고있다는 뜻이다.
        } catch (IOException e){
            e.printStackTrace();
        }       
        System.out.println(input); 
    }
}
*/



public class CheckedExceptionDemo {
public static void main(String[] args) {
BufferedReader bReader = null;//버퍼드리더 의 변수를 트라이 예외처리 밖으로 빼줘야하고 
String input = null;//마찬가지로 밖으로 빼줘야지만 정상적으로 작동할 것이다 이건 유효범위라는 것이다.
try {
bReader = new BufferedReader(new FileReader("out.txt"));
} catch (FileNotFoundException e) {
e.printStackTrace();
}
try{
input = bReader.readLine();
} catch (IOException e){
e.printStackTrace();
}
System.out.println(input);
}
}
