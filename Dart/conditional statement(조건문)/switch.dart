// 스위치문 


import 'dart:io';
void amin(){
print("성적을 입력하세요: ");
String? Stnum = stdin.readLineSync();

int num = int.parse(Stnum!);

switch(num~/10){
case 10:
case 9:
print("A학점");
break;
case 8:
case 7:
print("b학점");
break;
case 6:
print("c학점");
break;
case 5:
print("d학점");
break;
 default:
print("f학점");

}



 String favorite = "galaxy";
 
    switch (favorite){
        case 'mickey' :
            print('I Love mickey');
            break;
        case 'disneyland' :
        case 'tokyodisneyland' :
        case 'hongkongdisneyland' :
            print('I Love disneyland');
            break;
        case 'ipad' :
            print('I Love ipad');
            break;
        case 'apple' :
            print('I Love apple');
            break;
        default :
            print('nothing');


}

}


// 스위치문은 여러 else if 를 붙여놓은 것과 같은 동작을 합니다


// 다른 언어와 다르게 ~/ 를 이용해 스위치 문에서 나누기를 사용합니다.
// ~/는 정수 나눗셈 연산자 입니다 뒤에 소수점은 다 버립니다.
/*
Dart의 스위치 케이스문에서는 == 연산자를 사용하여 비교를 수행합니다. 그러나 == 연산자는 정수 타입에 대해서만 정의되어 있으며,
부동 소수점 타입인 double에 대해서는 정의되어 있지 않습니다.
따라서 double 타입을 스위치 케이스문에서 사용할 때는 double 타입이 아닌 정수 타입으로 변환해야 합니다.

입력값을 int로 변환한 후에 / 연산자를 사용하게 되면 결과는 부동 소수점인 double 타입이 됩니다. 이러한 이유로 오류가 발생하는 것입니다.

만약 나눗셈의 결과를 정수로 얻고 싶다면, 정수 나눗셈 연산자인 ~/를 사용하여 몫을 구하거나 int로 명시적으로 형변환을 해주어야 합니다. 
이를 통해 double 타입의 오류를 피할 수 있습니다.

따라서, 스위치 케이스문에서 정수로 비교를 수행하기 위해서는 입력값을 int로 변환한 후에 ~/ 연산자를 사용하거나, 
명시적으로 형변환을 해주어야 합니다.
*/