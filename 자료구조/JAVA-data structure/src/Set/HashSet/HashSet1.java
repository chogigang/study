package Set.HashSet;

import java.util.*;

//순서X ,중복X
//Set 인터페이스를 구현한 대표적인 자료구조중 자바 컬렉션 클래스
//순서를 유지하려면, LinkedHashSet 클래스를 사용하면 된다.
public class HashSet1 {  //                              저장순서를 유지하지 않기때문에 어느것이 int 이고  string 인지 조심해야한다.
        public static void main(String[] args){
                Object[] objArr ={"1",new Integer(1),"2","2","3","3","4","4","4"}; //중복된 값들은 다빠진다. 하지만 1은 2개가 출력한다 하나는 문자열, 하나는 int 값이기 때문에 1은 2번 출력한다.
                Set set = new HashSet();

                for (int i=0;i<objArr.length; i++){
                       // set.add(objArr[i]); //HashSet 에 저장된 요소들을 출력한다. //해당 코드를 주석 처리하고 밑 코드를 출력하면 중복하지 않는 것은  트루 중복하는 것은 false 가 출력될것이다.
                        System.out.println(objArr[i]+"="+set.add(objArr[i])); //중복하는 값은 false  중복되는 값은 true
                }
                System.out.println(set);// [1,1,2,3,4] 를 출력

                //HashSet에 저장된 요소들을 출력한다.(Iterator이용)
                Iterator it = set.iterator();

                while (it.hasNext()){//읽어올 요소가 있는지 확인 while 문으로 꺼내올 요소가 없을때까지 반복
                        System.out.println(it.next());//요소 하나 꺼내오기

                }
        }


}
