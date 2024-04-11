package GUI;

import java.awt.Color;
import java.awt.Container;

import javax.swing.JButton;
import javax.swing.JFrame;

public class ComponentWin extends JFrame{

private static final long serialVersionUID =1L;

public ComponentWin() {
	
	setTitle(" 첫 버튼 프로그램 ");
	setSize(300,200);
	Container pane = getContentPane();
	pane.setBackground(Color.BLUE);
	setVisible(true);
	
}

public void addButton() {
	JButton btn =new JButton("버튼");
	add(btn);
	setVisible(true);
	
}
public static void main(String[] args) {
	
	JFrame.setDefaultLookAndFeelDecorated(true);
	ComponentWin f = new ComponentWin();
	
	try {
		Thread.sleep(5000);
	} catch (InterruptedException e) {
		
		e.printStackTrace();
	}

	f.addButton();
}

}
