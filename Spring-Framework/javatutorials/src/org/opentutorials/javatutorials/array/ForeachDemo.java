package org.opentutorials.javatutorials.array;

public class ForeachDemo {

	public static void main(String[] args) {
		String [] members = {"최전혁","최유빈","한아람"};
		for (String e : members) { /*for 문이 등장하는건 똑같다 이어 변수를 가저오고 (콜론:)을 하고 e라는 변수에
								    스트링을 지정하면 (:콜론) 뒤에 따라오는 데이터값을 동작할때마다 e에 
								    하나씩 꺼내서 e라는 변수에 담어주는거에 약속이 됨*/
			System.out.println(e+"이 상담을 받았습니다.");
		}
	}

	
}
