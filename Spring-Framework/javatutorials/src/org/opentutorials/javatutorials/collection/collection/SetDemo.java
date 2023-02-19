package org.opentutorials.javatutorials.collection;
//Collections framework  set이란?

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

public class SetDemo {

	public static void main(String[] args) {

		HashSet<Integer> A = new HashSet<Integer>();//컬랙션 인터페이스를 구현하고 있는 클래스 

		A.add(1);
		A.add(2);
		A.add(3);
		HashSet<Integer> B = new HashSet<Integer>();
		B.add(3);
		B.add(4);
		B.add(5);
		HashSet<Integer> C = new HashSet<Integer>();
		C.add(1);
		C.add(2);
			System.out.println(A.containsAll(B)); // false 부분집합이 아니다 containsAll 메소드는  부분집합을 제공하고 있다. 
			System.out.println(A.containsAll(C)); // true  부분 집합이기 때문에 true 를 출력 한다.
			//A.addAll(B);  //a라는 집합에 b하는 집합을  합처서 a로 만든다 (합집합)            
			//A.retainAll(B); //retainAll 간직하다라는 뜻이며  A와B의 교집합 즉 3만 A에 담겠다 라는 뜻이다. 그리고 1,2를 뺀  3 만 출력한다.
			//A.removeAll(B);// removeAll 차집합 이며 b에 있는 3,4,5 중 중복 하는 3을뺀 A의 값 즉 1,2만 출력 한다.
				Iterator hi = A.iterator();//
				while(hi.hasNext()){// hi 안에 들어가 있는 값들이 존재하는지를 확인하는 거다. 위값들을 보면 1,2,3 일것이다.
					System.out.println(hi.next());//
				}
	}
}

/* Hash Set 만 살펴봄
 * 
 * 
 *
 * */

