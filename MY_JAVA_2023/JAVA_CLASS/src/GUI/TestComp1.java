package GUI;

import java.awt.Color;
import java.awt.GridLayout;

import javax.swing.ButtonGroup;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JRadioButton;

public class TestComp1 extends JFrame {
	private static final long serialVersionUID =1L;
	
	public TestComp1() {
		
		setTitle("컴포넌트 테스트 1 ");
		setSize(600,400);
		setVisible(true);
		
	}
	void Decorate() {
		JPanel p  = new JPanel(new GridLayout(2,1));
		JPanel p1 = new JPanel();
		JPanel p2 = new JPanel();
		
		p1.setBackground(Color.RED);
		p2.setBackground(Color.YELLOW);
		
		JCheckBox box1 =new JCheckBox("골프",true);
		JCheckBox box2 =new JCheckBox("스키",false);
		JCheckBox box3 =new JCheckBox("승마",false);
	
		p1.add(box1);
		p1.add(box2);
		p1.add(box3);
		
		
		
		
		JRadioButton r1 = new JRadioButton("기사",false);
		JRadioButton r2 = new JRadioButton("산업기사",true);
		JRadioButton r3 = new JRadioButton("기능사",false);
		
		p2.add(r1);
		p2.add(r2);
		p2.add(r3);
		
		ButtonGroup bg = new ButtonGroup();
		bg.add(r1);
		bg.add(r2);
		bg.add(r3);
		
		
		
		p.add(p1);
		p.add(p2);
		
		add(p);
		setVisible(true);
	}
	
	
	public static void main(String[] args) {
		TestComp1 f =new TestComp1();
		f.Decorate();
		
		
	}
	

}
