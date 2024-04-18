package POLYTECH;
 
import java.awt.EventQueue;
import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
 
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
 
public class WB03 {
 
	private JFrame frmSqlserver;
 
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) throws ClassNotFoundException{
		
		Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
		
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					WB03 window = new WB03();
					window.frmSqlserver.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
 
	/**
	 * Create the application.
	 */
	public WB03() {
		initialize();
	}
 
	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frmSqlserver = new JFrame();
		frmSqlserver.setTitle("SqlServer 데이터베이스 뷰어");
		frmSqlserver.setBounds(100, 100, 551, 426);
		frmSqlserver.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frmSqlserver.getContentPane().setLayout(null);
		
		JTextArea textDB = new JTextArea();
		textDB.setBounds(29, 86, 475, 293);
		frmSqlserver.getContentPane().add(textDB);
		
		JButton btnDBView = new JButton("DB VIEW");
		btnDBView.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				textDB.setText("");
				try {
					Connection conn = DriverManager.getConnection(
							"jdbc:sqlserver://127.0.0.1:1433;"
									+"databaseName = Madang;"
									+"user=mduser;"
									+"password=mdpass;"
									+"encrypt=true;"
									+"trustServerCertificate=true;");
					Statement stmt = conn.createStatement();
					ResultSet rset = stmt.executeQuery("SELECT * FROM CUSTOMER");
					while(rset.next()) {
						textDB.append(Integer.toString(rset.getInt(1)));
						textDB.append("\t");
						textDB.append(rset.getString(2));
						textDB.append("\t");
						textDB.append(rset.getString(3));
						textDB.append("\t");
						textDB.append(rset.getString(4));
						textDB.append("\n");
					}
					
					
//					Statement stmt = conn.createStatement();
//					ResultSet rset = stmt.executeQuery("SELECT * FROM Orders");//sql 쿼리문 
//					while(rset.next()) { //
//						textDB.append(Integer.toString(rset.getInt(1)));
//						textDB.append("\t");
//						textDB.append(Integer.toString(rset.getInt(2)));
//						textDB.append("\t");
//						textDB.append(Integer.toString(rset.getInt(3)));
//						textDB.append("\t");
//						textDB.append(Integer.toString(rset.getInt(4)));
//						textDB.append("\t");
//						textDB.append((rset.getString(5)));
//						textDB.append("\n");
//					}
					rset.close();
					stmt.close();
					conn.close();
				}catch(Exception e1) {}				
			}
		});
		btnDBView.setBounds(402, 26, 91, 23);
		frmSqlserver.getContentPane().add(btnDBView);
		
		JButton btnDBInput = new JButton("DB INPUT");
		btnDBInput.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
 
				String sendString;
				sendString = "INSERT INTO CUSTOMER(custid,name,address,phone) VALUES(6,'장은준','한국','010-1234-5678')";
				
				try {
					Connection conn = DriverManager.getConnection(
							"jdbc:sqlserver://127.0.0.1:1433;"
									+"databaseName = Madang;"
									+"user=mduser;"
									+"password=mdpass;"
									+"encrypt=true;"
									+"trustServerCertificate=true;");
					Statement stmt = conn.createStatement();
					stmt.executeUpdate(sendString);
 
					stmt.close();
					conn.close();
				}catch(Exception e1) {}					
			}
		});
		btnDBInput.setBounds(402, 53, 91, 23);
		frmSqlserver.getContentPane().add(btnDBInput);
	}
}

/*
 * 
 * 
 * */




