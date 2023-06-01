//map
//키 밸류 값을 적어서 사용하는 map 자료구조

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
  // me.clear(); //모든 map 값을 전부 지우는 명령어 


print(me);
print(me.isEmpty); //값이 비어있으면 true 값이 있으면 false

me.update('car', (honda) => 'moning'); // Map에서 지정된 키(key)에 대한 값을 업데이트합니다.
// 만약 키(key)가 존재하지 않을 경우, ifAbsent 함수를 통해 새로운 값으로 추가할 수 있습니다.
print(me);

me.putIfAbsent('pet', () => 'dog'); //지정된 키(key)가 Map에 존재하지 않을 경우, 새로운 키-값 쌍을 추가합니다.
print(me);



}


