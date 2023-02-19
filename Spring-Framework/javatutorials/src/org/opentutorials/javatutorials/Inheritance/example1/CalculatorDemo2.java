package org.opentutorials.javatutorials.Inheritance.example1;
//다양한 종류의 상속
class MultiplicationableCalculator extends Calculator {//Calculator 메소드 값을 상속시키며 MultiplicationableCalculator 메소드를 정의
    public void multiplication() {
        System.out.println(this.left * this.right);
    }
}

public class CalculatorDemo2 {
 
    public static void main(String[] args) {
 
        MultiplicationableCalculator c1 = new MultiplicationableCalculator();//c1 에 MultiplicationableCalculator 메소드를 입력
        c1.setOprands(10, 20);
        c1.sum();
        c1.avg();
        c1.multiplication();
    }
 
}
/*기존의 메소드를 상속 시켜 메소드의 기능을+시킬수 있다 위  Calculator 메소드는 +,-만 가능했지만 상속으로 *의 기능을 추가시켯다*/