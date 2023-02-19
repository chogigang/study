package org.opentutorials.javatutorials.Inheritance.example1;
class DivisionableCalculator extends MultiplicationableCalculator {//곱의 메소드를 가지고있으면서 자신의 디비전을 가지고 있게 된다,끈임없이 상속을 할수있다
    public void division() {//
        System.out.println(this.left / this.right);
    }
}
 //다양한 종루의 상속 
public class CalculatorDemo3 {
 
    public static void main(String[] args) {
 
        DivisionableCalculator c1 = new DivisionableCalculator();
        c1.setOprands(10, 20);
        c1.sum();
        c1.avg();
        c1.multiplication();
        c1.division();
    }
 
}

/*기존의 메소드를 상속 시켜 메소드의 기능을+시킬수 있다 위MultiplicationableCalculator 메소드는 +,-,*만 가능했지만 상속으로 /의 기능을 추가시켯다*/

