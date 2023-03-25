package Map.HashMap;
import java.util.*;


//빈도수 계산
public class HashMap3 {
    public static void main(String[] args) {
        String[] data = { "A","K","A","K","D","K","A","K","K","K","Z","D" };

        HashMap map = new HashMap();

        for(int i=0; i < data.length; i++) {
            if(map.containsKey(data[i])) { //key를 포함?
                int value = (int)map.get(data[i]);
                map.put(data[i], value+1);  // 기존에 존재하는 키면 기존 값을 1증가
            } else { //key 가 없으면 else로 이동
                map.put(data[i], 1);	    // 긱존에 존재하지 않는 키는 값을 1로 저장
            }
        }

        Iterator it = map.entrySet().iterator();
            //결과를 출력
        while(it.hasNext()) {
            Map.Entry entry = (Map.Entry)it.next();
            int value = (int)entry.getValue();
            System.out.println(entry.getKey() + " : " +
                    printBar('#', value) + " " + value );//printBar 를 이용하면 해당 갯수만큼 #이 출력한다.
        }
    } // main

    public static String printBar(char ch, int value) {
        char[] bar = new char[value];

        for(int i=0; i < bar.length; i++)
            bar[i] = ch;

        return new String(bar); // String(char[] chArr)
    }

}
