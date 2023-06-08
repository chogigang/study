  //getter  Setter 

void main(){

// Idol class
//name (이름) -변수 
//members (맴버들) - 변수
//sayHello(인사) -함수
//introduce (맴버 소개) - 함수
//constructor (생성자)




Idol blackpink = Idol('블랙핑크',['지수','제니','리사','로제']); 
//  Idol blackpink = const Idol('블랙핑크',['지수','제니','리사','로제']);




// Idol bts = Idol('BTS', ['Rm','진','슈가','제이홉','지민','뷔','정국']);
Idol bts = Idol.fromList([['진','슈가','제이홉','지민','뷔','정국'],'BTS',]); //네임드 컨스트럭터




print(blackpink.firstMember); //지수 출력
print(bts.firstMember);       //진 출력


blackpink.firstMember = 'jogigang'; //setter
bts.firstMember ='아이언맨'; //setter


print(blackpink.firstMember); //jogigang 출력
print(bts.firstMember); //아이언맨 


}

//  getter           /      setter  
// 데이터를 가져올때  /데이터를 설정할때 
class Idol{

 String name;
 List<String>members;

 Idol(this.name,this.members);


Idol.fromList(List values): this.members = values[0],
                            this.name    = values[1];


                            void sayHello(){
  print('안녕하세요 ${this.name} 입니다.');

}
void introduce(){

  print('저희 맴버는 ${this.members}가 있습니다.');
}

//getter 

String get firstMember{
return this.members[0];

}

//setter
//파라미터는 무조건 하나만 들어갈수있다.
set firstMember(String name){
 this.members[0]=name;


}
}


/*
getter setter 같은경우는
간단한 데이터 가공을 할때 사용을한다

함수로 getter setter 기능들을 처리할때는

대규모로 로직이 들어갈때 그냥 함수로 처리를 한다.

하지만 어떤 특정한 상황에서 getter 를 사용해야하고
어떨대는 함수를 사용해야하는 상황은 사실상 없다.

하지만 뉘양스가 다르고 개발을 하다보면 자연스럽게 깨우칠 영역이다.


그리고 setter는 상수로 설정을 하면 사용할수 없는 기능이다 

스프링에서 엔티티(db)를 활용할때는 상수를 사용해서 도 사용을 할수 있지만

다른 현대 언어는 요즘 setter 를 잘 많이 사용을 안하는 추세이기도 하다.

 */