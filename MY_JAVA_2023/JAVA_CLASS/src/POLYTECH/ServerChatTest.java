package POLYTECH;

import java.net.*;

public class ServerChatTest {
 
	public static void main(String[] args) {
		ServerSocket serverSocket = null;
		Socket socket = null;
		
		try {
			serverSocket = new ServerSocket(7050);
			System.out.println("=====채팅방이 열렸습니다.======");
			socket = serverSocket.accept();
			System.out.println("상대방이 입장했습니다.");
			
			SendThread st = new SendThread(socket);
			ReceiveThread rt = new ReceiveThread(socket);
			
			st.start();
			rt.start();
 
		} catch(Exception e) {
			System.out.println(e);
		}
		
		finally {
			try {
				serverSocket.close();
			}catch(Exception e) {
				System.out.println(e);
			}
		}
	}
 
}