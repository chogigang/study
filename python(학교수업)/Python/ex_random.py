import random
'''
random은 난수 를 발생시키는 모듈입니다. 복권 추첨 주사위 던지기와 같이 임의의 숫자가 필요한 경우 사용합니다.

random 모듈은 자주 사용 하는 모듈로  4가지 6가지 명령어가 있습니다

 random() 0이상 1미만의 난수 발생
 randint(n1,n2) n1이상 n2이하의 난수 발생
 randrange(n1, n2) n1이상 n2미만의 난수 발생
 sample(range(n1,n2) ,n3) n1이상 n2미만의 난수 n3개 발생
 choice() 무작위로 1개 아이템 선택함
 shuffle() 아이템 순서 섞음

 
print('random:',random.random()) #0이상 1미만 난수
print('random:',random.randint(0,9))# 0이상 9이하 난수
print('random:',random.randrange(0,9))#0이상 9미만 난수
print('sample:',random.sample(range(0,10),3))# 0이상 10미만 난수 3개
 
listVar =[1,2,3,4,5,6]

print('choice:',random.choice(listVar))#무작위로 1개 아이템 선택 
random.shuffle(listVar) #아이탬 순서 섞음
print('shuffle: ' ,listVar)


'''



# num = 0
# for i in range(0,101,1):
#     rand_val = random.randrange(1,7,1)
#     if rand_val ==1 :
#         num+1
#     print(rand_val)
#     print(num)

# a=0
# b=0
# c=0
# d=0
# e=0
# f=0
# for i in range(0,101):
#     rand_val=random.randrange(1,7)
#     match rand_val:
#             case 6 :
#               a+1
#             case 5 :
#               b+1
#             case 4 :
#                 c+1
#             case 3 :
#                 d+1
#             case 2 :
#                 e+1
#             case 1 :
#                 f+1
# print("6이 나온 횟수:",a,"5가 나온횟수",b,"4가 나온횟수",c,"3이나온횟수",d,"2가 나온횟수",e,"1이 나온횟수",f)



# a = 0
# b = 0
# c = 0
# d = 0
# e = 0
# f = 0

# for i in range(0, 101):
#     rand_val = random.randrange(1, 7)
#     match rand_val:
#         case 6:
#             a += 1
#         case 5:
#             b += 1
#         case 4:
#             c += 1
#         case 3:
#             d += 1
#         case 2:
#             e += 1
#         case 1:
#             f += 1

# print("6이 나온 횟수:", a, "5가 나온 횟수:", b, "4가 나온 횟수:", c, "3이 나온 횟수:", d, "2가 나온 횟수:", e, "1이 나온 횟수:", f)




# co = str(input("앞면 뒷면을 선택해주세요 (앞면: 1, 뒷면: 2): "))
# ran_val = random.randrange(1, 3)

# if co == "1" or co == "앞면" or co == "앞":
#     user_choice = "앞면"
#     co = 1
# elif co == "2" or co == "뒷면" or co == "뒤":
#     user_choice = "뒷면"
#     co = 2
# else:
#     print("잘못된 입력입니다. 1 또는 2를 입력해주세요.")
#     exit()

# print("사용자 선택:", user_choice)
# print("동전 던지기 결과:", end=" ")

# if ran_val == 1:
#     result = "앞면"
# else:
#     result = "뒷면"
# print(result)

# if co == ran_val:
#     print("정답!")
# else:
#     print("틀렸습니다.")




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


