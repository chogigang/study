package org.opentutorials.javatutorials.collection;
 //Collections의 사용법과 정렬

import java.util.*;
 
class Computer implements Comparable{
    int serial;
    String owner;
    Computer(int serial, String owner){
        this.serial = serial;
        this.owner = owner;
    }
    public int compareTo(Object o) {//인자로는 오브젝트 데이터 타입을 봤는데 리턴값은 int 정수이여야 한다.
        return this.serial - ((Computer)o).serial;
    }
    public String toString(){
        return serial+" "+owner;
    }
}
 
public class CollectionsDemo {
     
    public static void main(String[] args) {
        List<Computer> computers = new ArrayList<Computer>();//어레이 리스트로 담았다
        computers.add(new Computer(500, "egoing"));
        computers.add(new Computer(200, "leezche"));
        computers.add(new Computer(3233, "graphittie"));
        Iterator i = computers.iterator();
        System.out.println("before");
        while(i.hasNext()){//어레이 리스트는 순서가 있기때문에 순서대로 출력이 될것이다.
            System.out.println(i.next());//그리고 저번시간 처럼 값을 찾고 출력하고 지우고 다시 그다음 값을 찾고 출력 지우고 반복문이다.
        }
        
        //낮은 숫자는 먼저 오고 큰 숫자는 뒤로 오도록 정렬하고 싶다면  Comparable 인터페이스를 사용 하셔야 된다.
        Collections.sort(computers);   /* Collections 이건 인터페이스가 아니라 클래스다 뒤에s가 있으니 그냥 클래스다. 
        
        이 클래스는 정렬이 라든지 어떤 여러가지 데이터와 관련된 작업들을 처리할 있도록 도와주는 클래스고 클래스 안에 여러 가지 매소드가 있는대 그외 메소드 들은 전부
        스태틱 이기 때문에 Collections 클래스를 이용할때는 인스턴스로 만들필요가 없이 스태틱 클래스 메소드로 추출하는것을  통해서 사용할 수 있다.
        
        .sort는 위 리스트 데이터 타입을 sort가 정렬해 준다.*/
        System.out.println("\nafter");
        i = computers.iterator();
        while(i.hasNext()){
            System.out.println(i.next());
        }
    }
 
}


/*sort는 List라는 매개변수를 가지고 있는대  그 매개변수의 데이터 타입은 List이다  
 * 즉 sort는  리스트 형식의 컨테이너 만을 정렬 해준다 라는것이다.
 * 리스트에 들어가는 값 리스트 데이터 타입의 담기게 되는 데이터 타입이 제네릭으로  돼어있다.
 * 제네릭은 어디에 있는 값을 참고 하느냐면  Comparable이라고 하는 인터페이스를 extends 해야 한다 
 * 즉 Comparable 를 구현 하고 있어야 된다 라는 뜻이다.
 *
 * 이 내용은 알고리즘,자료구조 의 공부가 더 필요하기 때문에 지금은 이해하기가 힘들다.
 * */




 