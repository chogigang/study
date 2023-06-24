//제네릭 generic

void main() {
Lecture<String,String> lecture1 =Lecture('123', 'lecture1');
lecture1.printIdType();

Lecture<int,String> lecture2=Lecture(123, 'lecture2');
lecture2.printIdType();

}

// generic - 타입을 외부에서 받을때 사용
// 타입을 여러게 하고 싶으면 , 넣고 추가하면된다.
class Lecture<T,X>{
   final T id;
  final X name;

  Lecture(this.id, this.name);

void printIdType(){
  print(id.runtimeType);
}
}
