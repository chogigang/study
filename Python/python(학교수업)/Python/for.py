# 파이썬의 for문은 첫번째 첫번째 값 2번째는 마지막 값 3번째는 증가값
# for 변수 in range


# for i in range(10):
#     print(i)

# for i in range(3,10):
#     print(i)


# for i in range(1,10,2):
#     print(f"{i}값 반복")


# for i in range(1,5,1):
#     print('*',end='*')
 

# sum =0
# for i in range(1,101):
#     sum = sum+i   
    
    
    
# print(f"1에서 {i}까지의 합은{sum} 입니다.")


# sum = int(input("단수를 입력하세요"))

# for i in range(1,10):      
#     print(f"{sum}","*",i,"=",sum*i)

# sum = int(input("단수를 입력하세요"))




# a= int(input("단수를 입력하세요 :"))
# for i in range(1,10):
#         print(f"{a:2d} * {i:2d} = {a*i:3d}     ",end="")
#         if i%3 ==0 :
#             print("")


# for i in range(1,10):
#     print("*",end="")

#######################################################################################


# for i in range(2,10,1):
#     print(f"< {i} 단>")
#     for j in range(1,10,1):
#             # print(f"{i} * {j} = ",(i*j),end="")
#             print(f"{i:2d} * {j:2d}  = {i*j:3d} ",end="")
#             if j%3 == 0:
#                 print("")
#     print("")

# num = 0
# while True :
#     i= (input("더할 수를 적으시오 0을 적으면 종료"))
#     if i == '=' :

#         print(f"{num} \n나가임마")
#         break
#     else:
  
#         num=num+int(i)

       
#     print(f"{num}")

# while True :
#     try:
#         a = int(input("나누기를 할 정수를 입력하세요:"))
#         b = int(input("나누어질 수를 입력하세요:"))
#         print(a/b)
#     except :
#         print("에외가 발생")
    
num = 0
while True:
    try: 
        i = (input("더할 수를 적으시오 =를 적으면 종료"))
        if i == '=' :
            print(f"{num}\n종료") 
            break
        else:
            num=num+int(i)
    except: 
        print("잘못 입력") 
        
        
    


