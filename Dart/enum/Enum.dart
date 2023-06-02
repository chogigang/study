//Enum
/*
다른 언어에도 있는 Enum 타입 

승인 -approved
반려 - rejected
대기 - pending
*/

enum Status {

  approved, //승인
  rejected, //반려
  pending,  //대기

}


void main(){
Status status =Status.approved;

if(status == Status.approved){
print("승인되었습니다.");
}else if(status==Status.pending){
print("대기되었습니다.");
}else{
print("반려 되었습니다.");

}

print(Status.values.toList());
}


/*

코드의 오타로 오류를 방지할수 있고
변수로 선언해서 사용할수 있으며

*/