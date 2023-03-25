package Map.HashMap;

import java.util.HashMap;
import java.util.Scanner;

/*
순서x ,중복(키x,값O)
        id 중복x pwd 중복O


*/
public class HashMap1 {
 public static void main(String[] args){
     HashMap map = new HashMap();

     map.put("myId","1234");
     map.put("asdf","1111");
     map.put("asdf","1234"); //마지막 값으로 적용된다.

     Scanner s = new Scanner(System.in); //화면으로부터 라인단위로  입력받는다.


    while (true){ //비밀번호 일치할때 까지 무한 반복문
        System.out.println("id와 password 를 입력해주세요.");
        System.out.println("id:");
        String id = s.nextLine().trim();

        System.out.print("Password:");
        String password = s.nextLine().trim(); //trim 은 공백 제거 "  1 23   4  " => "1234"
        System.out.println();

        if (!map.containsKey(id)){ //아이디가 이 key중에 있는지 확인
            System.out.println("입력하신 id는 존재하지않습니다. 다시 입력해주세요");
        continue; //다시 while 첫번째로 돌아가기.
        }
        if (!(map.get(id)).equals(password)){
            System.out.println("비밀번호가 일치하지 않습니다. 다시 입력해주세요.");
        }else {
            System.out.println("id와 비밀번호가 일치합니다.");
            break;
        }
    } //while
 } //main 의 끝

}





