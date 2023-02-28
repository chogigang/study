package list2;

import java.util.ArrayList;
import java.util.LinkedList;

public class Main {
    public static void main(String[] args) {
        LinkedList number = new LinkedList();
        ArrayList<Integer> numbers2= new ArrayList<>();

          //배열
        int[]numbers1 = new int[4];//4크기의 배열
        String[] strings= new String[5];//5크기의 문자열 배열
        numbers1[0] = 10;//배열 추가
        numbers1[1] = 20;
        numbers1[2] = 30;

            int[] numbers = {10,20,30,40};//같이 배열추가
            int[] numbers3 = new int[] {10,20,30,40};//입력값이 예상되는 배열 추가
        System.out.println(numbers1[0]);//배열의 0번째 값을 가저오기
        System.out.println(numbers1[3]);//아직 값을 설정하지 않은 범위안에 베열을 불러오면 숫자는 0 문자는 null 이 출력
        // 배열의 방크기를 을 초과하는 수를 적으면 .ArrayIndexOutOfBoundsException 오류가 발생
        System.out.println(numbers1.length);//혖재배열로 입력된 방 크기, 즉 입력된 방 숫자를 출력함


        System.out.println();



        int i=0;//반복문 으로 배열 출력
        while (numbers1.length> i){//와일문(트루나 펄스) 이 값이 참인동안 중괄호 안에있는 구문이 실행
            System.out.println(numbers1[i]);
            i++;//i값을 1증가시키는 구문

        /*단점이 i의 초기값 코드, 반복조건의 코드,  I의 값을 1씩 증가 시키는 코드가
        * 하나로 응집되어 있지않고 흩어져 있기다  즉 다른 코드가 들어갈수 있다
        * 버그 발생확률이 높음*/
        }

        System.out.println();



        //for문은 각각 3개의 ;으로 3구간에 각각의 역활을 갖도록 약속 되어있다.
        /*첫번째느 초기값 설정,2번째는 트루인동안 실행 ,반복문이 끝날때마다 3번째가 발동*/
for(i=0;numbers1.length>i;i++){
    System.out.println(numbers1[i]);
}



    }

}
