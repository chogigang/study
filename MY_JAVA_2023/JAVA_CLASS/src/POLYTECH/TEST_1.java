package POLYTECH;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.Timer;
import javax.swing.JLabel;
import javax.swing.JButton;

public class TEST_1 {

	private JFrame frame;
	private JTextArea textArea;
	private Timer timer;
	private JLabel lblNewLabel;
	private JButton btnNewButton;
	private JButton btnNewButton_1;
	

	/**
	 * Launch the application.
	 * @throws ClassNotFoundException 
	 */
	public static void main(String[] args) throws ClassNotFoundException {
		Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
		
		
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					TEST_1 window = new TEST_1();
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
	public TEST_1() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JScrollPane scrollPane = new JScrollPane();
		scrollPane.setBounds(54, 37, 365, 201);
		frame.getContentPane().add(scrollPane);
		
		textArea = new JTextArea();
		scrollPane.setViewportView(textArea);
		
		lblNewLabel = new JLabel("5초 뒤 프로그램 출력");
		lblNewLabel.setBounds(63, 9, 100, 16);
		frame.getContentPane().add(lblNewLabel);
		
		btnNewButton = new JButton("시작");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				startTimer();
			}
		});
		btnNewButton.setBounds(173, 4, 117, 29);
		frame.getContentPane().add(btnNewButton);
		
		btnNewButton_1 = new JButton("종료");
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
					stopTimer();
			}
		});
		btnNewButton_1.setBounds(302, 4, 117, 29);
		frame.getContentPane().add(btnNewButton_1);
		//startTimer();
		
	}
	private void startTimer() {
			if(timer!= null && timer.isRunning()) {
				timer.stop();
			}
			timer = new Timer(5000,new ActionListener() {
				public void actionPerformed(ActionEvent e) {
					updateTextArea();
				}
			});
		timer.start();
	}
	private void updateTextArea() {
		try {
			Connection conn = DriverManager.getConnection(
					"jdbc:sqlserver://database-2.cgmwzpw2thor.us-east-1.rds.amazonaws.com:1433;"
					+"databaseName=Madang;"
					+"user=admin;"
					+"password=sapass123;"
					+"encrypt=true;"
					+"trustServerCertificate=true"
					);
			Statement stmt =conn.createStatement();
			ResultSet rset = stmt.executeQuery("SELECT * FROM Book");
			
			textArea.append("----------------------------------------------------------------------------------------\n");
			while(rset.next()) {
				
				textArea.append(Integer.toString(rset.getInt(1))+"\t");
				textArea.append(rset.getString(2)+"\t");
				textArea.append(rset.getString(3)+"\t");
				textArea.append(Integer.toString(rset.getInt(4))+"\n");
			}
			rset.close();
			stmt.close();
			conn.close();
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	private void stopTimer() {
		if (timer !=null && timer.isRunning()) {
			timer.stop();
		}
		
	}
}
