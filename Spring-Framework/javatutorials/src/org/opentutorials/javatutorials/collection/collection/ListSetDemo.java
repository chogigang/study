package org.opentutorials.javatutorials.collection;
// Collections framework   List와 Set의 차이점
//List 와 Set의 차이점 - 중복 허용 여부와 순서가 보장되어 있느냐 차이이다.
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

public class ListSetDemo {
	public static void main(String[] args) {
		ArrayList<String> al = new ArrayList<String>();
		al.add("one");
		al.add("two");
		al.add("two");
		al.add("three");
		al.add("three");
		al.add("five");
		System.out.println("array");
		Iterator ai = al.iterator();
		while(ai.hasNext()) {
			System.out.println(ai.next());
		}
	
	HashSet<String> hs = new HashSet<String>();
	hs.add("one");
	hs.add("two");
	hs.add("three");
	hs.add("three");
	hs.add("five");
	Iterator hi = hs.iterator();
	System.out.println("\nhashset");
	while(hi.hasNext()) {
		System.out.println(hi.next());
	}
	}
	
}
/*list 의 속한 ArrayList 는 입력한 값이 6개 이기때문에 1,2,2,3,3,5 이렇게 들어간다
 * 하지만set 의 속해 있는 해쉬셋 같은경우 중복을 허용하지 않기 때문에 중복을 무시하고  1,2,3,5 만 들어간다
 * set은 각각의 저장된 값들은 각자가 고유 하다.
 * */
 