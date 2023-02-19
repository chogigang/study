package org.opentutorials.javatutorials.Inheritance.example3;
//인터페이스도 상속이 가능하다.
interface I3{
    public void x();
}
 
interface I4 extends I3{
    public void z();
}
 
class B implements I4{
    public void x(){}
    public void z(){}   
}

/*똑같이 클래스b 를 인터페이스 I4를 선언했을때 위 I4가 인터페이스 I3을 상속할때 메소드도
 * 똑같이 반드시 구현해야한다. 즉 인터페이스도 상속이 되고 상속된 인터페이스는 마치 클래스처럼
 * 부모 인터페이스가 갖고 있는 기능들을 그대로 자식들이 가지고 가게 된다는것이다.
 * 그리고 인터페이스의 멤버는 반드시 public 이여야 한다.
 *  */
 