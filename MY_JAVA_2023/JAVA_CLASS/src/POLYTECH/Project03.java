package POLYTECH;

import java.io.*;
public class Project03 {

	public static void main(String[] args) {
		
		try {
		FileWriter fw = new FileWriter("Exceltext.csv");
		fw.write("1,2,3,4,5\n");
		fw.write("6,7,8,9\n");
		fw.close();
		}catch(IOException e){
			System.out.println(e);
		}
		
		
	int i;
	char c;
	try {
	FileReader fr = new FileReader("Exceltext.csv");
	
	while((i=fr.read())!=-1) {
		c=(char)i;
		System.out.print(c);
	}
fr.close();
	}catch(IOException e) {
		System.out.println(e);
	}
	}

}
//csv 파일 csv 파일을기록할때 , 를 넣어주면 옆 차트로 넘어간다 