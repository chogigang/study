package POLYTECH;

import java.util.Scanner;

class SharedMemory extends Thread{
	int x =5;
	Boolean isQuit = false;
	
} //class 중괄호 

class PlusThread extends Thread{
	SharedMemory shmem;
	public void run() {
	while(!shmem.isQuit) {
		System.out.println("x= "+shmem.x);
		try {
			Thread.sleep(1000); // 1초마다 
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		shmem.x++;
	}	
	
	} // run 중괄호 
	
	
} //class 중괄호 


class MinusThread extends Thread{
	SharedMemory shmem;
	public void run(){
		
		Scanner sc = new Scanner(System.in);
		
		while(shmem.x!=0) {
			sc.nextLine();
			shmem.x--;
			
			
		}
		shmem.isQuit= true;
		System.out.println(" 축하합니다현재 x가 0입니다 당신이 이겼습니다. ");
		
	}	
	
	
} //cass 중괄호 






public class SharedMemoryTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		PlusThread thP = new PlusThread();
		MinusThread thM = new MinusThread();
		
		
		SharedMemory shobj = new SharedMemory();
		
		thP.shmem = shobj; //c언어의 포인터  개념 
		thM.shmem = shobj; 
		
		thP.start();
		thM.start();
		
		

	} //main 중괄호 

}
