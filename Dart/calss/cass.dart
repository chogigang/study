// 클래스 cass 
/*

his.name 에서 this는 클래스를 의미한다.

- 인스턴스를 생성할 때 new 키워드는 붙여도 되고 붙이지 않아도 된다.

- final 키워드를 사용하여 생성자 생성시 name, leg를 변경하지 못하게 할 수 있다.

- String? _name 처럼 변수명 앞에 _가 붙으면 private를 의미하며, 같은 파일내에서만 private로 동작한다.
  Java는 Class 당 1개의 파일을 생성하는 것을 원칙으로 하고 있어 class 내에서만 private가 동작한다.

- 가시성 : 밑줄로 시작하지 않으면 모든 것이 공개(public)된다.
  자바처럼 public, protected, private 키워드를 별도로 사용하지 않는다.

*/ 

// void main(){
// Animal loin = Animal(name:'사자',leg:4);
// loin.move();

// Animal spider = Animal(name: '거미', leg: 8);
// spider.move();

// }

// class Animal {
// final String name;
// final int leg;



// //Animal(this.name, this.leg);
// Animal({required this.name, required this.leg});
// void move(){

//   print('${this.name}가 ${this.leg}개의 다리로 움직입니다.');
// }

// }

/*
상수를 선언할 때 final 키워드를 사용하는 이유와 const 키워드를 사용할 수 없는 이유에 대해 설명해 드리겠습니다.

final 키워드는 변수나 필드를 상수로 선언하는 데 사용됩니다. final로 선언된 변수는 한 번 초기화되면 값을 변경할 수 없습니다.
즉, 변수의 할당은 딱 한 번만 가능합니다. final로 선언된 필드는 클래스 내에서 값이 변경되지 않는 상수로 사용됩니다.

const 키워드는 컴파일 타임 상수를 선언하는 데 사용됩니다. const로 선언된 변수는 컴파일 시점에서 이미 값이 결정되어야 하며,
런타임 중에는 변경할 수 없습니다.

Dart에서는 const 키워드를 사용하여 상수를 선언할 때 몇 가지 제약이 있습니다.
예를 들어, const 키워드를 사용하여 객체를 생성할 때 해당 객체와 그에 포함된 모든 필드가 상수여야 합니다.
즉, 필드가 모두 final로 선언되어야 합니다. 이러한 제약 때문에 모든 필드가 상수인 경우에만 const 키워드를 사용할 수 있습니다.

따라서 주어진 코드에서 const 키워드를 사용할 수 없는 이유는 const 키워드는 클래스의 필드가 모두 상수여야 하기 때문입니다.
Animal 클래스의 name과 leg 필드는 생성자에서 초기화되기 때문에 런타임 중에 값이 결정되므로 컴파일 타임 상수로 간주되지 않습니다.
따라서 const 키워드를 사용할 수 없으며, 대신 final 키워드를 사용하여 필드를 상수로 선언할 수 있습니다.

 */



//  //getter / setter 예제

// void main(){
// Animal lion =Animal('사자',4);
// lion.name ='호랑이'; //setter  
// lion.move();

// Animal spider =Animal('거미', 8);
// spider.move();
// print(spider.name);//getter

// }

// class Animal{
// String?_name;
// final int leg;
// Animal(String name, int leg):this._name=name,this.leg=leg; 


//  // String get name {
//   //   return this._name ?? '';
//   // }

// String get name =>this._name?? ''; //getter

// void set name(String name){ //setter
// this._name=name;

// }
// void move(){
// print('${this._name}가 ${this.leg}개의 다리로 이동합니다.');

// }

// }


//static 은 인스턴스에 귀속되지 않고 class 에 귀속된다.

// class Employee {
//   static String? building;
//   final String name;
 
//   const Employee({
//     required this.name,
//   });
 
//   void workInfo(){
//     print('제 이름은 ${name}입니다. ${building} 건물에서 근무중입니다.');
//   }
// }
 
// void main() {
//   Employee.building = '르네상스호텔'; // static은 class 에 귀속된다.
//   Employee seungki = Employee(name: '승기');
 
//   seungki.workInfo();
 
//   Employee gildong = Employee(name: '길동');
//   gildong.workInfo();
// }


/*
Class Generic

- 제네릭(Generic) : 클래스를 정의할 때, 구체적인 타입(type)을 적지 않고 변수 형태로 적어 놓는 것이다. 
- 클래스를 선언하여 객체를 생성할 때, 구체적인 타입을 기재한다. 즉, 타입을 어떤 클래스 종류의 매개변수로 보는 것이다.

- 제네릭 프로그래밍(Generic Programming) : 작성한 코드를 다양한 타입의 객체에 대해 재사용하는 객체 지향 기법이다.

 */


// class Employee<T, V> {
//   // Generic : 타입을 외부에서 받을 때
//   final T name;
//   final V age;
 
//   const Employee({
//     required this.name,
//     required this.age,
//   });
 
//   void employeeInfo(){
//     print('제 이름은 ${name}이고, 나이는 ${age}살 입니다.');
//   }
 
//   void varType(){
//     print('name : ${name.runtimeType}, age : ${age.runtimeType}');
//   }
// }
 
// void main() {
//   Employee<String, int> seungki = Employee(name: '승기', age: 30);
//   seungki.employeeInfo();
//   print(seungki.runtimeType); // Employee<String, int>
//   seungki.varType(); // name : String, age : int
 
//   Employee<String, int> gildong = Employee(name: '길동', age: 35);
//   gildong.employeeInfo();
// }

/*
클래스 상속
- 클래스는 다른 클래스를 상속(Inheritance) 받을 수 있다.

- 상속 받을 때에는 extends라는 키워드를 사용한다.

- Dart에서는 하나의 클래스만 상속이 가능하다.

- 부모 클래스에 접근하기 위해서는 super 키워드를 사용한다.

- 자식 클래스에서 @override 키워드를 사용하여 부모 클래스 메소드를 오버라이드(재정의)할 수 있다.

- 자식 클래스에서 새로운 메소드를 추가할 수 있다.


 */

// void main(){
//   Animal spider = Animal(name: '거미', leg: 8);
//   spider.move();
 
//   Cat cat = Cat(name: '고양이', leg: 4);
//   cat.move();
//   cat.eat();
 
//   Dog dog = Dog(name: '개', leg: 4);
//   dog.move();
 
//   print('------ Type Comparison ---- ');
//   print(spider is Animal); // true
//   print(spider is Cat); // false
//   print(dog is Animal); // true
//   print(dog is Dog); // true
// }
 
// class Animal {
//   final String name;
//   final int leg;
 
//   //Animal(this.name, this.leg);
//   Animal({required this.name, required this.leg});
 
//   void move(){
//     print('${this.name}가 ${this.leg}개의 다리로 움직입니다.');
//   }
// }
 
// class Cat extends Animal {
//   Cat({required super.name, required super.leg});
 
//   void eat(){
//     print('${super.name}가 참치를 맛있게 먹고 있습니다.');
//   }
 
// }
 
// class Dog extends Animal {
//   Dog({required super.name, required super.leg});
 
//   @override
//   void move() {
//     //super.move();
//     print('${super.name}가 ${super.leg}개의 다리로 힘차게 달립니다.');
//   }
// }


/*
인터페이스
- Dart에서는 Interface라는 키워드 대신 class를 사용하여 인터페이스를 정의한다.

- 인스턴스 생성을 못하게 abstract 키워드를 붙이고, 메소드 정의만 하도록 한다.

- 인터페이스 구현은 implements 를 사용한다.

 */

// abstract class Food {
//   String? name;
//   void printName(); // 메소드 정의
// }
 
// class Fruit implements Food {
//   String? name;
 
//   Fruit(String name) : this.name = name;
 
//   void printName() { // 메소드 구현
//     print('Fruit name is ${this.name}!');
//   }
 
// }
 
// void main() {
//   Fruit fruit = Fruit('Apple');
//   fruit.printName();
// }

/*
Mixins
- 믹스인은 여러 클래스 계층에서 클래스의 코드를 재사용하는 방법이다.
- with 키워드를 사용하면 상속하지 않고 다른 클래스의 기능을 가져오거나 override 할 수 있다.
- 믹스인을 구현하려면 생성자를 선언하지 않는 클래스를 만든다.
- 믹스인을 일반 클래스로 사용하려면 class 대신 mixin 키워드를 사용한다.

 */

abstract class Super {
  void method() {
    print("Super");
  }
}
 
class MySuper implements Super {
  void method() {
    print("MySuper");
  }
}
 
mixin Mixin on Super {
  void method() {
    super.method();
    print("Sub");
  }
}
 
class Client extends MySuper with Mixin {}
 
void main() {
  Client().method();
}


/* 실행 결과
MySuper
Sub
*/

