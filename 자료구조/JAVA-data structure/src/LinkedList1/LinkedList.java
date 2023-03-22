package LinkedList1;

import org.w3c.dom.Node;

public class LinkedList {

    private Node head; //누가 첫번째 노드인가 하는 정보를 담는 헤드라는 변수를 선언
    private  Node tail; // 누가 마지막 대한 정보를 담을 테이블
    private  int size = 0;//몇개의  엘리먼트가 이 리스트에 담겨져 있는 사이지를 정의

    private class Node{//노드 객체 구현
        private Object data; //각각의 노드가  저장할 데이터 라는 변수에 들어가게 될것
        private Node next;//누가 다음 노드인가
//생성자를 이용해서 노드라는 객체가 생성될 때 그 객체를 초기화 해야한다.
        public Node(Object input){
           this.data = input;
           this.next = null;//누가 다음 노드인지 아직 생성자를 통해서 이 객체가 생성될 때는 알수 없기 때문에 null 로 지정

        }
     public String toString(){//객체를 보기 편하게 toString으로 구현
                return String.valueOf(this.data);//디버깅 이나 테스트 용으로 노드 객체를 system.out.println 같은걸로 찍어볼때  그 대이터값이 무엇인가를 출력해 준다
     }
    }
public void  addFirst(Object input){
    Node newNode = new Node(input);//노드라고 하는 클래스가 객체화 될것이고 그클래스의 생성자인 생성자 메소드의 input값이  public Node(Object input){ 로들어간다
    newNode.next = head;
    head =newNode;//링크드 리스트 내부적으로 유지하고 있는 head(누가 첫번째로 오느냐) 라는 변수
    size++;//값을 추가했기 때문에 사이즈값을 +1
    if (head.next == null){ //우리가 생성한 노드에 다음  노드가 존재 하지 않을때, 이 노드가 혼자 있을때
        tail = head;//마지막 노드는 head 와 같다 라는 뜻
    }
}

}
