# t= True
# f = False
# print(t,f)  #True , False
# print(type(t)) #bool

# print(10>20) #False

# a = 10
# b = 20
# print (a<b) #True


# # and 연산자 &   
# print(True  and True  )
# print(True  and False )
# print(False and True )
# print(False and False)


# # or 연산자 |
# print(True or True)
# print(True or False)
# print(False or True)
# print(False or False)


# #not 연산자 !
# # 반대 


# weight=int(input("몸무게를 입력하세요"))


# if weight>=50 and 80>=weight:
#     pass  # 참일때 그냥 패스시킬수 있는 코드 파이썬에만 있는 것
# else:
#     print("비정상입니다.")

weight=int(input("몸무게를 입력하세요"))


if weight>50 or 80>weight:
    print("비정상입니다.") 
else:
    pass  # 참일때 그냥 패스시킬수 있는 코드 파이썬에만 있는 것
