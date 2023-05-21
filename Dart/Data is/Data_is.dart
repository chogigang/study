//데이터 타입 확인  is 명령어

//is 앞에 데이터형을 확인할 변수 뒤에는 데이터형을 입력
// 해당 데이터를 확인 후 맞으면 true 틀리면 false 를 반환 


void main(){
 int num1 =1;
print(num1 is int); //true 를 출력
print(num1 is double); //false 를 출력


print("--------");

String str = "hello";
print(str is int); //false 를 출력
print(str is String); //true 를 출력
print(str is !int); // not 연산자를 사용해 true 를 출력 int 형이 아니기 때문에 not 연산자를 사용했을때 true 가 된다.

}

