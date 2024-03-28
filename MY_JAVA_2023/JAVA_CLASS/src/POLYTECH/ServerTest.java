package POLYTECH;

import java.io.*;
import java.net.*;

public class ServerTest {

	public static void main(String[] args) {
		ServerSocket serverSocket = null;

		Socket socket = null;

		try {
			serverSocket = new ServerSocket(5050);
			System.out.println("접속을 기다리고 있습니다.");
			socket = serverSocket.accept();
			System.out.println("연결.");

			BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream())); // 소켓에서 스트림으로
																										// 읽어서 택스트 형태로
																										// 바꿔준다.

			PrintWriter writer = new PrintWriter(socket.getOutputStream());

			System.out.println(reader.readLine());
			writer.println("서버에 접속하신 것을 축하드립니다.");
			writer.flush();
			
			

		} catch (Exception e) {
			System.out.println(e);
		}finally {
			try {
			socket.close();
			serverSocket.close();
			}catch(Exception e) {
				System.out.println(e);
				
			}
			
		}
		
	
	
	
	
	
	}
}
