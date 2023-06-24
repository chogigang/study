import random

# co =str(input("동전 앞면 뒷면을 입력하세요 앞:1 뒤:2 :"))
# ran_val= random.randrange(1,3) 
# if co=="1"or co=="앞면" or co =="앞" :
#     co= 1
#     user_co ="앞면"
# elif co =="2"or co=="뒷면" or  co =="뒤":
#     co =2
#     user_co = "뒷면"
# else:
#     print("잘못 입력하셧습니다 다시 입력하세요")
#     exit()
# print("유저의 선택은:",user_co)
# print("코인 결과:",end="")
# if ran_val ==1:
#     ran_co="앞면"
# elif ran_val ==2:
#     ran_co="뒷면"
# print(ran_co)
# if co==ran_val:
#     print("성공")
# else:
#     print("실패")



# weight=int(input("몸무게를 입력하세요"))


# if weight>50 or 80>weight:
#     print("비정상입니다.") 
# else:
    # pass  # 참일때 그냥 패스시킬수 있는 코드 파이썬에만 있는 것

# 사용자로부터 입력받은 숫자가 5 이상이면 "5 이상입니다."를 출력하고, 5 미만이면 "5 미만입니다."를 출력하는 프로그램을 작성해보세요. (if문 사용)

# num = int(input("값을 입력하세요 : "))

# if num>5 :
#     print("5이상입니다.")
# else:
#     print("5미만입니다.")
    
# 2번째 문제 : 1부터 10까지의 숫자를 출력하는 프로그램을 작성해보세요. (for문 사용)
# i=0
# for i in range (1,11):
#     print(i)

# 3 번 문제  : 사용자로부터 입력받은 숫자의 구구단을 출력하는 프로그램을 작성해보세요. (while문 사용)

# num = int(input("구구단 단을 입력하세요:"))
# i=1
# for i in range(1,10):
#     print(num ,"*",i,"=",num*i)

# while (i<10):
#    print(num ,"*",i,"=",num*i)
#    i=i+1  


# 4번 문제 두 개의 주사위를 던졌을 때, 합이 6이 되는 경우의 수를 출력하는 프로그램을 작성해보세요. (for문과 if문, random 모듈 사용)


# i=0
# a = 0
# for i in range(1,10):
#  ran_val1 =random.randrange(1,7)
#  ran_val2 = random.randrange(1,7)

#  if ran_val1+ran_val2 == 6:
#   a += 1
#   print("두 주사위의 합이 6나왔습니다.","주사위 1의 값 :",ran_val1, "주사위 2의 값 :",ran_val2)
# else:
#  print("주사위 두수의 합이 6이 안나왔습니다.")

# print("10번의 주사위를 돌렸습니다 합이 6이 나왔던 횟수는 :",a,"입니다.")


# 5 번 문제 
# 숫자 맞추기 게임을 만들어보세요. 프로그램은 1부터 100 사이의 랜덤한 숫자를 생성하고, 
# 사용자로부터 숫자를 입력받아 생성된 숫자와 일치하는지를 판별합니다. 일치하지 않을 경우, 
# 사용자가 입력한 숫자가 생성된 숫자보다 큰지 작은지를 알려줍니다. (while문과 if문, random 모듈 사용)



# ran_val = random.randrange(1,101)
# num = int(input("숫자를 맞춰 보세요: "))

# while True:
#     if num == ran_val:
#         print("정답입니다.")
#         break
#     elif num > ran_val:
#         print("입력한 값보다 더 작습니다.")
#     else:
#         print("입력한 값보다 더 큽니다.")
    
#     num = int(input("다시 숫자를 맞춰 보세요: "))


# 1번 문제 두 개의 정수를 입력받아 더한 값을 출력하는 코드를 작성하세요.

# num1 = int(input("1번째 정수를 입력하세요 : "))
# num2 = int(input("1번째 정수를 입력하세요 : "))

# print(num1+num2)


# 2번 문제 사용자로부터 숫자를 입력받아, 그 숫자가 짝수인지 홀수인지 출력하는 코드를 작성하세요.


# num= int(input("정수를 입력해주세요 : "))

# if( num%2==0):
#     print("짝수입니다.")
# else:
#     print("홀수입니다.")


# 3번문제 1부터 10까지의 정수를 출력하는 코드를 작성하세요. (for문을 사용하세요)

# i=0
# for i in range(0,10):
#     i=i+1
#     print(i)


# 4번 문제 1부터 10까지의 정수 중에서 3의 배수만 출력하는 코드를 작성하세요. (for문을 사용하세요)



# for i in range(1,10):
#     if i%3==0 :
#         print(i)
#     else:
#         pass



# 5번 문제 주어진 리스트에서 랜덤으로 하나의 요소를 선택하여 출력하는 코드를 작성하세요. (random 모듈을 사용하세요)

# ranval = ['철수','민수','영희','훈이','흰둥이']

# print(random.choice(ranval))



# 1번문제 사용자로부터 세 개의 정수를 입력받아, 이 세 수 중 가장 큰 수를 출력하는 코드를 작성하세요.

# num1 =int(input("첫번째 정수를 입력하세요 :"))
# num2 =int(input("두번째 정수를 입력하세요 :"))
# num3 =int(input("세번째 정수를 입력하세요 :"))

# if(num1>num2 and num1>num3):
#     print("첫번째 정수 ",num1,"이 가장큽니다.")
# elif(num2>num1 and num2>num3):
#     print("두전째 정수",num2,"이 가장큽니다.")
# else:
#     print("세번째 정수 ",num3,"이 가장큽니다.")


# 2번째 문제 1부터 100까지의 숫자 중에서 3과 5의 공배수인 수의 합을 출력하는 코드를 작성하세요.
# result = 0
# for i in range(0,101):
#     if(i%3==0 or i%5==0):
#         result += i


# print("총 합",result)


# 2단부터 9단까지 구구단을 출력하는 코드를 작성하세요. (for문을 사용하세요)



# for i in range(2,10):
#     for j in range(1,10):
#         print(f"{i:2d} X {j:2d} ={i*j:3d}")

# 문제  사용자로부터 정수를 입력받아, 해당 정수의 모든 약수를 출력하는 코드를 작성하세요.

# num =int(input("약수를 구할 정수를 입력하세요 :"))
# for i in range(1,num+1):
#     if num%i==0:
#         print("약수",i)


#1번 문제 사용자로부터 두 개의 숫자를 입력받아, 더하기, 빼기, 곱하기, 나누기 연산을 각각 실행한 결과를 출력하는 코드를 작성하세요.


# num1 =int(input("첫번째 정수를 입력하세요"))
# num2 = int(input("두번째 정수를 입력하세요"))

# print(f"두수의 합: {num1+num2} \n두수의 차: {num1-num2} \n두수의 곱: {num1*num2} \n두수의 나누기: {num1/num2}")


# 2번 문제 사용자로부터 숫자를 입력받아, 그 숫자가 양수인지, 음수인지, 0인지를 판별하여 출력하는 코드를 작성하세요.
# num = int(input("숫자를 입력하세요 :"))

# if(num>0):
#     print("입력하신 값은 양수 입니다.: ",num)
# elif(num==0):
#      print("입력하신 값은 0입니다. :",num)
# else:
#     print("입력하신 값은 음수입니다. :",num)


# 문제 3 사용자로부터 숫자를 입력받아, 그 숫자가 소수인지 아닌지를 판별하여 출력하는 코드를 작성하세요. v

# num = int(input("숫자를 입력하세요: "))

# num_t = True

# for i in range(2,num):
#     if num%i==0:
#      num_t = False  
# if(num_t==True):
#     print("입력하신 값은 소수입니다. : ",num)
# else:
#     print("입력하신 값은 소수가 아닙니다.", num)


# 문제4  1부터 10까지의 숫자 중에서 3의 배수가 아닌 숫자를 출력하는 코드를 작성하세요.


# for i in range(1,11):
#   if(i%3!=0):
#      print(i,"는 3의 배수가 아닙니다.")
    


# 5번 문제   사용자로부터 숫자를 입력받아, 해당 숫자와 1부터 10까지의 숫자 중에서 작은 수를 출력하는 코드를 작성하세요.

# num = int(input("10이하의 값을 입력하세요 : "))
# ran_num= random.randrange(1,11)


# if(num>ran_num):
#     print(f"사용자가 입력한 값{num} , 랜덤값{ran_num}  출력값 :랜덤 {ran_num}")
# elif(num<ran_num):
#        print(f"사용자가 입력한 값{num} ,  랜덤값{ran_num}  출력값 :사용자 {num}")


# 6번문제 1부터 100까지의 숫자 중에서 7의 배수이면서 3의 배수인 숫자를 출력하는 코드를 작성하세요.


# for i in range(1,101):
#     if(i%3==0 and i%7==0):
#         print(f"3과 7의 배수인 숫자{i}입니다.")


 #7번 문제 1부터 100까지의 숫자 중에서 소수만 출력하는 코드를 작성하세요.   v


# for num in range(2,101):
#     flag = True
#     for i in range(2,num):
#         if num%i==0:
#              flag = False
#              break
#     if flag == True:
#         print(f"소수 {num}")

# 비교 해서 서로 나누기 위해 2중 for문을 사용하며  첫번째 값과 2번째 값을 나누어서 0이 떨어지면 소수가 아니니 깃발을 false로 변경 그렇게 
# 갓벌아 참이면 출력 거짓이면 다시 첫번째 for문으로 돌아가게 설계




# 1번문제 사용자로부터 하나의 정수를 입력 받아, 해당 정수가 짝수인지 홀수인지 판별하여 출력하는 코드를 작성하세요

# num = int(input("값을 입력하세요"))


# if(num%2==0):
#     print("짝수")
# else:
#     print("홀수")



# 2번문제  사용자로부터 세 개의 정수를 입력받아, 이 세 수 중 가장 작은 수를 출력하는 코드를 작성하세요.

# num1 = int(input("첫번째 값을 입력하세요: "))
# num2 = int(input("두번째 값을 입력하세요: "))
# num3 = int(input("세번째 값을 입력하세요: "))

# if(num1>num2 and num1>num3):
#     print(f"첫번째 값dl 재일 큽니다.{num1}")
# elif(num2>num1 and num2>num3):
#     print(f"두번째 값이 재일 큽니다 . {num2}")
# else:
#     print(f"새번째 값이 재일 큽니다. {num3}")


# 3번 문제 1부터 100까지의 숫자 중에서 홀수의 합을 구하는 코드를 작성하세요.

# odd =0
# for i in range(1,101):
#    if(i%2!=0):
#     odd+=i

# print(f"1부터 100까지의 홀수의 총 합 : {odd}")


#4번 문제 1부터 10까지의 숫자 중에서 짝수만 출력하는 코드를 작성하세요.

# for i in range(1,11):
#     if(i%2==0):
#         print(i)

# 5번 문제 while문을 사용하여, 사용자가 입력한 정수의 구구단을 출력하는 코드를 작성하세요.

# num =int(input("구구단 단수를 입력하세요: "))
# i =1
# while(i<10):
#     print(f"{num} X {i} = {num*i} ")
#     i+=1

# 6번문제 random 모듈을 사용하여, 1부터 100까지의 숫자 중에서 무작위로 하나의 숫자를 선택하고, 사용자가 이 숫자를 맞출 수 있는 게임을 만드세요.

# ran_val = random.randrange(1,101)

# while(True):
#     num = int(input("무작위 수를 맞춰 보세요 :"))
#     if(num == ran_val):
#         print("정답입니다!")
#         break
#     elif(num>ran_val):
#         print("다운!")
#     elif(num<ran_val):
#         print("업!")



# 7번문제 for문과 if문을 사용하여, 1부터 100까지의 숫자 중에서 소수(약수가 1과 자기 자신밖에 없는 수)를 모두 출력하는 코드를 작성하세요.



# for num in range(2,101):
#     flag =True
#     for i in range(2,num):
#         if(num%i==0):
#             flag =False
#             break
#     if(flag==True):
#         print(f"소수인{num}을 찾았습니다. ")

#사용자의 입력값이 소수인지 아니닌지 확인하는 코드를 작성하세요

# num = int(input("정수를 입력하세요: "))
# flage = True
# for i in range(2,num):
#    if(num%i==0 ):
#         flage =False  
   
# if(flage== True):
#     print(f"입력한 {num}은 소수입니다.")
# else:
#     print(f"입력한{num}은 소수가 아닙니다.")


# num=0
# for i in range (1,101):
#     if(i%3==0):
#         num=num+i
    
# print(num)
 

#2번 문제 문자열을 입력받아 거꾸로 출력하는 함수를 작성하세요.


# a =input("문자열을 입력하세요: ")

# reversed_str = ''
# for i in a:
#     reversed_str = i + reversed_str
    
    
# print(f"기본 문자열: {a}")
# print(f"뒤집은 문자열: {reversed_str}")



#3번 문제  두 개의 정수를 입력받아 덧셈, 뺄셈, 곱셈, 나눗셈 결과를 출력하는 함수를 작성하세요.


# num1 = int(input("첫번째 정수 값을 입력하세요: "))
# num2 = int(input("두번째 정수 값을 입력하세요: "))

# print(f"두수의 합:{num1+num2}\n두수의차:{num1-num2}\n두수의곱은:{num1*num2}\n두수의나눗셈:{num1/num2}")


#4번 문제 다음과 같은 문자열이 있을 때, 문자열에서 각 단어의 첫 글자를 대문자로 바꾸어 출력하는 함수를 작성하세요.

# Text = input("영어단어 를 입력하세요: ")

# print(Text.title())

# size = 5  # 다이아몬드 크기

# for i in range(size):
#     print(" " * (size - i - 1) + "*" * (2 * i + 1))
# for i in range(size - 2, -1, -1):
#     print(" " * (size - i - 1) + "*" * (2 * i + 1))





# 1번 문제 두 개의 정수를 입력받아 더한 값을 출력하는 코드를 작성하세요.




# 1부터 10까지의 정수를 출력하는 코드를 작성하세요. (for문을 사용하세요)




# 7번문제 for문과 if문을 사용하여, 1부터 100까지의 숫자 중에서 소수(약수가 1과 자기 자신밖에 없는 수)를 모두 출력하는 코드를 작성하세요.


# for num in range(2,101):    
#     flag =True
#     for i in range(2,num):  
#         if(num%i==0):
#             flag =False
#             break
#     if(flag==True):
#         print(f"소수인{num}을 찾았습니다. ")
        
# #사용자의 입력값이 소수인지 아니닌지 확인하는 코드를 작성하세요

# num = int(input("숫자를 입력하세요: "))

# num_t = True

# for i in range(2,num):
#     if num%i==0:
#      num_t = False  
# if(num_t==True):
#     print("입력하신 값은 소수입니다. : ",num)
# else:
#     print("입력하신 값은 소수가 아닙니다.", num)


#홀수인지 짝수인지 구별하는 코드를 작성해봅시다.


# 2번 문제 사용자로부터 숫자를 입력받아, 그 숫자가 양수인지, 음수인지, 0인지를 판별하여 출력하는 코드를 작성하세요.

#사용자로부터 세 개의 정수를 입력받아, 이 세 수 중 가장 작은 수를 출력하는 코드를 작성하세요

# num1= int(input("첫번째 정수를 입력하세요: "))
# num2= int(input("두번째 정수를 입력하세요: "))
# num3= int(input("세번째 정수를 입력하세요: "))


# if(num1<num2 and num1<num3):
#     print(f"첫번째 값이{num1} 제일 작습니다")
# elif(num2<num1 and num2<num3):
#     print(f"두번째 값이{num2} 제일 작습니다.")
# else:
#     print(f"세번째 값이 제일 작습니다.")


# 6번문제 random 모듈을 사용하여, 1부터 100까지의 숫자 중에서 무작위로 하나의 숫자를 선택하고, 사용자가 이 숫자를 맞출 수 있는 게임을 만드세요.

# ran_val = random.randrange(1,101)

# while(True):
#     num = int(input("무작위 수를 맞춰 보세요 :"))
#     if(num == ran_val):
#         print("정답입니다!")
#         break
#     elif(num>ran_val):
#         print("다운!")
#     elif(num<ran_val):
#         print("업!")

# 다음 두 수를 입력받아서 두 수의 합과 차를 출력하는 코드를 작성하시오. (연산자)

# num1= int(input("첫번째 값을 입력하세요: "))
# num2= int(input("두번째 값을 입력하세요: "))

# print(f"두 값의 합은 {num1+num2}")


# 사용자로부터 나이를 입력받아 18세 이상이면 "성인입니다"를 출력하고, 18세 미만이면 "미성년자입니다"를 출력하는 코드를 작성하시오. (if문)

# num1 = int(input("첫번째 값을 입력하세요: "))
# if(num1>18):
#     print("성인입니다. ")
# else:
#     print("미성년자입니다.")


# # 1부터 10까지의 수 중 짝수만을 출력하는 코드를 작성하시오. (for문)
# for i in range(1,11):
#     if(i%2==0):
#         print(f"짝수인 값{i}")



# 사용자가 입력한 양수에 대해 1부터 해당 수까지의 합을 구하는 코드를 작성하시오. (while문)

# num = int(input("값을 입력하세요: "))

# sum = 0
# i = 1
# while i <= num:
#     sum += i
#     i += 1

# print(f"입력한 값은 {num}이며, 해당 수까지의 합은 {sum}입니다.")



# 사용자로부터 양수를 입력받아, 
# 해당 숫자의 팩토리얼을 계산하는 코드를 작성하시오. 
# 예를 들어, 사용자가 5를 입력하면 5! = 5 x 4 x 3 x 2 x 1 = 120이
#  출력되어야 한다. 단, 입력한 수가 음수이면 "양수를 입력해주세요"라는
#  메시지를 출력하고 다시 입력을 받아야 한다.

# num = int(input("값을 입력하세요: "))

# i = 1
# result = 1

# while i <= num:
#     result *= i
#     i += 1

# print(f"입력한 값은 {num}, 해당 값까지의 곱은 = {result}")



# 숫자를 입력받아 100보다 크면 100보다 크다고 출력


# num = int(input("정수를 입력하세요: "))

# if(num>100):
#     print("입력하신 값은 100보다 큽니다.")
# elif(num==100):
#     print("입력하신 값은 100과 같습니다.")
# else:
#     print("입력하신값은 100보다 작습니다.")




# 0이 아닌 숫자를 입력 받아 짝수 혹은 홀수를 출력

# num=int(input("정수를 입력하세요: "))
# flage=""
# if(num%2==0):
#     flage="짝수"
#     print(flage)
# else:
#     flage="홀수"
#     print(flage)



# a="*"

# for i in range(1,8):
#     print(a,end="")


# 2~9사이의 수를 입력받아 그 수에 해당하는 구구단 출력

# num= int(input(" 2~9단 사이에 단수를 입력하세요: "))
# for i in range(1,10):
#     print(f"{num}x{i}={num*i}")


#2~9 사이의 구구단 출력
# for i in range(2,10):
#     print(f"\n구구단{i}단\n")
#     for j in range(1,10):
#         print(f"{i:3d}x{j:3d}={i*j:5d}",end="")


# 0이 입력되어지기 전까지  수를 다 더하는 프로그램
# sum=0
# while True:
#     num= int(input("더할 값을 입력하세요: "))
#     if num==0:
#         print(f"총 더한 값은{sum} ")
#         break
#     sum+=num


# = 이 입력되기 전까지 모든수를 더하는 프로그램

# sum=0

# while True:
#     num=str(input("더할 값을 입력하세요:"))
#     if num=="=":
#         print(f"총 합산한 값은:{sum}")
#         break
#     sum+=int(num)



# co= str(input("앞면 혹은 뒷면을 입력하세요 (앞:1,뒷:2): "))
# ran_val=random.randrange(1,3)
# user_cho=""
# if co=="앞면"or co=="앞"or co=="1":
#     user_cho=1
#     print(f"유저의 선택은:앞면 ")
# elif co =="뒷면"or co=="뒤"or co=="2":
#     user_cho=2
#     print(f"유저의 선택은 뒷면:뒷면")
# else:
#     print("잘못선택 하셧습니다.")
#     exit

# if ran_val==1:
#     print(f"코인 토스 결과:앞면")
# elif ran_val==2:
#     print(f"코인 토스 결과:뒷면")
# if user_cho==ran_val:
#     print("정답!")
# else:
#     print("틀렷습니다!")


# 1부터 100까지의 정수 중 3의 배수의 합을 구하는 코드를 작성하시오. (for문 사용)

# sum =0
# for i in range(1,101):

#     if(i%3==0):
#         sum+=i

# print(f"1부터 100까지의 3의 배수의 총 합은 :{sum}")        
    

# 사용자로부터 숫자를 입력받고, 그 숫자에 해당하는 팩토리얼을 계산하는 코드를 작성하세요. 

# num=int(input("팩토리얼을 입력할 수를 입력하세요: "))
# a = 1
# sum=1
# for i in range(1,num):
#     sum*=i
#     i+=1
# print(f"{sum}!")



# def findIndex(_list, _key):
#     for i in range(len(_list)):
#         if _list[i] == _key:
#             return i
#     return 0

# UserInput = input()

# alp = []
# cnt = []

# for i in range(len(UserInput)):
#     flag = False
#     for a in alp:
#         if UserInput[i] == a:
#             cnt[findIndex(alp,UserInput[i])] += 1
#             flag = True
#     if flag == False:
#         alp.append(UserInput[i])
#         cnt.append(1)

# for i in range(len(alp)):
#     if i == len(alp) - 1:
#         print(f"{alp[i]}는 {cnt[i]}회 나왔습니다.")
#     else:
#         print(f"{alp[i]}는 {cnt[i]}회,")



# list 에 30까지 5의 배수를 넣고, 합계 계산

# list1=[]

# sum=0

# for i in range(1,31):
#     if i%5==0:
#         list1.append(i)
#         sum+=i

# print(f"5의 배수:{list1}")
# print(f"5의 배수의 합:{sum}")


#dictionary 딕셔너리에 주사위 1000번 굴린 갯수 계산
# di ={'눈금1':0,'눈금2':0,'눈금3':0,'눈금4':0,'눈금5':0,'눈금6':0}


# for i in range (0,1000): 
#     random_val =random.randrange(1,7)
#     match random_val:
#         case 1 :
#             di ['눈금1'] +=1
           
#         case 2 :
#             di['눈금2'] +=1
            
#         case 3 :
#             di['눈금3'] +=1
            
#         case 4 :
#             di['눈금4'] +=1
            
#         case 5 :
#             di['눈금5'] +=1
            
#         case 6 :
#             di['눈금6']+=1
           

# di={1:0,2:0,3:0,4:0,5:0,6:0}

# for i in range(0,1001):
#     di[random.randrange(1,7)]+=1

# print(di)


# from tkinter import*
# from tkinter import messagebox

# def ent1_get():   # 엔트리 1값을 엔트리 2에 출력
#     ent1_value = entry1.get()  # entry1의 입력 값을 가져옴
#     entry2.delete(0, END)  # entry2의 내용을 삭제
#     ent1_value = float(ent1_value) / 1290.30  # 입력 값을 1290.30으로 나눔 (원을 달러로 변환)
#     entry2.insert(0, ent1_value)  # entry2에 변환된 값을 삽입

# def ent2_get():
#     ent2_value = entry2.get()  # entry2의 입력 값을 가져옴
#     entry1.delete(0, END)  # entry1의 내용을 삭제
#     ent2_value = float(ent2_value) * 1290.30  # 입력 값을 1290.30으로 곱함 (달러를 원으로 변환)
#     entry1.insert(0, ent2_value)  # entry1에 변환된 값을 삽입

# def clear():
#     entry1.delete(0, END)  # entry1의 내용을 삭제
#     entry2.delete(0, END)  # entry2의 내용을 삭제


# window = Tk()
# window.title("원(w) <-> 달러($)")
# label1 = Label(window, text="원(w)")  # "원(w)" 라벨 생성
# label2 = Label(window, text="달러($)")  # "달러($)" 라벨 생성
# entry1 = Entry(window)  # 입력창1 생성
# entry2 = Entry(window)  # 입력창2 생성
# label1.grid(row=0, column=0)  # "원(w)" 라벨을 그리드에 배치 (0행, 0열)
# label2.grid(row=1, column=0)  # "달러($)" 라벨을 그리드에 배치 (1행, 0열)
# entry1.grid(row=0, column=1)  # 입력창1을 그리드에 배치 (0행, 1열)
# entry1.insert(0, "원 입력(w)")  # 입력창1에 기본 힌트 텍스트 "원 입력(w)" 삽입
# entry2.grid(row=1, column=1)  # 입력창2를 그리드에 배치 (1행, 1열)
# entry2.insert(0, "달러 입력($)")  # 입력창2에 기본 힌트 텍스트 "달러 입력($)" 삽입
# button1 = Button(window, text="원 -> 달러", command=ent1_get)  # "원 -> 달러" 버튼 생성 및 클릭 시 ent1_get 함수 실행
# button2 = Button(window, text="달러 -> 원", command=ent2_get)  # "달러 -> 원" 버튼 생성 및 클릭 시 ent2_get 함수 실행
# button3 = Button(window, text="clear", command=clear)  # "clear" 버튼 생성 및 클릭 시 clear 함수 실행
# button1.grid(row=2, column=0)  # "원 -> 달러" 버튼을 그리드에 배치 (2행, 
# button2.grid(row=2, column=1) # "달러 ->원 " 버튼을 그리드에 배치 
# button3.grid(row=2, column=2) # 삭제 버튼 
# window.mainloop()


# from tkinter import*

# def entry1_get():
#     entry_val = Entry1.get()
#     Entry2.delete(0,END)
#     entry_val=float(entry_val)/1290.30
#     Entry2.insert(0,entry_val)

# def entry2_get():
#     entry_val =Entry2.get()
#     Entry1.delete(0,END)
#     entry_val=float(entry_val)*1290.30
#     Entry1.insert(0,entry_val)
# def clear():
#     Entry1.delete(0,END)
#     Entry2.delete(0,END)

# window =Tk()
# window.title("원 <-> 달러")
# Label1 =Label(window, text="원(w)")
# Label2 =Label(window,text="달러($)")
# Entry1=Entry(window)
# Entry2=Entry(window)
# Label1.grid(row=0,column=0)
# Entry1.grid(row=0,column=1)
# Entry1.insert(0,"원 입력(w)")
# Label2.grid(row=1,column=0)
# Entry2.grid(row=1,column=1)
# Entry2.insert(0,"달러입력($)")
# Button1=Button(window,text="원->달러",command=entry1_get)
# Button2=Button(window,text="달러->원",command=entry2_get)
# Button3=Button(window,text="지우기",command=clear)
# Button1.grid(row=2,column=0)
# Button2.grid(row=2,column=1)
# Button3.grid(row=2,column=2)
# window.mainloop()



# 30 list 에 30까지 5의 배수를 넣고  합계 계산


# list1=[]

# sum=0


# for i in range(0,31):
#     if(i%5==0):
#         list.append(i)
#         sum+=i

# print(list1)


# cur_price = {'Daum KAKAO': 80000, 'naver':800000, 'daeshin':30000,'test':80000}
# cur_price.keys()
# print(cur_price.keys())
# print(cur_price.values())


# 달러에서 원화를 바꾸는 tk인터페이스  구현

# import random
# dice={1:0,2:0,3:0,4:0,5:0,6:0}


# for i in range(1,1001):
#     dice[random.randrange(1,7)]+=1


# print("주사위 눈금 사용 횟수")
# print(dice)


from tkinter import*

def won_dal():
    entry_val=Entry1.get()
    Entry2.delete(0,END)
    entry_val=float(entry_val)/1270
    Entry2.insert(0,entry_val)

def dal_won():
    entry_val=Entry2.get()
    Entry1.delete(0,END)
    entry_val=float(entry_val)*1270
    Entry1.insert(0,entry_val)
window= Tk()
window.geometry("500x500")
Label1=Label(text="원")
Label1.grid(row=0,column=0)
Label2=Label(text="달러")
Label2.grid(row=1,column=0)
Entry1=Entry(window)
Entry2=Entry(window)
Entry1.grid(row=0,column=1)
Entry2.grid(row=1,column=1)
Entry1.insert(0,"원 값을 입력")
Entry2.insert(0,"달러 값을 입력")
Button1=Button(text="원->달러",command=won_dal)
Button2=Button(text="달러->원",command=dal_won)
Button1.grid(row=2,column=0)
Button2.grid(row=2,column=2)
window.mainloop()


