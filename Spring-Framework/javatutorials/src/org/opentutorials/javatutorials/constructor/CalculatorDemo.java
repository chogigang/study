package org.opentutorials.javatutorials.constructor;
//생성자 
class Calculator {
    int left, right;
 
    public Calculator(int left, int right) {//생성자,클래스가 생성할때 클래스가 똑같은 이름을 가지고 있는 생성자가 실행되도록 약속되어 있다.
        this.left = left;
        this.right = right;
    }//그리고 이생성자가 그 어떤 메소드보다 더 먼저 실행되도록 약속되어 있다.
    public void sum() {
        System.out.println(this.left + this.right);
    }
    
    
    public void avg() {
        System.out.println((this.left + this.right) / 2);
    }

	public static void main(String[] args) {
	
		 Calculator c1 = new Calculator(10, 20);// Calculator 생성자 ()안에있는것은 메소드를 호출하는방법
	        c1.sum();
	        c1.avg();
//인스턴스를 생성하는자. new가 앞에 붙어있기때문에 c1에 구체적인 인스턴스를 만들수있게된다.	 
	        Calculator c2 = new Calculator(20, 40);
	        c2.sum();
	        c2.avg();
	
	}

}

/*초기화
생성자
어떤 객체가 반드시 해야 될 일이 있을 때 그것을 별도의 생성자메소드로 만들어서
그 절차를 포함시켜서 이 객체를 사용하는 사람이 사용하기 위해 숙지해야 할 사안을 더 줄일 수 있도록
또는 반드시 해야하는 일을 놓치지 않도록 생성자 메소드를 쓴다.*/
