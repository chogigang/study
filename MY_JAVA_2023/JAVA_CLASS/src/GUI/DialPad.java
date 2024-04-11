package GUI;

import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JFrame;

public class DialPad extends JFrame{

	private static final long serialVersionUID =1L;
	
	public DialPad() {
		setSize(300,200);
		setTitle("전화패드");
		setVisible(true);
		
	}
	void Decorate() {
		setLayout(new GridLayout(4,3,10,5));
		
		JButton btn1 = new JButton("1");
		JButton btn2 = new JButton("2");
		JButton btn3 = new JButton("3");
		JButton btn4 = new JButton("4");
		JButton btn5 = new JButton("5");
		JButton btn6 = new JButton("6");
		JButton btn7 = new JButton("7");
		JButton btn8 = new JButton("8");
		JButton btn9 = new JButton("9");
		JButton btna = new JButton("*");
		JButton btn0 = new JButton("0");
		JButton btnb = new JButton("#");
		
		
		
		add(btn1);
		add(btn2);
		add(btn3);
		add(btn4);
		add(btn5);
		add(btn6);
		add(btn7);
		add(btn8);
		add(btn9);
		add(btna);
		add(btn0);
		add(btnb);
		
		setVisible(true);
		
	}
	
	public static void main(String[] args) {
		DialPad f = new DialPad();
		f.Decorate();
		
		

	}

}
