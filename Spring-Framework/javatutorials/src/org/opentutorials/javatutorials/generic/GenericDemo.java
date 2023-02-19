package org.opentutorials.javatutorials.generic;
//제네릭
class EmployeeInfo{
    public int rank;
    EmployeeInfo(int rank){ this.rank = rank; }
}
class Person<T, S>{
    public T info;
    public S id;
    Person(T info, S id){ 
        this.info = info; 
        this.id = id;
    }


public <U> void printInfo(U info){
	System.out.println(info);
	}
	
}


public class GenericDemo {
public static void main(String[] args) {
EmployeeInfo e = new EmployeeInfo(1);
Integer i = new Integer(10);
Person<EmployeeInfo, Integer> p1 = new Person<EmployeeInfo, Integer>(e, i);
p1.<EmployeeInfo>printInfo(e);
p1.printInfo(e);
		}
	}





/*
 * <제네릭>
1. 제네릭이란?
- 클래스 내부에서 사용할 데이터 타입을 외부에서 지정하는 기법
- 클래스를 정의 할 때는 info의 데이터 타입을 확정하지 않고 인스턴스를 생성할 때 데이터 타입을 지정하는 기능이 제네릭

2. 제네릭을 사용하는 이유
컴파일 단계에서 오류가 검출된다.
중복의 제거와 타입 안전성을 동시에 추구

3. 제네릭의 특성
- 복수의 제네릭: 복수의 제네릭을 사용할 때는 <T, S>와 같은 형식을 사용한다. 여기서 T와 S 대신 어떠한 문자를 사용해도 된다. 
  하지만 묵시적인 약속(convention)이 있기는 하다.- 기본 데이터 타입과 제네릭: 제네릭은 참조 데이터 타입에 대해서만 사용할 수 있다.
  기본 데이터 타입에서는 사용할 수 없다. new Integer는 기본 데이터 타입인 int를 참조 데이터 타입으로 변환해주는 역할을 한다.
  이러한 클래스를 래퍼(wrapper) 클래스라고 한다.

4. 제네릭의 생략
5. 메소드에 적용
6. 제네릭의 제한
- extends
제네릭으로 올 수 있는 데이터 타입을 특정 클래스의 자식으로 제한할 수 있다.
 * 
 * */