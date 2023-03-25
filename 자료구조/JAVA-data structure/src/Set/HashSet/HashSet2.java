package Set.HashSet;

import java.util.*;

public class HashSet2 {
    public static void main(String[] args){
        Set set = new HashSet();

        //set의 크기가 6보다 작은 동안 1~45 사이의 난수를 저장
        for (int i = 0; set.size()<6;i++){
            int num = (int)(Math.random()*45)+1;
            set.add(new Integer(num));
            //set.add(num); // 이것도 가능 컴파일러가(new Integer(num)) 로변환함

        }
        //밑쪽 코드를 주석 처리하면 정렬 기준 없이 아무 숫자들이나 출력함 [15,32,11,40,6] 이렇게 순서기준 없이 출력한다.
        List list = new LinkedList(set); //LinkedList(Collection c)   //set을 정렬하기 위해 LinkedList 에 넣음 ArrayList 도 상관없음
        Collections.sort(list);         //(Collection.sort(List list) sort의 매개변수는 list만 올수 있기때문이다.
        System.out.println(list);
        //정렬 : 순서유지
        //set : 정렬 불가.
        //set =>list 옮기고  list로 정렬
    }
}
