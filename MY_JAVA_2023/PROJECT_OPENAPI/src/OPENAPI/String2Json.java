package OPENAPI;

import java.io.FileReader;
import java.io.IOException;

import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;

public class String2Json {

	public static void main(String[] args) throws ParseException, IOException {
		// TODO Auto-generated method stub

		//String str ="{\"name\":\"apple\",\"id\":\"1\",\"price\":\"2500\"}";
		
		FileReader reader = new FileReader("E:\\2024_JAVA\\WORK\\PROJECT_OPENAPI\\test.json"); //외부 파일 json 파일에서 읽어오기 
		
		
		
	JSONParser parser =new JSONParser(); //해석기
	//JSONObject jsonObject = (JSONObject) parser.parse(str); //읽어 들어오는것 
	JSONObject jsonObject = (JSONObject) parser.parse(reader); //읽어 들어오는것 
	
	
	
	System.out.println(jsonObject.get("이름"));
	System.out.println(jsonObject.get("번호"));
	System.out.println(jsonObject.get("가격"));
	

	
	}

}
