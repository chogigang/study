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
# for i in range(1,100):
#     sum=sum+i   
    
    
    
# print(sum)


# sum = int(input("단수를 입력하세요"))

# for i in range(1,9):      
#     print(f"{sum}","*",i,"=",sum*i)

# sum = int(input("단수를 입력하세요"))




a= int(input("단수를 입력하세요 :"))
for i in range(1,10):
        print(f"{a:2d}* {i:2d} = {a*i:3d}     ",end="")
        if i%3 ==0 :
            print("")