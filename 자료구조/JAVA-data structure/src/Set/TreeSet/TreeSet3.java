package Set.TreeSet;

import java.util.TreeSet;

public class TreeSet3 {
        public static void main(String[] args){
            TreeSet set = new TreeSet();
            int[] score = {80,95,50,35,45,65, 10, 100};

            for (int i=0; i<score.length; i++)
                set.add(new Integer(score[i])); //배열의 데이터를 treeset에 담기

            System.out.println("50보다 작은 값:" + set.headSet(50)); //50보다 작은값이 어떤것 인지 출력 //컴파일러가 new Integer()를 자동적으로 오토박싱 해준다.
            System.out.println("50보다 큰 값:" +set.tailSet(new Integer(50)));// 50보다 큰값이 어떤것 인지 출력
            System.out.println("40과 80사이의 값:" +set.subSet(40,80)); //40~80 사이에 있는 값을 출력 80 제외
        }

}

/*
    어떤 값을 기준으로  작은값은       headSet
    어떤 값을 기준으로     큰값       tailSet
특정값~특정값(특정값 마지막은 해당안됨)  subSet


*/