package POLYTECH;
 
 
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
 
public class TestSelectDB {
	public static void main(String[] args) {
 
		try {
			Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
			Connection conn = DriverManager.getConnection(
					"jdbc:sqlserver://192.168.18.128:1433;"// 자기 서버로 접속
							+"databaseName = Madang;" //db 이름
							+"user=mduser;" // 아이디 
							+"password=mdpass;" //비밀번호 
							+"encrypt=true;" 
							+"trustServerCertificate=true;");
			Statement stmt = conn.createStatement();
			ResultSet rset = stmt.executeQuery("SELECT * FROM Orders");//sql 쿼리문 
			while(rset.next()) { //
				System.out.println(rset.getInt(1)+" "+
						rset.getInt(2)+" "+
						rset.getInt(3)+" "+
						rset.getInt(4)+" "+
						rset.getString(5));
			}
			rset.close();
			stmt.close();
			conn.close();
		}catch(Exception e) {}
	}
}
