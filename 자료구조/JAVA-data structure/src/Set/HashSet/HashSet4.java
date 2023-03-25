package Set.HashSet;

import java.util.*;


public class HashSet4 {
    public static void main(String args[]) {
        HashSet setA   = new HashSet(); //set A 에는 [1,2,3,4,5] 저장
        HashSet setB   = new HashSet(); //b 는 [4,5,6,7,8] 저장
        HashSet setHab = new HashSet(); // A와 B 의 합집합
        HashSet setKyo = new HashSet(); //  A와 B 의 교집합
        HashSet setCha = new HashSet(); // A 와 B 의 차집합

        setA.add("1");	 setA.add("2");  setA.add("3");
        setA.add("4");  setA.add("5");
        System.out.println("A = "+setA);

        setB.add("4");	 setB.add("5");  setB.add("6");
        setB.add("7");  setB.add("8");
        System.out.println("B = "+setB);


        //setA.addAll(setB);    //합집합. setB의 모든 요소를 추가(중복 제외)
        //setA.retainAll(setB); //교집합. 간단한 코드 공통된 요소만 남기고 삭제
        //setA.removeAll(setB); //차집합.  setB와  공통 요소를 제거


        //교집합
        Iterator it = setB.iterator(); //setB를 iterator B에서 값을 하나씩 읽어본다
        while(it.hasNext()) {
            Object tmp = it.next();//B에서 꺼낸다
            if(setA.contains(tmp))// 그리고 B에서 꺼낸 값이 A에 있는지 확인  있으면 true
                setKyo.add(tmp);// 트루가 확인 되면 추가
        }

        // 차집합
        it = setA.iterator(); //A의 값을 확인해본다
        while(it.hasNext()) {
            Object tmp = it.next();
            if(!setB.contains(tmp)) // A의 확인한 값을 B에 없는지 확인 없으면 true
                setCha.add(tmp);// 없으면 추가
        }

        // 합집합

        it = setA.iterator(); //A 값 확인
        while(it.hasNext())
            setHab.add(it.next()); //A에 있는거 다 넣기

        it = setB.iterator(); //B값 확인
        while(it.hasNext())
            setHab.add(it.next()); //B에 있는거 다 집어넣으면서 중복은빼기

        System.out.println("A ∩ B = " + setKyo);  // 한글 ㄷ을 누르고 한자키
        System.out.println("A U B = " + setHab);  // 한글 ㄷ을 누르고 한자키
        System.out.println("A - B = " + setCha);
    }

}
