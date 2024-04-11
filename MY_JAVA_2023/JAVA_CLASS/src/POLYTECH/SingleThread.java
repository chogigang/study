package POLYTECH;

public class SingleThread {

	public static void main(String[] args) {
		
		try {
		 //task 1
		int sum =0;
		int i;
		for(i=0;i<100;i++) {
			sum+=i;
			
		}
		System.out.println("1부터 100까지의 합은 "+sum+"입니다.");	
		 
		// task 2
		
		i=0;
		while(true) {
	
				Thread.sleep(1000); //1초 동안 가만히 있기 
					i++;
			if(i==10) {
				System.out.println("10");
				break;
			}else {
				System.out.println(i+"초");
				
			}
		}
		
		//task 3
		char alp;
		for(alp='A';alp<='Z';alp++) {
			System.out.print(alp+"");
			
			Thread.sleep(500);
		}
		} //try 중괄호 
		catch (Exception e){
System.out.println(e);			
		}
		
		
	}//main 중괄
	
}
