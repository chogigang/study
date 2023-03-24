package Array;

import java.util.Arrays;

public class Array {

    public static void main(String[] args) {
        int[]	   arr   = {0,1,2,3,4};
        int[][]	arr2D = {{11,12,13}, {21,22,23}};

        System.out.println("arr="+Arrays.toString(arr));//배열 보기 좋게 출력
        System.out.println("arr2D="+Arrays.deepToString(arr2D));//2차원 배열

        int[] arr2 = Arrays.copyOf(arr, arr.length);//배열을 복사헤서 arr2 를 생성 length 는 5
        int[] arr3 = Arrays.copyOf(arr, 3);//3개만 복사
        int[] arr4 = Arrays.copyOf(arr, 7);//배열보다 크니깐 복사를 다하고  나머지 값들은 0으로 채운다.
        int[] arr5 = Arrays.copyOfRange(arr, 2, 4);// 2<=x<4 => 2~3 복사
        int[] arr6 = Arrays.copyOfRange(arr, 0, 7);//0부터 7까지 복사하고 나머지 부족한 값은 0으로 채움

        System.out.println("arr2="+Arrays.toString(arr2));
        System.out.println("arr3="+Arrays.toString(arr3));
        System.out.println("arr4="+Arrays.toString(arr4));
        System.out.println("arr5="+Arrays.toString(arr5));
        System.out.println("arr6="+Arrays.toString(arr6));

        int[] arr7 =  new int[5];  //5개짜리 arr7를 생성
        Arrays.fill(arr7, 9);  // arr=[9,9,9,9,9] 9로 다채워라
        System.out.println("arr7="+Arrays.toString(arr7));

        Arrays.setAll(arr7, i -> (int)(Math.random()*6)+1);//0~5+1 => 0~6 범위를  랜덤값으로 채우기 표현은 람다식으로 했음
        System.out.println("arr7="+Arrays.toString(arr7));//

        for(int i : arr7) { //향상된 for문
        //for(int x=0;x<arr7.length;x++) { 와 같음
        //    int i = arr7[x];
            char[] graph = new char[i]; //  새로운 캐릭터 배열을 생성 i 값만큼 배열 크기 지정
            Arrays.fill(graph, '*');// 생성된 배열안에 * 로 채움
            System.out.println(new String(graph)+i); //배열의 크기만큼 *를 문자열 로 출력하며 뒤에 I값을 같이 출력
        }

        String[][] str2D  = new String[][]{{"aaa","bbb"},{"AAA","BBB"}};
        String[][] str2D2 = new String[][]{{"aaa","bbb"},{"AAA","BBB"}};

        System.out.println(Arrays.equals(str2D, str2D2));     // false
        System.out.println(Arrays.deepEquals(str2D, str2D2)); // true 2차원 배열은 deepEquals 를 사용해야한다.

        char[] chArr = { 'A', 'D', 'C', 'B', 'E' };

        System.out.println("chArr="+Arrays.toString(chArr));
        System.out.println("index of B ="+Arrays.binarySearch(chArr, 'B'));//  binarySearch 해당 배열을 검색 배열의 정렬을 지정 안해서 잘못된 값이 출력
        System.out.println("= After sorting =");
        Arrays.sort(chArr); //이것이 배열의 정렬. binarySearch 하기전에 반드시 정렬먼저.
        System.out.println("chArr="+Arrays.toString(chArr));
        System.out.println("index of B ="+Arrays.binarySearch(chArr, 'B'));// binarySearch 값이 올바른 값이 출력
    }
}

