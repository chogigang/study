package Arraylist1;

public class Main {
    public static void main(String[] args){
        ArrayLIst numbers = new ArrayLIst();
        numbers.addLast(10);
        numbers.addLast(20);
        numbers.addLast(30);
        numbers.addLast(40);
        numbers.add(1,15);//1 인덱스에 15 넣기
        numbers.addFist(5);//맨 앞에 5 넣기
       // numbers.indexOf();  //검색

        //numbers.remove(1); //해당 인덱스 값 삭제

       //System.out.println(numbers.remove(1)); //해당 인덱스 값 삭제하는 값 출력

        //numbers.removeFist(); // 맨앞 인덱스 삭제

        //numbers.removeLast(); // 마지막 인덱스 삭제

        //ArrayLIst.ListIterator li = numbers.listIterator(); //컬랙션에 저장된 요소들을 읽어오는 방법을 표준화
//        System.out.println(li.next());
//        System.out.println(li.next());
//        System.out.println(li.next());
//        System.out.println(li.next());
//        System.out.println(li.next());
//        System.out.println(li.next());
//        System.out.println(li.next());
//        System.out.println(li.next());
//        while (true){//값도 순차적으로 출력하고 선언했던 배열의 크기까지  null을 출력하다 에러를 만나고 뭠춤
//            System.out.println(li.next());
//        }

//        while (li.hasNext()){
//          System.out.println(li.next());
//       }

//        System.out.println(li.next());//순차적
//        System.out.println(li.next());
//        System.out.println(li.next());
//        System.out.println(li.next());
//        System.out.println( li.previous()); //반대로
//        System.out.println( li.previous());
//        System.out.println( li.hasPrevious());
//

        ArrayLIst.ListIterator li = numbers.listIterator();
        while (li.hasNext()){
            int number = (int)li.next();
            if(number == 30){//넘버가 30인 경우 트루
                li.add(35);//35로 변경 현제 조건문이 30 이면 발동하니 30이면 ->35로 변경
                li.remove();// Iterator remove 현제의 엘리먼트를 삭제 현제 조건문이 30이니 30이면 삭제
            }
        }

            //System.out.println(numbers.get(1)); //해당 인덱스값 가저오기
       // System.out.println(numbers.size());
       // System.out.println(numbers.indexOf(20));// 20이라는 값의 인덱스는 몇번인가?

//
//
//        for(int i=0; i<numbers.size(); i++){
//            System.out.println(numbers.get(i));//객체안에 있는 엘리먼트 들을 순처작으로 출력
//        }






       // System.out.println(numbers);
    }
}
