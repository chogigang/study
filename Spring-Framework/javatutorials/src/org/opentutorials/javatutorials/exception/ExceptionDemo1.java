package org.opentutorials.javatutorials.exception;
//다양한 예외들 과 다중캐치
/*
class A{
private int[] arr = new int[3];
A(){
arr[0]=0;
arr[1]=10;
arr[2]=20;
}
public void z(int first, int second){
try {
System.out.println(arr[first] / arr[second]);
} catch(ArrayIndexOutOfBoundsException e){//캐치를 중첩해서 쓰는중 ArrayIndexOutOfBoundsException 가 발생하면
System.out.println("ArrayIndexOutOfBoundsException");//출력하게 설정하고
} catch(ArithmeticException e){//ArithmeticException가 발생하면 
System.out.println("ArithmeticException");//ArithmeticException 출력하게 예외를 다중 설정 할수 있음
} catch(Exception e){//마찬가지다.
System.out.println("Exception");
}
}//약간 조건문과 비슷함  Exception 다른 예외들보다 먼저 위에 있으면 오류가 날것이다 이점 주의하자
}//Exception 은 모든 예외를  다 포함하는 예외 이기 때문에 만약 Exception에 대한 캐치가 캐치다음에 어떠한 예외가 나타난다면 그 예외들은 절대로 실행시킬수가 없다.
public class ExceptionDemo1 {
public static void main(String[] args) {
A a = new A();
a.z(10, 0);
a.z(1, 0);
a.z(2, 1);
}
}

*/

//         예외  finally
class A{
    private int[] arr = new int[3];
    A(){
        arr[0]=0;
        arr[1]=10;
        arr[2]=20;
    }
    public void z(int first, int second){
        try {
            System.out.println(arr[first] / arr[second]);//finally 가 있으면 여기 있는 내용이 정상적이건 비정상적이건 언제나 finally가 실행될것이다.
        } catch(ArrayIndexOutOfBoundsException e){
            System.out.println("ArrayIndexOutOfBoundsException");
        } catch(ArithmeticException e){
            System.out.println("ArithmeticException");
        } catch(Exception e){
            System.out.println("Exception");
        } finally {//추가됨, 예외여부와 관계없이 실행되는 로직  주로 데이터베이스쪽으로 쓴다.
            System.out.println("finally");
        }
    }
}
 
public class ExceptionDemo1 {
    public static void main(String[] args) {
        A a = new A();
        a.z(10, 0);
        a.z(1, 0);
        a.z(2, 1);
    }
}
