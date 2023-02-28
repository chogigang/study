package list;

public class ArrayLIst {
private int size = 0;
    private Object[] elementData = new Object[100];
    //고정된 크기

    //추가
    public boolean addLast(Object element){
        elementData[size] = element;
        size++;//추가할때마다 사이즈 증가
        return true;
    }

    //인덱스 사이에 추가
public boolean add(int index, Object element){
        for (int i = size - 1; i >= index; i--){// size -1을 안하면 배열의 최대값까지 저장된 경우  elementData[i+1]하는 부분에서 배열 범위를 벗어나기 때문에 적어줘야함
            elementData[i+1]= elementData[i];
        }
        elementData[index] = element;
        size++;
        return true;
 }

 //첫번째 인덱스에 만들고 나머지 배열 뒤로 밀어내기
public boolean addFist(Object element){
        return add(0,element);
}

}
