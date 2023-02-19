package org.opentutorials.javatutorials.collection;
//컬렉션 프레임워크 배열과 컬렉션즈 프레임워크
import java.util.ArrayList;//컬렉션 프레임워크 어레이 리스트를 사용하기 위해선 임포트를 해야한다.
public class ArrayListDemo {
public static void main(String[] args) {
String[] arrayObj = new String[2];
arrayObj[0] = "one";
arrayObj[1] = "two";
// arrayObj[2] = "three"; 오류가 발생한다.
for(int i=0; i<arrayObj.length; i++){
System.out.println(arrayObj[i]);
}
ArrayList<String> al = new ArrayList<String>();//컬렉션즈 프레임워크안에 들어가있는 기능중 하나,스트링은 오브젝트의 하위 개념이기 때문에 제네릭을 이용한 <String>으로 지정해서 사용할수있음
	al.add("one");//add 라는 메소드는 어떠한 형태의 데이터 타입도 수용 할수 있는 형태의 메소드
	al.add("two");//인자의 데이터 타입은 Object여야 한다
	al.add("three");//왜냐면 오브젝트는 모든 데이터 타입의 조상이기 때문에 어떠한 데이터 타입도 수용할려면 오브젝트를 사용해야한다.
for(int i=0; i<al.size(); i++){//Array에서 .length 와 다르게 size로 그안의 값을 가저올수 있다.
	String value = al.get(i);//제네릭<Strirng>을 사용하지 않으면 object 보다 하위 클래스이기때문에 오류가 걸린다.
	System.out.println(al.get(i));
			}
		}
	}
