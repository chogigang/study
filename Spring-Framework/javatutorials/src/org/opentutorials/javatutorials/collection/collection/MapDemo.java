package org.opentutorials.javatutorials.collection;
	// Collections framework Map 
	import java.util.*;
	public class MapDemo {
		public static void main(String[] args) {
			HashMap<String, Integer> a = new HashMap<String, Integer>();
			a.put("one", 1);//                        key    ,   value
			a.put("two", 2);//.put이라는 메소드는 컬랙션 인터페이스에는 존재하지 않고 map 인터페이스만 존재하는것이라 map에서만 사용가능하다
			a.put("three", 3);//첫번째 인자는 key, 두번째 인자는 value 가 된다.
			a.put("four", 4);
			System.out.println(a.get("one"));
			System.out.println(a.get("two"));
			System.out.println(a.get("three"));
			
			iteratorUsingForEach(a);
			iteratorUsingIterator(a);
		}
		static void iteratorUsingForEach(HashMap map){
			Set<Map.Entry<String, Integer>> entries = map.entrySet();//.Entry 는 get key,get value 를 가지고 있고<>안에는 순서대로 키데이터타입,밸류데이터타입 를 가지고 있다.
			for (Map.Entry<String, Integer> entry : entries) {//뒤에 entries 담겨저있는 형은 Set 형 이고 entries 안에 담겨저 있는 데이터 들을 하나하나 꺼내서 entry에 담는다
				System.out.println(entry.getKey() + " : " + entry.getValue());
			}//                 (HashMap 안에 키값)             (HashMap 안에 벨류 값)
		}
		//맵 자체는 (Iteration)이터레이션 기능이 없기 때문에 map의 담겨저 있는 데이터를 Map.Entry타입으로  set 인터페이스 타입으로 바꿧다 
		//이터레이션 이란 결과를 생성하기위한 프로세스의 반복
		static void iteratorUsingIterator(HashMap map){
			Set<Map.Entry<String, Integer>> entries = map.entrySet();
			Iterator<Map.Entry<String, Integer>> i = entries.iterator();// 위 방법과 비슷하고 iterator 를 통해 우리가 거기 있는 값을 반복할 수 있는 반복자를 얻어낼수 있는걸 i 라는 변수에 담았다.
			while(i.hasNext()){
				Map.Entry<String, Integer> entry = i.next();
				System.out.println(entry.getKey()+" : "+entry.getValue());
			}
		}
}

/*Map 에는 key값에는 중복이 허용되지 않는다
만약에 one ->1 일때 one->200이 들어오면
새로운 one은 못들어오고 기존에 있던 one->1이 one->200으로 바뀐다
valuer값은 중복이 허용된다.
만약에 two->2 가 있을때 three->2가 들어오는 것은 허용된다

주로 처음에 맵을 이용하면 해쉬맵을 사용한다고 보면된다

List와 Set은 그 값이 하나만 들어오기 때문에 구현할때
`List<String> a = new List<String>();` 이런식으로 쓸수있었다
하지만 맵은 들어오는 값이 두개이기때문에 제너릭에 `<String, Integer>` 이런식으로 두개의 값을 넣어줘야한다. 여기서 첫번째 String은  key, 두번째 Integer은  value이다. 

 * 
 * */
	

