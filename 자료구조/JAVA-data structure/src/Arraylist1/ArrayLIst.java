package Arraylist1;

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

// 객체를 문자로 출력하는 상황에 쓰는 것  
public String toString(){
        String str ="[";
        for(int i=0; i< size; i++){
            str += elementData[i];
            if (i < size-1){
                str += ",";
            }
        }
        return str + "]";
}// 출력하면 [5,10,15,20,30,40] 이렇게 출력이 될것임


    // remove 삭제
    public Object remove(int index) {
        Object removed =elementData[index];//삭제하기전에 담는 것
        for(int i =index+1; i <=size-1; i++){
            elementData[ i - 1 ] = elementData[i];
        }
        size--;
        elementData[size] = null;
        return removed;
    }//삭제후 빈 공간을 인덱스의 값을 1씩 빼면서 앞으로 당겨오는 for문
    //remove는 삭제한 엘리먼트에 저장되어있던 값을 리턴 하도록 되어있다.


//첫번째 리스트 삭제
public Object removeFist(){
        return remove(0);
}
//마지막 리스트 삭제
public  Object removeLast(){
        return remove(size-1);
}


//해당 인덱스값 가저오기
    public Object get(int index) {
        return elementData[index];
    }

    //리스트의 크기(숫자) 알아보는것
    public int size() {
        return size;
    }

    //리스트에서 해당 값을 입려해 인덱스 검색 기능
    public int indexOf(Object o   ) {
        for(int i=0; i<size; i++){ // Array 리스트를 처음부터 쭉 훑어보는것
            if(o.equals(elementData[i])){
                return i;
            }
        }
        return -1; //찾는값이 없을때 실행
    }




    // Iterator 접근 인터페이스 컬랙션에 저장된 요소들을 읽어오는 방법을 표준화
    //하나를 출력하고 그뒤에 같은 출력문으로 출력해도 다음 값이 출력됨
    public ListIterator listIterator() {
    return new ListIterator();


    }

class ListIterator {
            private int nextIndex = 0;


            // 읽어 올 요소가 남아있는지 확인한다. 있으면 true.없으면 false를 반환한다.
        public boolean hasNext(){
                return nextIndex<size();
        }

    //  다음 요소를 읽어 온다. next()를 호출하기 전에 hasNext()를 호출해서 읽어올 요소가 있는지 확인하는 것이 안전하다
    public Object next(){
//       Object returnData = elementData[nextIndex];
//       nextIndex++;
//       return returnData;
//
   return elementData[nextIndex++];

    }



    // Iterator 반대로 출력
    public Object previous() {
            return elementData[--nextIndex];
    }

    //hasNext 의 반대
    public boolean hasPrevious() {
    return nextIndex> 0;
        }


        // Iterator add
    public void add(Object element) {
            ArrayLIst.this.add(nextIndex++,element);
    }


    // Iterator remove
    public void remove() {
            ArrayLIst.this.remove(nextIndex-1);
            nextIndex--;
    }
}






}
