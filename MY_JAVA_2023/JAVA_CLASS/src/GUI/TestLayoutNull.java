package GUI;

import javax.swing.JButton;
import javax.swing.JFrame;

public class TestLayoutNull extends JFrame{
	private static final long serialVersionUID =1L;
	
	
	public TestLayoutNull() {
		setSize(350,200);
		setTitle("절대방식 배치");
		setVisible(true);
		
	}
	void Decorate() {
		JButton btnOK = new JButton("예");
		JButton btnNO = new JButton("아니요");
		
		btnOK.setSize(100,30);
		btnOK.setLocation(50,100);
		btnNO.setSize(100,30);
		btnNO.setLocation(180, 100);
		setLayout(null);
		
		add(btnOK);
		add(btnNO);
		
		setVisible(true);
	}
	
	public static void main(String[] args) {
		TestLayoutNull f = new TestLayoutNull();
		f.Decorate();
		
		
	}

}
