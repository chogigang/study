package Set.TreeSet;

import java.util.TreeSet;

public class TreeSet2 {
    public static void main(String[] args) {
        TreeSet set = new TreeSet(); //범위 검색에 유리 . (form~to)

        String from = "b";
        String to	= "d";

        set.add("abc");      set.add("alien");    set.add("bat");
        set.add("car");      set.add("Car");      set.add("disc");
        set.add("dance");    set.add("dZZZZ");    set.add("dzzzz");
        set.add("elephant"); set.add("elevator"); set.add("fan");
        set.add("flower");

        System.out.println(set);
        System.out.println("range search : from " + from  +" to "+ to); //b 하고 d 사이에 있는 단어들을 찾아서 출력
        System.out.println("result1 : " + set.subSet(from, to)); // subSet 의 사용 예시 d가 들어간 단어들은 안나온다  d 가 안들어가고 앞이기때문이다.
        System.out.println("result2 : " + set.subSet(from, to + "zzz")); //d가 들어간 단어들도 찾고 싶으면 zzz 앞에 d를 넣어 dzzz 를 입력하면 된다.
    }

}
