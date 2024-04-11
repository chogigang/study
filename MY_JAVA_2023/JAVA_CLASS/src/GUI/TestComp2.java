package GUI;

import java.awt.GridLayout;
import java.util.Date;

import javax.swing.JFormattedTextField;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class TestComp2 extends JFrame{

	private static final long serialVersionUID =1L;
	
	
	public TestComp2() {
		setSize(600,200);
		setTitle("입력 컴포넌트 테스트");
		setVisible(true);
		
		
		
	}
	
	void Decorate() {
		JPanel p1 =new JPanel();
		JPanel p2 =new JPanel(); 
		JPanel p3 =new JPanel();
		
		p1.setLayout(new GridLayout(0,1,20,5)); //0세로 넣을때마다증가 1은 가로
		JLabel l1= new JLabel("이름");
		JLabel l2= new JLabel("암호");
		JLabel l3= new JLabel("생일");
		
		p1.add(l1); //p1 등록 
		p1.add(l2);
		p1.add(l3);
		
		p2.setLayout(new GridLayout(0,1,20,5));
		
		JTextField tf = new JTextField();
		tf.setText(" 홍길동");
		JPasswordField pwd = new JPasswordField();
		pwd.setEchoChar('*');
		
		JFormattedTextField date = new JFormattedTextField();
		date.setValue(new Date());
		p2.add(tf);
		p2.add(pwd);
		p2.add(date);//p2 등록 
		
		
		JLabel l4 = new JLabel("메모");
		JTextArea ta= new JTextArea(5,30);
		ta.setText(" 특징 사항을 입력해주세요 \n");
		
		p3.add(l4);
		p3.add(ta); //p3 등록 
		
		
		//  이미 Border  레이아웃에있기 때문에 Boder 를 따로 추가 안해도 된다.
		
		add(p1,"West");
		add(p2,"Center");
		add(p3,"South");
		
		
		
		
		setVisible(true);
		
		
		
	}
	public static void main(String[] args) {
		TestComp2 f =new TestComp2();
		
		f.Decorate();
		

	}

}
