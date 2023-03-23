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
public void  addlast(Object input){
        Node newNode = new Node(input);
        if(size == 0){
            addFirst(input);
        }else {
            tail.next = newNode;//tail 은 가장 끝에 있는 Node 를 가르킨다  tail.next를 새로운 노드에 지정
            tail =newNode;
            size++;
        }
}
 Node node(int index){ //기본적으론 내부적으로 사용하기 때문에 public 으로 지정 하는것은 바람직 하지 않다.
        Node x =head;// 내부적인 부품이 외부로 노출되면 안된다.
      for(int i=0; i < index; i++){
          x = x.next;
      }

        return x;

    }
public void  add(int k,Object input){
        if(k == 0 ){
            addFirst(input);
        }else {
           Node temp1 = node(k-1);//추가할 노드의 앞쪽값을 추가
           Node temp2 = temp1.next;//추가한 값의 다음값을 알아낼때
            Node newNode = new Node(input);
            temp1.next = newNode;//알아낸 앞쪽값에서 노드를 추가추가
            newNode.next = temp2;//알아낸 다음값은 추가한값기준 뒤로 이동
            size++;//사이즈 증가
            if (newNode.next == null){//만약 추가한노드 다음에 값이 null이면
                tail = newNode;//맨끝자리는 새로운 노드 이다. tail=맨끝자리
            }
        }

    }
public String toString(){// 사람이 보기 편하게 만들어주는 toString
        if(head == null){
            return "[]";
        }
        Node temp= head;//헤드값이 누군지 찾아야 하기 때문에 템프라는 변수에 헤드를 선언
        String str ="[";//최종 적으로 출력값을 str 이라고 하는  변수에 담을것이다.

        while (temp.next != null){//첫번째 노드가 다음노드를 지정하고 있다면 while 문이 실행 된다.
            str += temp.data + ",";//str이라는 변수에 현제 temp 값이 추가가 되고  그 뒤에 값과 값을 구분해주는 구분자인 ,를 찍는다. 현제 temp 의 값을 string 에다 기록을 했기 때문에 이제 다음 노드로 움직일때가 된것이다.
            temp = temp.next;//현재 temp에 next 값으로 바꾸는 것이다. 그리고 while 문에  (temp.next != null) 이 구문으로 들어올 것이다. 이것이 트루라면 계속 반복
        }
            str += temp.data;
    return str+"]";//리턴값은 str +] 끝낸다.
    }

    public Object removeFist() { //자바의 기본적인 컬렉션 프레임 워크는 remove를 했을때 삭제된 노드가 같고있었던 값을 리턴해 주게 되어있다.
            Node temp =head;// head가 가르키고 있는  노드가 temp가 된다. 그리고 첫번째  삭제할려고 하는 노드를 우리가 템프에 기록했기 때문에 헤드는 더이상 기존 헤드를 가르킬 이유가 없다
            head = head.next;//기존에 가르키고 있던 헤드를 뒤에 있는 값 next Node 한태 head를 변경해서 가르킨다.
        //어떠한 노드를 삭제를 하면 그노드가 가지고 있었던 데이터 값 을 리턴해야하기 때문에 temp 가 가르키고 있는 노드를 삭제 하기전에  그 노드가 가지고 있었던 값을 returnData로 옮겨 놔야하고 그후 삭제해야한다.
    Object returnData = temp.data;//리턴 데이터를 일단 temp.data 로 일단 대피
        temp = null;
        size--;//사이즈를 -1 감소
        return returnData;// 대피 시켜놨던 리턴 데이터를 리턴해서  작업을 끝낸다.
    }
public Object remove(int k ){ //특정 노드 삭제
        if(k == 0){
            return  removeFist();
        }
        Node temp = node(k -1);// 삭제 할려는 인덱스 값의 앞 인덱스 를 알아내는 작업이다 만약 remove(2) 를 했다면 인덱스 1의 값을 알아내는 것
        Node todoDeleted = temp.next; //temp.next 를 todoDeleted 라는 변수로 만들었다. 이변수는 우리가 삭제할려는 노드
        temp.next = temp.next.next;// temp 의 가르키는 노드에 다음노드가 삭제할려는 노드이기때문에 todoDeleted 를 가르키고 삭제할려는 노드를 별도에 변수로 가르킨다
    //그리고 temp 로 가르키는 next 값을  temp의 next.next 로 지정하면서 todoDeleted 로 선언한 노드는 링크값이 없어졌기 때문에 list 의 소속이 아니게 된다.
        Object returnData = todoDeleted.data; //삭제할려고 하는 노드값을  리턴 데이터에 담아야하니 todoDeleted 값을 returnData라는 변수에 담는 것
        if(todoDeleted== tail){//삭제 할려고 하는 노드가 맨 끝 노드라면
         tail =temp; //tail 은    삭제하는 노드의 이전 노드 로 변경한다.
        }
        todoDeleted = null;
        size--;//삭제 시켯으니 사이즈를 -1 로 감소 시키기
            return returnData;// 삭제하기전 리턴 데이터를  리턴해주면 삭제 작업은 끝이 난다.
    }

    public Object removeLast(){
        return remove(size-1);//사이즈는 몇개의 엘리먼트가 있는가 마지막노드는 사이즈에서 1을 뺀것이 마지막 노드 의 인덱스 값이 된다.
    }
public int size(){// 엘리먼스 숫자,  해당 List의 사이즈 값을 알아내기
        return size;
}
public Object get(int k){// 특정 엘리먼트값을 가져오는것
        Node temp = node(k);
        return temp.data;
    }

}
