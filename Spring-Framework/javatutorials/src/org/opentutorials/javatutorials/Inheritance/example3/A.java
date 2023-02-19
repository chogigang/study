package org.opentutorials.javatutorials.Inheritance.example3;

interface I1{
   public void x();
}

interface I2{
   public void z();
}

class A implements I1, I2{//하나의 클래스는 복수개의 인터페이스를 구현할수 있다.
   public void x(){}
   public void z(){}   
}
/*a클래스를 만들게 되면 a클래스는 a클래스가 구현하고 있는 인터페이스인
 * I1 메소드와 I2의 메소드를 반드시 구현해야한다.
 * 이것은 클래스가 좀 차이가있다 자바에서 클래스를 상속할 때는
 * 상속받는 클래스 즉 하위 클래스는 하나의 부모 클래스만을 상속받을수 있다라는 점과는 차이가 나는 
 * 구별 되는 점이라고 할 수 있다. */
 