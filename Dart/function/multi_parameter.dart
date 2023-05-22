// 멀티 파라미터 값

/*함수에 다수의 파라미터를 사용할 수 있습니다.
,로 구분하여 파라미터를 계속 추가하면 됩니다.
물론 아규먼트도 같은 방법으로 여러개 사용할 수 있습니다.
다음은 다수의 파라미터와 아규먼트를 사용한 예제입니다*/ 


int num(int n, int n1,int n2,int n3){
int result=n+n1+n2*n3;
return result;
}

void main(){

  print(num(10,20,30,40));
}