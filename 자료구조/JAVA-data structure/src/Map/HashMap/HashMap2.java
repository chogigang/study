package Map.HashMap;

import java.util.*;

public class HashMap2 {
        public static void main(String[]args){
            HashMap map = new HashMap();
            map.put("김자바", new Integer(90));
            map.put("김자바", new Integer(100));// 키값일 일치하기 때문에 새로운값으로 바뀐다.
            map.put("이자바", new Integer(100));
            map.put("강자바", new Integer(80));
            map.put("안자바", new Integer(90));

            Set set = map.entrySet(); //엔트리 셋으로 가져오면 키,벨류가 하나로 묶여서 반환한다.
            Iterator it = set.iterator();

            while (it.hasNext()){
                Map.Entry e = (Map.Entry)it.next();//map 인터페이스,Entry 인터페이스(map 의 내부 인터페이스)
                System.out.println("이름:" +e.getKey()+", 점수: "+e.getValue());

            }
        set = map.keySet(); //이름만(Key)만 가져오고 싶을때
            System.out.println("참가자 명단: "+set);


            Collection values = map.values();//값들만 다 가져오는 것이 values
            it = values.iterator();

            int total = 0;

            while (it.hasNext()) {
                int i = (int)it.next();
                total += i; //가지고온 값들을 다 더하기.

            }
            System.out.println("총점 : " + total);
            System.out.println("평균 : " +(float)total/set.size()); //float를 안하면 정수로 나오기때문에 평균값이 정확하지 않을수 있다.
            System.out.println("최고점수 : " + Collections.max(values));
            System.out.println("최저점수 : " + Collections.min(values));


        }

}
