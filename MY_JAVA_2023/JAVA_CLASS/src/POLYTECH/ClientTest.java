package POLYTECH;


import java.io.*;
import java.net.*;

public class ClientTest {

	public static void main(String[] args) {

		Socket socket = null;
		
		try {
			socket = new Socket("127.0.0.1",5050);
			
			BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			PrintWriter writer = new PrintWriter(socket.getOutputStream());

			writer.println("클라이언트가 접속했습니다.");
			writer.flush();
			
			System.out.println(reader.readLine());

		}catch(Exception e) {
			System.out.println(e);
		}
		finally {
			try {
				socket.close();
			}catch(Exception e) {
				System.out.println(e);
			}
		}
	}
}