package POLYTECH;


import java.net.*;

public class ClientChatTest {

	public static void main(String[] args) {
		
		Socket socket = null;
		
		try {
			socket = new Socket("127.0.0.1",7050);
			System.out.println("======채팅방에 들어왔습니다.");
			
			SendThread st = new SendThread(socket);
			ReceiveThread rt = new ReceiveThread(socket);
			
			st.start();
			rt.start();			
			
		} catch(Exception e) {
			System.out.println(e);
		}
		
	}

}