package Iterator1;

import java.util.*;



// map 에서는 Iterator 가 없다.
public class Iterator {
    public static void main(String[] args) {
      //  ArrayList c = new ArrayList();
   //   HashSet list = new HashSet(); //set은  Collection 의 자손 하지만 get이라는 자손은 없다. 그래서 밑  while문은 작동하지만 iterator를 사용하지 않는 for문은 작동하지 않는다.
       Collection c = new  ArrayList(); //참조 변수는 변하지 않았기때문에 HashSet()을 쓰든 TreeSet() 을 쓰든 아래 코드들은 상관안써도 된다.
    //앞 참조 변수를   HashSet, TreeSet,ArrayList 같은걸 하면 변경할때 또 나중에 일일이 밑에 값을 수정해야하는 번거로움이 있다.

         c.add("1");
         c.add("2");
         c.add("3");
         c.add("4");
         c.add("5");

        //import 문이 잘 안먹어서  java.util.Iterator 작성  원래 Iterator 만 작성해도 됌
        java.util.Iterator it = c.iterator();//  list 의 iterator 를 호출하면 iterator 객체를 얻고

        //iterator 는 1회용이다.  다쓰고나면 다시 얻어와야 한다.
        while(it.hasNext()) {//그다음 반복문을 이용해 하나씩 읽어오기
            Object obj = it.next();
            System.out.println(obj);
        }
           it= c.iterator();// 새로운 iterator 객체를 얻는다.

       while(it.hasNext()) { //새로받은  iterator 받아서 한번더 반복문을 이용해 하나씩 읽어오기
            Object obj = it.next();
            System.out.println(obj);
       }
         
//            for(int i=0;i<c.size();i++) { //for 문으로 list 값들 가져오기 
//                Object obj = c.get(i); // set 종류는 get 이 없기때문에 오류가 발생
//                System.out.println(obj);
//            }

    } // main
}
