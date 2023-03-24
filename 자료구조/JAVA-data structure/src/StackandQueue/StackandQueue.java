package StackandQueue;
import java.util.*;
public class StackandQueue {

public static void main(String[] args) {
    Stack st = new Stack();
    Queue q = new LinkedList(); //Queue 인터페이스의 구현체인 LinkedList 를 사용

    st.push("0");// 스택 저장
    st.push("1");//스택 저장
    st.push("2");

    q.offer("0");//Queue  저장
    q.offer("1");// 저장
    q.offer("2");// 저장

        System.out.println("= Stack");
        while (!st.empty()){
            System.out.println(st.pop());// 스택에서 요소 하나를 꺼내서 출력
        }
    System.out.println("=Queue");
        while (!q.isEmpty()){
            System.out.println(q.poll());//큐에서 요소 하나를 꺼내서 출력
        }

}

}
