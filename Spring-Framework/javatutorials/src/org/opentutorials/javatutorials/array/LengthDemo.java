package org.opentutorials.javatutorials.array;

public class LengthDemo {

	public static void main(String[] args) {
		//String[] classGroup = {"철수","민수","민지","영지"};	
		String[] classGroup = new String[4];//문자열 대이터 타입 원소로 이루어져있는 배열은 4개로 이루어 져있다는 의미
		classGroup[0] = "철수";
		System.out.println(classGroup.length);//렝스가 위 String [4]<<를 인식 해서 출력함
		classGroup[1] = "민수";
		System.out.println(classGroup.length); //마찬가지 위 문자열 4를 인식 
		classGroup[2] = "민지";
		System.out.println(classGroup.length);// 4를 인식 하여 출력 
		classGroup[3] = "영지";
		System.out.println(classGroup.length);//4를 인식하여 출력

	}	

}	
	