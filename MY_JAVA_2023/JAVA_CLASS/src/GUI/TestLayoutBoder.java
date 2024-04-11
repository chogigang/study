package GUI;

import java.awt.BorderLayout;

import javax.swing.JButton;
import javax.swing.JFrame;

public class TestLayoutBoder extends JFrame{
	private static final long serialVersionUID =1L;
	public TestLayoutBoder() {
		setTitle("Border Layout");
		setSize(300,200);
		setVisible(true);
		
	}
	void Decorate() {
		setLayout(new BorderLayout(30,20 ));
		
		JButton btn1 = new JButton("북");
		JButton btn2 = new JButton("남");
		JButton btn3 = new JButton("서");
		JButton btn4 = new JButton("동");
		JButton btn5 = new JButton("중앙");
		add(btn1,"North");
		add(btn2,"South");
		add(btn3,"West");
		add(btn4,"East");
		add(btn5,BorderLayout.CENTER);
		setVisible(true);
		
	}

	public static void main(String[] args) {
		TestLayoutBoder f= new TestLayoutBoder();
		f.Decorate();
		
		

	}

}
