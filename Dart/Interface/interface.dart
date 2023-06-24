//인터페이스 
void main() {
BoyGroup bts =BoyGroup('bts');
GirlGroup readVelvet = GirlGroup('레드벨벳');
// IdolInterface test = IdolInterface('블랙핑크'); //추상클래스로 설정 했기때문에 바로 만들순 없음 무조건 클래스를 한번 거쳐야함 
bts.sayName();
readVelvet.sayName();

print(bts is IdolInterface); //true
print(bts is BoyGroup); // true
print(bts is GirlGroup); // false

print(readVelvet is IdolInterface); //true
print(readVelvet is BoyGroup); // flase
print(readVelvet is GirlGroup); // true

}


//interface
// 강제적으로 구조를 맞추도록 강제 하기 때문에 인터페이스를 하나 만들어 놓으면
// 개발자들 끼리 소통을 하지 않더라도 인터페이스를 통해서 규격을 일치시키거나 할수있다.

abstract class IdolInterface{
  String name;

  IdolInterface(
    this.name);
    void sayName(){}
}


class BoyGroup implements IdolInterface{
  String name;
  BoyGroup(this.name);
  void sayName(){
    print('제 이름은 $name입니다.');
      }
}

class GirlGroup implements IdolInterface{
  String name;
  GirlGroup(this.name);

  void sayName(){
    print('제이름은 $name입니다');
  }
}
