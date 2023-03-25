package Set.TreeSet;


import java.util.*;

public class TreeSet1 {
    public static void main(String[] args) {
    Set set = new TreeSet(); //범위검색 ,정렬 .정렬 필요없음
        // Set set = new HashSet();//정렬 필요


    for (int i =0; set.size()<6 ; i++){
            int num = (int)(Math.random()*45) +1;
            set.add(num); //set.add(new Integer(num)); //비교 기준이 꼭 필요하다.
    }
        System.out.println(set);

    }

}








/*
이진 탐색 트리로 구현 범위 검색과 '정렬'에 유리한 컬렉션 클래스 from ~ to
이진 트리는 모든 노드가 최대 2개의 하위 노드를 갖음
데이터가 많을수록 HashSet 보다 데이터 추가 삭제에 시간이 더 오래 걸림
각 요소(node)가 나무(tree)형태로 연결(LinkedList 의 변형)


이진 탐색 트리
  이진 트리는 종류가 많음 그중 하나
부모보다 작은값은 왼쪽, 큰값은 오른쪽에 저장
단점은 데이터가 많아질수록 추가,삭제에 시간이 더 걸림(비교 횟수 증가)

데이터 저장 과정  boolean add(Object o ) <= 저장할 객체
                          1.equals()
                          2.hashcode()
                          set은 중복을 허용하지 않기때문에 중복을 확인하는 절차.
 */