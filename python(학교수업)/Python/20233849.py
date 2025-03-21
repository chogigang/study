'''
사용자로부터 2개의 정수를 연속하여 입력받도록 코드를 수정하여라
이때 두 정수는 모두 0이 아니라고 가정하자. 두 정수를 각각 x,y라 할때 두 정수의 부호가 모두 양수이면 1사분면(100,100) 좌표로, x가 음수이고 y가 양수이면 2사분면(-100,100) 좌표로, 두 수 모두 음수이면
3사분면(-100,-100) 좌표로 ,x가 양수이고 y가 음수이면 4사 분면 (100,-100) 좌표로 거북이를 이동시키는 프로그램을 작성해보자.
'''

#4.4
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


# 4.5 사용자로부터 2개의 정수를 입력받아 위의 코드를 수정하라 두 정수를 각각 x,y라 할때 두정수를 비교하여   x가 크면 오른쪽 y가 크면 왼쪽으로 움직이고 , 두값이 같은 값이면 위로 움직이는 프로그램을 작성

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


#4.8
"""andom.randrange(2)를 이용하여 10개 난수를 생성하도록 하자. random모듈의 randrange(2) 함수는 0과 1중에서 하나의 정수를 생성한다. if-else문을 10개 사용하여 0이 나타날경우  right로 50필셀 이동하고
1이 나타날 경우 left로 50픽셀을 이동하도록 하여라 이와 같이 자유롭게 10회 이동한 후 거북이 그래픽이 그리는 그림을 다음과 같이 보여라
"""

import turtle
import random

# 거북이 초기 설정
t = turtle.Turtle()
t.shape("turtle")
t.pendown()

# 랜덤 이동 (반복문 사용)
for _ in range(10):
    if random.randrange(2) == 0:
       t.right(50)
       t.forward(50)
    else:
       t.left(50)
       t.forward(50)

# 화면 유지
turtle.done()



#4.9 
"""
주사위 던지기 게임으로 변환해보자.  random.randit(1,6)을 사용하면 1에서 6까지의 정수를 랜덤하게 생성할 수 있다. 입력으로 '홍길동','홍길순'과 같은 사용자의 이름을 받아서 홍길동의 주사위번호,홍길순의
주사위 번호를 출력한 후 이들을 비교하여 다음과 같이 출력하여라. 결과는 '홍길동이 이겻습니다.', '홍길순이 이겻습니다', 혹은 '비겼습니다.' 가운데 하나가 나타나도록 하여라
player1의 이름: 홍길동
player2의 이름: 홍길순

---- 주사위를 굴립니다.---
홍길동의 주사위 번호는 3
홍길순의 주사위 번호는 4
홍길순이 이겻습니다.
"""

import random

# 플레이어 이름 입력
player1 = input("player1의 이름: ")
player2 = input("player2의 이름: ")

print("\n---- 주사위를 굴립니다. ----")

# 주사위 굴리기
dice1 = random.randint(1, 6)
dice2 = random.randint(1, 6)

# 결과 출력
print(f"{player1}의 주사위 번호는 {dice1}")
print(f"{player2}의 주사위 번호는 {dice2}")

# 승자 판별
if dice1 > dice2:
    print(f"{player1}이(가) 이겼습니다!")
elif dice1 < dice2:
    print(f"{player2}이(가) 이겼습니다!")
else:
    print("비겼습니다!")
