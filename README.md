학교 공부 ,개인공부 


#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3);

// LED 핀 정의
const int ledPin = 13; // LED가 연결된 핀 번호

// 모터 핀 정의
const int motorINB = 9; // 모터 제어 입력 B 핀
const int motorINA = 10; // 모터 제어 입력 A 핀

String inputString = "";         // 시리얼 입력 문자열을 저장할 변수
bool stringComplete = false;     // 입력 문자열이 완성되었는지 여부를 저장할 변수

void setup() {
  // LED 핀을 출력으로 설정
  BTSerial.begin(9600);
  pinMode(ledPin, OUTPUT); 
  
  // 모터 핀을 출력으로 설정
  pinMode(motorINB, OUTPUT); // 모터 제어 입력 B 핀을 출력으로 설정
  pinMode(motorINA, OUTPUT); // 모터 제어 입력 A 핀을 출력으로 설정
  
  // 시리얼 모니터 시작
  Serial.begin(9600); // 시리얼 통신 속도를 9600으로 설정
  inputString.reserve(200); // 입력 문자열의 최대 크기를 200으로 예약
}

void loop() {
  // 입력 문자열이 완성되었는지 확인
  if (stringComplete) {
    processCommand(inputString);
    // 문자열 초기화
    inputString = ""; // 입력 문자열을 초기화
    stringComplete = false; // 문자열 완성 상태를 초기화
  }
}

void processCommand(String command) {
  // 프로토콜 시작과 종료 문자를 확인
  if (command.startsWith("#") && command.endsWith("@")) {
    // 시작과 종료 문자를 제거하고 명령어 파싱
    String cmd = command.substring(1, command.length() - 1);
    int commaIndex = cmd.indexOf(','); // 쉼표의 위치를 찾음
    if (commaIndex > 0) {
      String cmdType = cmd.substring(0, commaIndex); // 쉼표 이전의 명령어 부분
      String value = cmd.substring(commaIndex + 1); // 쉼표 이후의 값 부분

      // LED 제어
      if (cmdType.equals("LED")) {
        if (value.equals("ON")) {
          digitalWrite(ledPin, HIGH); // LED를 켬
          Serial.println("LED is ON"); // 시리얼 모니터에 LED가 켜졌음을 출력
        } else if (value.equals("OFF")) {
          digitalWrite(ledPin, LOW); // LED를 끔
          Serial.println("LED is OFF"); // 시리얼 모니터에 LED가 꺼졌음을 출력
        } else {
          Serial.println("Invalid LED command"); // 잘못된 LED 명령어 입력 시 출력
        }
      }

      // 모터 제어
      else if (cmdType.equals("MOTOR")) {
        int speed = value.toInt(); // 문자열 값을 정수로 변환하여 속도 값으로 사용
        if (speed >= 0 && speed <= 255) {
          digitalWrite(motorINA, HIGH); // 모터 제어 입력 A 핀을 HIGH로 설정
          digitalWrite(motorINB, LOW); // 모터 제어 입력 B 핀을 LOW로 설정
          analogWrite(motorINA, speed); // 모터 속도를 설정
          Serial.print("Motor running at speed: "); // 시리얼 모니터에 모터 속도를 출력
          Serial.println(speed);
        } else {
          Serial.println("Invalid motor speed. Enter a value between 0 and 255."); // 잘못된 모터 속도 입력 시 출력
        }
      }
    } else {
      Serial.println("Invalid command format"); // 잘못된 명령어 형식 입력 시 출력
    }
  } else {
    Serial.println("Invalid command format. Commands must start with '#' and end with '@'"); // 잘못된 명령어 형식 입력 시 출력
  }
}

// 시리얼 이벤트 함수
void serialEvent() {
  while (Serial.available()) { // 시리얼 데이터가 있는 동안
    char inChar = (char)Serial.read(); // 시리얼 데이터 읽기
    inputString += inChar; // 입력 문자열에 추가
    // 종료 문자를 확인하여 입력 문자열이 완성되었는지 확인
    if (inChar == '@') {
      stringComplete = true; // 종료 문자 '@'를 만나면 문자열 완성 상태로 설정
    }
  }
}
