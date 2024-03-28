package POLYTECH;

import java.io.*;
import java.net.*;

public class ClientTest {

	public static void main(String[] args) {
		Socket socket = null;

		try {
			socket = new Socket("192.168.18.128", 5050);
			BufferedReader reader = new BufferedReader(

					new InputStreamReader(socket.getInputStream()));

			PrintWriter writer = new PrintWriter(socket.getOutputStream());
			writer.println("안녕 나는 이야! ");
			writer.flush();
			System.out.println(reader.readLine());

		} catch (Exception e) {
			System.out.println(e);
		} finally {

			try {
				socket.close();
			} catch (Exception e) {

			}
		}
	}
}
