package GUI;
import java.awt.Color;
import java.awt.Container;

import javax.swing.JFrame;

public class Type2 extends JFrame{
	
	public Type2(String title) {
		setTitle(title);
		setSize(300,200);
		
		
		Container pane =getContentPane(); //백그라운드 컬러 추가 
		pane.setBackground(Color.PINK);
		
		setVisible(true);
		
		
	}
	
	public static void main(String[] args) {
		
		Type2 f= new Type2("타입2 윈도우 (상속형)");
		

	}

}
