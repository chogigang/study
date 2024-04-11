package POLYTECH;


import java.util.Scanner;
public class TestScanner {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("이름: ");
		
		String name =sc.nextLine();
		
		System.out.print("age: ");
		int age = sc.nextInt();
		
		System.out.println("==============회원 정보=============");
		
		System.out.println("name:"+name);
		System.out.println("나이:"+age);
		
		System.out.println("==================================");
		

	}

}
