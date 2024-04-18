package POLYTECH;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JButton;
import javax.swing.JLabel;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class WB01 extends JFrame {

	private static final long serialVersionUID = 1L;
	private JPanel contentPane;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					WB01 frame = new WB01();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public WB01() {
		setTitle("윈도우빌더 테스트 v1.0");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));

		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lbText = new JLabel("");
		lbText.setBounds(204, 147, 61, 16);
		contentPane.add(lbText);
		
		JButton btn_Click = new JButton("클릭");
		btn_Click.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				lbText.setText("Hello");
				
			}
		});
		btn_Click.setBounds(190, 67, 75, 29);
		contentPane.add(btn_Click);
		

	}
}
