package OPENAPI;
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.URL;
 
import org.json.simple.parser.JSONParser;
import org.json.simple.JSONObject;
import org.json.simple.JSONArray;
 
public class testAPI02 {
 
	public static void main(String[] args) {
 
		
		String key="Lv%2BNxXs1IsNjEducoENMAKDqnaeyobF%2FpoARIpgmiLwpk8%2FlWClbx7HSCNx1s8%2BD4OEWwD3%2BDz6mefsI6U1OYg%3D%3D";
		String result="";
		
		try {
		
			URL url = new URL("https://api.odcloud.kr/api/15088397/v1/uddi:211da56d-2ba3-414b-9e73-e29065ed6249?page=1&perPage=10&returnType=JSON&serviceKey="+key);		
			BufferedReader bf;
			bf = new BufferedReader(new InputStreamReader(url.openStream(),"UTF-8"));
			
			result = bf.readLine();
			
			System.out.println(result);		
 
			JSONParser jsonParser = new JSONParser();
 
			JSONObject jsonObject = (JSONObject)jsonParser.parse(result);
			System.out.println("읽은 데이터 갯수 "+jsonObject.get("currentCount"));
			System.out.println("연계 데이터 갯수 "+jsonObject.get("matchCount"));
			System.out.println("전체 데이터 갯수 "+jsonObject.get("totalCount"));
			System.out.println("현재 페이지 "+jsonObject.get("page"));
			System.out.println("페이지 당 데이터 갯수 "+jsonObject.get("perPage"));
 
			JSONArray dataArray = (JSONArray)jsonObject.get("data");
			
			JSONObject dataObject;
			if(dataArray.size()>0) {
				for(int i=0;i<dataArray.size();i++) {
					dataObject = (JSONObject)dataArray.get(i);
					System.out.println("연번 "+dataObject.get("연번"));
					System.out.println("사업장명 "+dataObject.get("사업장명"));
					System.out.println("전화번호 "+dataObject.get("전화번호"));					
				}
			}
			
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
 
}