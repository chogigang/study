// 리스트 메서드 정리



void main(){

//리스트 선언

var a=[1,2,3,4,5];
print(a);

// 리스트 인덱스 접근
print(a[2]); //3
print(a.first); //첫번째 인덱스 접근
print(a.last); // 마지막 인덱스 접근

//배열 추가
a.add(4);//끝에 값추가 
print(a);

a.addAll([10,11,12,13,14] ); //다수 요소 추가
print(a);

//중간에 새로운 값을 추가
a.insert(3, 0);// a.insert(index, element)
a.insertAll(5,[0,1]); //특정 위치에 여러 값을 넣고싶을때
print(a);

//리스트 원소 삭제

a.remove(1); //첫번째 값 삭제
print(a);

a.removeAt(2);//3번째 인덱스 값을 삭제
a.removeLast(); //마지막 원소 삭제
print(a);
a.removeRange(1, 3);//1번부터 3번까지  삭제 1,2 번 인덱스가 삭제 된다.
print(a);

print(a.length); //리스트 길이

print(a.contains(2));//리스트에 특정값이 있는지 확인하기 있으면 true 없으면 false 를 반환

print(a.isEmpty);//리스트가 비어있는지 확인 있으면 true 없으면 false 반환


//리스트 원소 검색
a.contains(0); 
//리스트가 어떤 원소를 갖고 있는지 확인하고 싶다면, contains 메소드를 쓸 수 있다.
// contains(value)를 하면 value가 들어있을 때 true, 그렇지 않을 때 false를 반환한다.

print(a.any((x) =>x<5));
print(a.every((x) =>x<10));
//리스트 안에 있는 원소 중 어떤 하나라도 주어진 조건을 만족하는지 알고 싶다면 any를 쓸 수 있다.
// 다음의 코드는 a 의 원소 중 5가 넘는 값이 하나라도 있는지 확인하는 문장이다. 
//이와 같이 any 안에 bool 타입을 반환하는 함수를 써서 구현할 수 있다. every도 마찬가지다.
// 특이한 건 함수 안의 매개변수가 하나라도 반드시 괄호 ()로 감싸줘야 한다는 사실이다.


//가장 왼쪽부터 원소 찾기
a.indexOf(0);

// 뒤에서 부터 찾고싶을때
a.lastIndexOf(0);

//리스트를 프린트 할 필요없이 문자열로 나타낸다.
a.toString();

//set 자료형으로 바꿔준다.
a.toSet();

//오름 차순으로 정렬
a.sort();
print(a);
//내림차순으로 정렬
a.sort((a, b) => b.compareTo(a));
a = a.reversed.toList();
print(a);
//무작위로 섞기
a.shuffle();
print(a);


// a.replaceRange(start, end, replacements) 리스트의 start부터 end까지 [replacements]로 변경하는 메소드이다.

//  a.reduce((value, element) => null) reduce() : reduce 메소드 안에 주어진 함수를 사용해 리스트 안의 원소를 연산해 하나의 값을 만드는 메소드이다. 
//E 타입을 반환하고, 주로 int형 리스트 등에서 주어진 값을 모두 더하는 데에 쓰인다.

a.join();

a.forEach((element) { }); // 다른언어의 forEach 랑 같다.





} 