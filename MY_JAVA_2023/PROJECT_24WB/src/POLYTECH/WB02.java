package POLYTECH;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
import java.awt.Font;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class WB02 {

	private JFrame frame;
	int m_data; // 데이터 보관
	int m_predata; //이전값임시 보관
	int m_flag; // 1:+   2:-   3:*; 4:/ 5: 나누기

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					WB02 window = new WB02();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public WB02() {
		initialize();
		
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setTitle("계산기 프로그램");
		frame.setBounds(100, 100, 373, 420);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lbData = new JLabel("0");
		lbData.setFont(new Font("Lucida Grande", Font.PLAIN, 20));
		lbData.setHorizontalAlignment(SwingConstants.RIGHT);
		lbData.setBounds(6, 135, 345, 31);
		frame.getContentPane().add(lbData);
		
		JButton btn0 = new JButton("0");
		btn0.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+0;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn0.setBounds(109, 336, 81, 29);
		frame.getContentPane().add(btn0);
		
		JButton btn1 = new JButton("1");
		btn1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+1;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn1.setBounds(16, 301, 81, 29);
		frame.getContentPane().add(btn1);
		
		JButton btn2 = new JButton("2");
		btn2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+2;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn2.setBounds(109, 301, 81, 29);
		frame.getContentPane().add(btn2);
		
		JButton btn3 = new JButton("3");
		btn3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+3;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn3.setBounds(202, 301, 81, 29);
		frame.getContentPane().add(btn3);
		
		JButton btn4 = new JButton("4");
		btn4.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+4;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn4.setBounds(16, 260, 81, 29);
		frame.getContentPane().add(btn4);
		
		JButton btn5 = new JButton("5");
		btn5.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+5;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn5.setBounds(109, 260, 81, 29);
		frame.getContentPane().add(btn5);
		
		JButton btn6 = new JButton("6");
		btn6.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+6;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn6.setBounds(202, 260, 81, 29);
		frame.getContentPane().add(btn6);
		
		JButton btn7 = new JButton("7");
		btn7.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+7;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn7.setBounds(16, 219, 81, 29);
		frame.getContentPane().add(btn7);
		
		JButton btn8 = new JButton("8");
		btn8.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+8;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn8.setBounds(109, 219, 81, 29);
		frame.getContentPane().add(btn8);
		
		JButton btn9 = new JButton("9");
		btn9.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data = m_data*10+9;
				lbData.setText(Integer.toString(m_data));
			}
		});
		btn9.setBounds(202, 219, 81, 29);
		frame.getContentPane().add(btn9);
		
		JButton btnPlus = new JButton("+");
		btnPlus.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_predata = m_data;
				m_data=0;
				m_flag = 1;  // +
				lbData.setText(Integer.toString(m_data));
				
			}
		});
		btnPlus.setBounds(295, 178, 72, 29);
		frame.getContentPane().add(btnPlus);
		
		JButton btnMius = new JButton("-");
		btnMius.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_predata = m_data;
				m_data=0;
				m_flag = 2; // - 
				lbData.setText(Integer.toString(m_data));
			}
		});
		btnMius.setBounds(295, 219, 72, 29);
		frame.getContentPane().add(btnMius);
		
		JButton btnMul = new JButton("x");
		btnMul.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_predata = m_data;
				m_data=0;
				m_flag = 3; // * 
				lbData.setText(Integer.toString(m_data));
			}
		});
		btnMul.setBounds(295, 260, 72, 29);
		frame.getContentPane().add(btnMul);
		
		JButton btnEqual = new JButton("=");
		btnEqual.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
			switch (m_flag){
			case 1: m_data= m_predata + m_data; break; //덧셈 	
			case 2: m_data= m_predata - m_data; break; //뺄셈 	
			case 3: m_data= m_predata * m_data; break; //곱셈
			case 4: m_data = m_predata / m_data; break; // 나눗셈
			case 5: m_data = m_predata % m_data; break; // 나머지

			}
			lbData.setText(Integer.toString(m_data));
			m_data = 0;
			}
		});
		btnEqual.setBounds(295, 336, 72, 29);
		frame.getContentPane().add(btnEqual);
		
		JButton btnClear = new JButton("C");
		btnClear.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				m_data =0;
				m_predata =0;
				lbData.setText(Integer.toString(m_data));
			}
		});
		JButton btnDivide = new JButton("/");
		btnDivide.addActionListener(new ActionListener() {
		    public void actionPerformed(ActionEvent e) {
		        m_predata = m_data;
		        m_data = 0;
		        m_flag = 4; // 
		        lbData.setText(Integer.toString(m_data));
		    }
		});
		btnDivide.setBounds(295, 301, 72, 29);
		frame.getContentPane().add(btnDivide);

		JButton btnModulo = new JButton("%");
		btnModulo.addActionListener(new ActionListener() {
		    public void actionPerformed(ActionEvent e) {
		        m_predata = m_data;
		        m_data = 0;
		        m_flag = 5; // %
		        lbData.setText(Integer.toString(m_data));
		    }
		});
		
		JButton btnToggleSign = new JButton("+/-"); //부호 변경 
		btnToggleSign.addActionListener(new ActionListener() {
		    public void actionPerformed(ActionEvent e) {
		        m_data = -m_data;
		        lbData.setText(Integer.toString(m_data));
		        
		    }
		});
		
		btnToggleSign.setBounds(16, 178, 72, 29);
		frame.getContentPane().add(btnToggleSign);
		
		btnModulo.setBounds(202, 178, 81, 29);
		frame.getContentPane().add(btnModulo);


		
		btnClear.setBounds(109, 178, 81, 29);
		frame.getContentPane().add(btnClear);
	}
}
