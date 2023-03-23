package LinkedList1;

import java.security.spec.RSAOtherPrimeInfo;

public class Main {

    public static void main(String[] args){
        LinkedList numbers= new LinkedList();
//        numbers.addFirst(30);//인풋 값을 받아서 addFirst 를 동작 하게 하는것
//        numbers.addFirst(20);
//        numbers.addFirst(10);
        numbers.addlast(5);
        numbers.addlast(10);
        numbers.addlast(15);
        numbers.addlast(20);
        numbers.addlast(30);
//        System.out.println(numbers.node(0));//addlast 10을 가지고 있는 노드 객체가 리턴 할 것이다.
      //  numbers.add(1, 15);//지정한 엘리먼트 값에 추가
//        System.out.println(numbers.removeFist());//첫번째 인덱스 삭제
//        System.out.println(numbers.remove(2));//특정 인덱스 삭제
//        System.out.println(numbers.removeLast());//마지막 리스트 삭제
        System.out.println(numbers.size());// 사이즈 값 가져오기
        System.out.println(numbers.get(0));//어떤 특정한 엘리먼트값을 가져오는 것
        System.out.println(numbers);

    }
}
