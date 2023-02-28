package list2;

import java.util.ArrayList;
import java.util.Iterator;

public class arrayListName {
    public static void main(String[] args) {
        //Array List
        //생성
        ArrayList<Integer> numbers = new ArrayList<>();//제네릭을 사용해야하며 임포트를 해야한다.
        //생성, 추가
        numbers.add(10);
        numbers.add(20);
        numbers.add(30);
        numbers.add(40);
        System.out.println("add(값)");
        System.out.println(numbers);


        //사이에 추가
        numbers.add(1, 50);//리스트 인덱스 1 에 50이라는 값을 적용 위 기존 20은 뒤로 밀려감
        System.out.println("\nadd(인덱스,값)");
        System.out.println(numbers);

        //삭제
        numbers.remove(2);//해당 인덱스 의 리스트를 삭제 그리고 객체를 한칸 앞으로 당김 (사람 줄서기랑 비슷함)
        System.out.println("\nremove(인덱스)");
        System.out.println(numbers);


        // 불러오기 ->    numbers.get(2);
        System.out.println("\nget(인덱스 가져오기)");
        System.out.println(numbers.get(2));//2번째 인덱스 가져오기

        //사이즈 가져오기   length x -> numbers.size();
        System.out.println("\nsize(사이즈)");
        System.out.println(numbers.size());


    /*   반복문 (Iterator 인터페이스) ->  Iterator it= numbers.iterator();

     Iterator it = numbers.iterator();//it는 인터페이스
     while (it.hasNext()) { //hasNext가 트루일 때까지 반복 순환 hasNext 는 참 거짓을 나타내는 boolean 리턴값을 가진메소드
    //hasNext() 저 위 numbers라고 하는 저 어레이 리스트가 가져올수 있는 다음 엘리먼트(값)이 있냐?
            int value = (int) it.next(); // 반복
    //next 첫번째 데이터를 리턴해서 벨류에 담고 다시 와일문이 발동 그리곰 다음 엘리먼트 뽑고 반복

*/

       Iterator it = numbers.iterator();
        System.out.println("\ninteger");
        while (it.hasNext());{
            int value = (int) it.next();
            if (value == 30) {
                it.remove();//remove는 삭제문
            }
            System.out.println(value);
        }
        System.out.println(numbers);


    /*    //for문
       for(int value : numbers){
            System.out.println(value);
        }
        //포문 반복문이 돌아가면서 numbers 가 value 값안에 담기면서  {}중괄호 안에서 value를 사용할수 있게 된다.
       //실행하게 되면 numbers의 값을 하나하나 꺼내서 처리할수 있습니다.
      */
        System.out.println("\nfor each");
        for(int value :numbers){
            System.out.println(value);
        }

        System.out.println("\nfor");
        for(int i=0; i<numbers.size(); i++){
            System.out.println(numbers.get(i));
        }

    }
}