// 상속  
// 상속을 받으면 부모 클래스의 모든 속성을 
//자식 클래스가 부여받는다. 
//같은 자식클래스 끼리도 속성을 공유하지 않는다.
//부모클래스의 옵션을 받기만 한다.

void main(){
print("---------Idol------------");
Idol apink =Idol(name: "에이핑크 ",membersCount: 5);

apink.sayName();
apink.sayMembersCount();

print("---------Boy Group--------------");
BoyGroup bts= BoyGroup('BTS', 7);
bts.sayName();
bts.sayMembersCount();
bts.sayMele();//상속은 무조건 부모에서 자식으로만 가능하다.
print("---------Gril Group---------------");
GirlGroup redVelvet= GirlGroup("레드벨벳", 5);
redVelvet.sayName();
redVelvet.sayMembersCount();
redVelvet.sayFemale(); 

print("----------Type Comparison--------");
print(" 에이핑크는 아이돌 클래스인지: ${apink is Idol}");
print("부모 클래스인 에이 핑크가 자식 클래스 보이그룹에 속하는가: ${apink is BoyGroup}");
print("부모 클래스인 에이 핑크가 자식 클래스 걸그룹에 속하는가: ${apink is GirlGroup}");

print("----------Type Comparison2--------");
print("BTS가 부모클래스 Idol 클래스인가: ${bts is Idol}");
print("부모 클래스인 bts 가 자식 클래스 보이그룹에 속하는가: ${bts is BoyGroup}");
print("부모 클래스인 bts 가 자식 클래스 걸그룹에 속하는가: ${bts is GirlGroup}");

print("----------Type Comparison3--------");

print("레드벨벳 가 부모클래스 Idol 클래스인가: ${redVelvet is Idol}");
print("부모 클래스인 레드벨벳 가 자식 클래스 보이그룹에 속하는가: ${redVelvet is BoyGroup}");
print("부모 클래스인 레드벨벳 가 자식 클래스 걸그룹에 속하는가: ${redVelvet is GirlGroup}");


// 상속을 하면  자식클래스는 자식클래스 자체도 될수도 있고 부모 클래스도 될수가 있다.
//같은 레벨의 자식들 끼리는 서로 상관 관계가  없습니다. 


}


class Idol{
//이름 
String name;
// 멤버 숫자.
int membersCount;
Idol({
required this.name,
required this.membersCount,

});
void sayName(){
print("저희는  ${this.name}입니다.");

}
void sayMembersCount(){
print('${this.name}은 ${this.membersCount}명의 멤버가 있습니다.');

}
}

class BoyGroup extends Idol{  //상속을 할땐 extends 를 선언을 해줘야한다. 오른쪽이 부모 왼쪽이 자식 
  BoyGroup( //받어올 값을 설정 이름 스트링 인원수 int
    String name,
    int membersCount,
  ):super( //super는 부모 클래스에 있는 생성자를  당겨올 때 사용하는 키워드
    name:name,
    membersCount: membersCount,

  );
void sayMele(){
print("저희는 남자 아이돌입니다.");

}

}

class GirlGroup extends Idol{
GirlGroup(
  String name,
  int membersCount,
):super(
  name: name,
  membersCount: membersCount,
);
void sayFemale(){
  print("저희는 여자 아이돌입니다.");
}
}


 /*
 걸 그룹 쪽 레드벨벳이랑
 BTS 는   Idol 이라는 부모 클래스에서 상속을 받아서 안에있는 기능을 사용할수 있지만

 부모 클래스에 속해 있는 에이핑크는  자식 클래스에서 추가한 기능을 상속 받지 못한다.
 반대로  상속을 받지 않는한
 보이 그룹쪽에서는  걸그룹쪽에서 지정한 클래스 를 사용할수 없고
 걸그룹 쪽에서 지정한 클래스를 사용할수 없습니다


  */