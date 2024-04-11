package POLYTECH;
import java.io.*;
public class Project02 {

	public static void main(String[] args) {
		try {
		FileWriter fw = new FileWriter("Test.txt");
		fw.write("my file.... and kikokikokikokikokiko");
		fw.close();
		}
		catch(IOException e) {
			System.out.println(e);
		}
		
		int i;
		char c;
		try {
		FileReader fr = new FileReader("Test.txt");
		while((i= fr.read())!=-1) {
			c=(char)i;
			System.out.print(c);
				
		}
		fr.close();
		}catch(IOException e) {
			System.out.println(e);
		}
		} //main 중괄호 

} //class 중괄호 
