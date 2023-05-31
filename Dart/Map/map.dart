//map


void main() {
    Map<String, String> me = {
        'device': 'apple',
        'clothes': 'louis vuitton',
        'themepark': 'disney land',
        'city':'tokyo',
        'car':'honda',
    };
 
    print(me);
    print(me['device']);
    print(me[2]); //Map에 없는 값을 넣으면 null을 반환합니다.
    print(me.length); //
    me['city']='newyork'; // 기존값을 새값으로 변경하고 싶을때 사용
    print(me);

    //3키값의 값이 tokyo에서 Newyork로 변경되었습니다.맵에 새로운 값을 추가하려면 변수에 추가하려는 키를 입력하고 값을 대입합니다.
  me['age']='28';
  print(me);


  me.remove('age');// 맵의 특정값 지우기 
  print(me);
  me.clear(); //모든 map 값을 전부 지우는 명령어 


print(me);
print(me.isEmpty); //값이 비어있으면 true 값이 있으면 false





}


