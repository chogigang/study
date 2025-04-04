# print('철수가\안녕\'이라고 말했습니다.')
# print('안녕\n우리 다시 만나~~')
# print('안녕 \t우리 다시 만나~~')


# name = input("이름을 입력하시오:")
# print(name,"씨 안녕하세요?")
# print("파이썬 프로그래밍의 세계에 오신 것을 환영합니다.")

#2.1 문제
# print(100,'+',200,'=',100+200)
# print(200,'+',300,'+',400,'=',200+300+400)

#2.2 문제
# width = 30
# heigh =60 
# print(width)
# print(heigh)

#2.3 문제
# width =30 ,heigh =60
# print(width)
# print(heigh)

#2.4문제
# width = 40.0  
# height = 20.0  
# area = width * height /2 
# print('삼각형의 면적:', area)

#2.5 문제
# width = int(input("정사각형의 밑변을 입력하시오 : "))
# heigh =30
# print("정사각형의 면적",width*heigh/2)


#2.6
# num=0
# for i in range(1,11,1):
#     num+=i

# print("1에서 10까지 합: ",num)


#2.7
# sum =1
# for i in range(1,11,1):
#     sum*=i
# print("10!= ",sum)


# 2.8 문제
# celsius =0
# print("섭씨 화씨")
# for celsius in range(0,60,10):
#     fahrenheit =(9/5) *celsius+32
#     print(celsius," ",fahrenheit,"\n")


# 2.9문제 
# celsius = int(input("섭씨온도를 입력하세요:"))
# print("섭씨",celsius,"도는 화씨 ",(9/5) *celsius+32,"도 입니다.")

# 2.10 문제
# radius = int(input("원의 반지름을 입력하세요: "))
# print("원의 둘레 =",2*radius*3.141592," 원의 면적 =",3.141592*radius**2)

#2.11 문제 
# print("It's really hot! \n I said \"Hello!\" to him \n He Said \"What's there?\" \n"
# " Newline character is \\n, Tab character is \\t. \n"
# "Working directory is C:\\workspace\\mywork. " )


#3.1 문제 

# print("a   n   a^n")
# n=2
# for a in range(2,7,1):
#     print(f"{a}   {n}  ",a*n)


#3.2문제
#sqrt_table
# for i in range(1,11,1):
#     print(f"{i}의 제곱근: {i**0.5}")

#3.3문제



#도전문제 4.2 
# speed =int(input("속도를 입력하세요:"))

# if(speed>30):
#     print("과속입니다. 속도를 줄이세요")
# else:
#     print("안전운전 하세요")


#도전문제 4.3 
# num=int(input("숫자를 입렷하세요:"))
# if(num<0):
#     print("음수입니다.")
# elif(num>0):
#     print("음수가 아닙니다.")


#게임 사용자의 게임 점수(game_score)를 입력받아서 10000점 이상이면 '고수입니다'.를 출력하고, 10000점 미만이면 '입문자입니다'를 출력하는 프로그램을 if-else 문을 이용하여 작성하시오
# game_score = int(input("게임 점수를 입력하시오"))
# if(game_score>=10000):
#     print("고수입니다.")
# elif(game_score<10000):
#     print("입문자입니다.")






# 4.4 
'''
사용자로부터 2개의 정수를 연속하여 입력받도록 코드를 수정하여라
이때 두 정수는 모두 0이 아니라고 가정하자. 두 정수를 각각 x,y라 할때 두 정수의 부호가 모두 양수이면 1사분면(100,100) 좌표로, x가 음수이고 y가 양수이면 2사분면(-100,100) 좌표로, 두 수 모두 음수이면
3사분면(-100,-100) 좌표로 ,x가 양수이고 y가 음수이면 4사 분면 (100,-100) 좌표로 거북이를 이동시키는 프로그램을 작성해보자.
'''
# import turtle

# # 거북이 초기 설정
# t = turtle.Turtle()
# t.shape("turtle")
# t.penup()  # 선을 그리지 않도록 설정

# # 텍스트를 미리 적어놓기
# t.goto(100, 100)
# t.write("두수 모두 양수")

# t.goto(-100, 100)
# t.write("첫번째 수만 음수")

# t.goto(-100, -100)
# t.write("두수 모두 음수")

# t.goto(100, -100)
# t.write("두번째 수만 음수")

# # 원점으로 이동
# t.goto(0, 0)

# # 사용자 입력 받기
# x =  int(turtle.textinput("","x좌표를 입력하시오:"))
# y =  int(turtle.textinput("","y좌표를 입력하시오:"))

# # 조건에 맞는 사분면 좌표로 이동
# if x > 0 and y > 0:
#     t.goto(100, 100)  # 1사분면
# elif x < 0 and y > 0:
#     t.goto(-100, 100)  # 2사분면
# elif x < 0 and y < 0:
#     t.goto(-100, -100)  # 3사분면
# elif x > 0 and y < 0:
#     t.goto(100, -100)  # 4사분면

# # 화면을 닫을 때까지 대기
# turtle.done()

#  
# 4.5 
"""

"""
# import turtle

# t = turtle.Turtle()
# t.shape("turtle")
# t.penup()  # 선을 그리지 않도록 설정

# x =int(turtle.textinput("","x값을 입력하시오:"))
# y =int(turtle.textinput("","y값을 입력하시오:"))

# if(x>y):
#     t.goto(100,0)
# elif(x<y):
#     t.goto(-100,0)
# elif(x==y):
#     t.goto(0,100)

# turtle.done()

# 4.8
"""andom.randrange(2)를 이용하여 10개 난수를 생성하도록 하자. random모듈의 randrange(2) 함수는 0과 1중에서 하나의 정수를 생성한다. if-else문을 10개 사용하여 0이 나타날경우  right로 50필셀 이동하고
1이 나타날 경우 left로 50픽셀을 이동하도록 하여라 이와 같이 자유롭게 10회 이동한 후 거북이 그래픽이 그리는 그림을 다음과 같이 보여라
"""

# import turtle
# import random

# # 거북이 초기 설정
# t = turtle.Turtle()
# t.shape("turtle")
# t.pendown()

# # 랜덤 이동 (반복문 사용)
# for _ in range(10):
#     if random.randrange(2) == 0:
#        t.right(50)
#        t.forward(50)
#     else:
#        t.left(50)
#        t.forward(50)

# # 화면 유지
# turtle.done()
# 4.9

# """
# 주사위 던지기 게임으로 변환해보자.  random.randit(1,6)을 사용하면 1에서 6까지의 정수를 랜덤하게 생성할 수 있다. 입력으로 '홍길동','홍길순'과 같은 사용자의 이름을 받아서 홍길동의 주사위번호,홍길순의
# 주사위 번호를 출력한 후 이들을 비교하여 다음과 같이 출력하여라. 결과는 '홍길동이 이겻습니다.', '홍길순이 이겻습니다', 혹은 '비겼습니다.' 가운데 하나가 나타나도록 하여라
# player1의 이름: 홍길동
# player2의 이름: 홍길순

# ---- 주사위를 굴립니다.---
# 홍길동의 주사위 번호는 3
# 홍길순의 주사위 번호는 4
# 홍길순이 이겻습니다.
# """

# import random

# # 플레이어 이름 입력
# player1 = input("player1의 이름: ")
# player2 = input("player2의 이름: ")

# print("\n---- 주사위를 굴립니다. ----")

# # 주사위 굴리기
# dice1 = random.randint(1, 6)
# dice2 = random.randint(1, 6)

# # 결과 출력
# print(f"{player1}의 주사위 번호는 {dice1}")
# print(f"{player2}의 주사위 번호는 {dice2}")

# # 승자 판별
# if dice1 > dice2:
#     print(f"{player1}이(가) 이겼습니다!")
# elif dice1 < dice2:
#     print(f"{player2}이(가) 이겼습니다!")
# else:
#     print("비겼습니다!")


# 도전과제 5.3 

# for i in range(3):
#     print("파이썬 주식회사자의")
#     print("방문을 환영합니다!")

# import turtle

# t= turtle.Turtle()

# for count in range(6):
#     t.circle(100)
#     t.left(360/6)


#도전문제 5.2
# for t in range(10):
#     print(f"반복중{t}")


#도전문제 5.5 
 # n -각형의 한 변의 길이도 사용자로부터 받아보자 사용자로부터 임의의 값 lenght 를 입력받아서 forward(100)이 아니고 forward(length)ㅁ가 되도록 하라.
# import turtle
# t = turtle.Turtle()
# t.shape("turtle")

# s= turtle.textinput("","몇각형을 원하시나요? : ")
# n=int(s)
# length =int(input("한 변의 길이를 구해주세요:"))
# for i in range(n):
#     t.forward(100)
#     t.left(360/n)

#도전문제 5.8
# import turtle
# t = turtle.Turtle()
# t.shape("turtle")
# i = 0

# while i< 5:
#     t.forward(50)
#     t.right(144)
#     i =i+1

#도전문제 5.10
import random

tries =0
guess =0
answer =random.randint(1,100)
print("1부터 100 사이의 숫자를 맞추시오")
while guess !=answer :
    guess =int(input("숫자를 입력하시오: "))
    tries =tries +1

    if (guess <answer):
        print("낮음!")
    elif (guess>answer):
        print("높음!")
    if(tries>=10):

        break

if(tries>= 10):
    print("실패 총 시도 횟수 =",tries)
else :
    print("축하합니다. 총 시도횟수=",tries)