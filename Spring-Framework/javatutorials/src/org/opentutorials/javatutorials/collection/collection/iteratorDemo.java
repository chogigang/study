package org.opentutorials.javatutorials.collection;
//Collections framework iterator ,(.hasNext,next) 

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;

public class iteratorDemo {

	public static void main(String[] args) {

		Collection<Integer> A = new HashSet<Integer>();//컬랙션 인터페이스를 구현하고 있는 클래스 ,가급적이면 그 공통적인 상위 클래스 상위 데이터타입을 사용

		A.add(1);
		A.add(2);
		A.add(3);
					Iterator hi = A.iterator();//
					while(hi.hasNext()){// hi 안에 들어가 있는 값들이 존재하는지를 확인하는 거다. 위값들을 보면 1,2,3 일것이다.
					System.out.println(hi.next());//
				}
	}
}

/* 
 * iterator 사용법 중 hasNext, .next 사용방법을 알아봤다
 * 
 * iterator =반복자 
 * 
컨테이너에 담겨져 있는 값들을 하나하나 꺼내서 하나하나 어떠한 처리를 할 수 있도록 해주는 역할 을  하는 것이  iterator다 
 iterator(이터레이터)는 인터페이스 고 인터페이스는  3개 의 메소드를 가지고 있다

 has Next,  Next,   remove   이렇게 있지만 주로 has Next,Next 를 쓴다
 
 hi. next 는  안에 3개 값이 들어있기 때문에 트루가 되고 와일문이 발동하면서 밑에있는 
System.out.println(hi.next());

이 발동한다  그 다음 Next는  hi 안에 들어 있는 값 중 하나 예를 들면 1이라는 값을 리턴한다
그럼  next 리턴값이 1이 되고 hi 에 들어 있던 1이라고 하는 이 값은 삭제된다.
계속 반복 되면서 마지막에 넥스트를 호출해서  사라졋다면 hi.hasNext() 를 했을때
더이상 이터레이터 안에 가져올 값이 존재하지 없으면 해지 넥스트 리턴 값은 폴스 가 되면서 While 
문은 종료가 되고  반복작업은  종료가 된다.
iterator(이터레이터)에 담겨 있는 값은 실제  데이터가 아니고 참조 값만 가지고 있는 것이기 때문에
Next를 통해서 값들이 사라진다고 해서 오리지널  데이터의 값이 사라지는 것은 아니라는 사실을 기억해야한다





 * */

