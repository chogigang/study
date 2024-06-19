package POLYTECH;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.awt.event.ActionEvent;

public class TEST_2 {

	private JFrame frame;
	private JTextField textFieldBookId;
	private JTextField textFieldBookName;
	private JTextField textFieldPublisher;
	private JTextField textFieldPrice;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					TEST_2 window = new TEST_2();
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
	public TEST_2() {
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
		
		JLabel lblNewLabel = new JLabel("Book ID:");
		lblNewLabel.setBounds(19, 29, 61, 16);
		frame.getContentPane().add(lblNewLabel);
		
		textFieldBookId = new JTextField();
		textFieldBookId.setBounds(139, 24, 130, 26);
		frame.getContentPane().add(textFieldBookId);
		textFieldBookId.setColumns(10);
		
		JLabel lblBookname = new JLabel("BookName");
		lblBookname.setBounds(19, 77, 80, 16);
		frame.getContentPane().add(lblBookname);
		
		JLabel lblPublisher = new JLabel("Publisher");
		lblPublisher.setBounds(19, 130, 80, 16);
		frame.getContentPane().add(lblPublisher);
		
		JLabel lblPrice = new JLabel("Price");
		lblPrice.setBounds(19, 177, 61, 16);
		frame.getContentPane().add(lblPrice);
		
		textFieldBookName = new JTextField();
		textFieldBookName.setColumns(10);
		textFieldBookName.setBounds(139, 72, 130, 26);
		frame.getContentPane().add(textFieldBookName);
		
		textFieldPublisher = new JTextField();
		textFieldPublisher.setColumns(10);
		textFieldPublisher.setBounds(139, 125, 130, 26);
		frame.getContentPane().add(textFieldPublisher);
		
		textFieldPrice = new JTextField();
		textFieldPrice.setColumns(10);
		textFieldPrice.setBounds(139, 172, 130, 26);
		frame.getContentPane().add(textFieldPrice);
		
		JButton btnNewButton = new JButton("Update");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				UpdateBookInfo();
			}
		});
		btnNewButton.setBounds(301, 222, 117, 29);
		frame.getContentPane().add(btnNewButton);
	}
	private void UpdateBookInfo() {
		String bookid = textFieldBookId.getText();
		String bookname = textFieldBookName.getText();
		String publisher = textFieldPublisher.getText();
		String price = textFieldPrice.getText();
		
	
			try {
				Connection conn = DriverManager.getConnection(
						"jdbc:sqlserver://database-2.cgmwzpw2thor.us-east-1.rds.amazonaws.com:1433;"
						+"databaseName=Madang;"
						+"user=admin;"
						+"password=sapass123;"
						+"encrypt=true;"
						+"trustServerCertificate=true"
						);
				
				String sql ="UPDATE Book SET bookname =?,publisher =? ,price =? WHERE bookid =?";
				PreparedStatement pstmt =conn.prepareStatement(sql);
				pstmt.setString(1, bookname);
				pstmt.setString(2, publisher);
				pstmt.setInt(3, Integer.parseInt(price));
				pstmt.setInt(4, Integer.parseInt(bookid));
				int rowsAffected =pstmt.executeUpdate();
				if(rowsAffected >0) {
					JOptionPane.showConfirmDialog(frame, "업데이트");
				}else {
					JOptionPane.showConfirmDialog(frame, "책 id를 찾을수 없다.");
				}
				pstmt.close();
				conn.close();
				
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
				JOptionPane.showConfirmDialog(frame, "오류 메시지 "+e.getMessage());
			}
	
		
		
	}

}
