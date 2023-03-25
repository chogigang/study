package Set.HashSet;

import java.util.*;


//HashSet 은 객체를 저장하기전에 기존에 같은 객체가 있는지 확인 같은 객체가 없으면 저장하고, 있으면 저장하지 않는다.
//boolean add(Object o) 는 저장할 객체의 equals()와 hashCode()를 호출
//기본적으로 equals()와 hashCode()가 오버라이딩 되어 있어야 함
public class HashSet3 {

    public static void main(String[] args) {
        HashSet set = new HashSet();

        set.add("abc");
        set.add("abc");//중복이라 저장 안됨
        set.add(new Person("David", 10));
        set.add(new Person("David", 10));

        System.out.println(set);
    }
}

// equals()와 hashCode()를 오버라이딩해야 HashSet이 바르게 동작.
    class Person{
        String name;
        int age;
        @Override
                public int hashCode(){
            // int hash(Object ... values); //가변인자
            return Objects.hash(name,age);//객체를 구별하는 기준이 인스턴스 변수(iv) 이다 iv 가 같으면  같은 객체
        }
        @Override
                public boolean equals(Object obj){
            if (!(obj instanceof Person)) return false; //오브젝트가 person 인지 확인  아니면 false 맞으면 Person p = (Person) obj;으로 넘어감

                Person p = (Person) obj; // obj 으로 형변환  형변환을 안하고 그냥  .equals(obj.name) 하면 오류걸림 obj이라는 객체는 name, age 가 없음 그래서 형변환을 해야함
                //나 자신(this)의 이름과 나이를 p와 비교
            return this.name.equals(p.name) && this.age==p.age;// 내가가지고 있는 네임과 p 가가지고 있는 이름이 같은지 확인 &&  나이도 마찬가지
        }

        Person(String name,int age){
            this.name = name;
            this.age = age;

        }
    public String toString() {
            return name+":"+age;
    }

    }

