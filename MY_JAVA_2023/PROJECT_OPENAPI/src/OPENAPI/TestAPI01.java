package OPENAPI;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.net.URL;

public class TestAPI01 {

	public static void main(String[] args) throws UnsupportedEncodingException, IOException {
		// TODO Auto-generated method stub

		String result ="";
	
		URL url = new URL("https://api.odcloud.kr/api/15088397/v1/uddi:211da56d-2ba3-414b-9e73-e29065ed6249?page=1&perPage=10&returnType=JSON&serviceKey=Lv%2BNxXs1IsNjEducoENMAKDqnaeyobF%2FpoARIpgmiLwpk8%2FlWClbx7HSCNx1s8%2BD4OEWwD3%2BDz6mefsI6U1OYg%3D%3D");
		//날라올때 버퍼 처리를 해줘야함 
		BufferedReader bf; 
		bf = new BufferedReader(new InputStreamReader(url.openStream(),"UTF-8"));
		
		result =bf.readLine();
		System.out.println(result);
		
		
		
	
		
	}

}
