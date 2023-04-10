# a = 1234
# print(a,type(a))


b = 12345.6789
print(b, type(b))

hex = 0xF5A
oct = 0o567
bin = 0b11011
 
print(hex, oct, bin )


bl = True
print(bl,type(bl))
'''
a= 10<20
b= 10 ==10
c = 10 !=10

print(a,b,c)
'''
# a =10 <= 20
# # a = 10  => 20
# print(a)

# print("따옴표 '출력")
# print('따옴표"출력')
# print("같은 따옴표\"출력")

# a =10
# b = 20

# print(a,"+", b, "=", a+b)
# # 다른 출력 형식 지정 방법(Like C)
# print("%d" % a)
# print("%d" % (a+b))
# print("%d + %d = %d" %(a,b, a+b))
# # print("%d와 %d를 더한 결과 값은 %d입니다" % (a,b a+b))


# int = 12345
# float = 12345.6789

# print("%10d" % int)#10자리를 표현
# print("%10.4d" % int)# .4는 무시

# print("%10.4d" % float) #

# print("%10.4f" % float)#10칸중에 소수칸 4자리 표현
# print("%20.10f" % float)#20칸중에 정수부분 출력하고 소수부분은 10자리 맞춰야하기때문에 나머지는 00으로 채움
# print("%5.5f" % float)
# print("%5.2f" % float)#5자리 소숫점 2자리
# print("%3.2f" % float)

'''
\n 줄바꿈 문자
\t 탭 문자
\b 백 스페이스
\r 캐리지 리턴(첫줄)
\\ 역슬래쉬 자체
\" 큰따옴표 자체
\' 작은 따옴표 자체
'''
'''
a =10 
b = 20

print(a,"+",b,"\n =",a+b)
print(a,"\b +" ,b,"\n =",a+b)
'''
'''
a = int(input("첫번째 정수를 입력하세요 : "))#입력 값을 받는 것 기본은 문자열이며
b = int(input("두번째 정수를 입력하세요 : "))#앞에 무슨 타입을 지정하면 해당 타입의 입력 값을 받을수 있다.
c = a+b
print("두 정수를 더한 값은 %d 입니다." %c)
print("두 정수의 더한값은 ",{c},"입니다")
'''


'''
a="abc"
b = "def"
c = 3
# print(a*b) 
print(a*c) #문자와 숫자는 곱이 된다.
'''

'''
a = input()
b = input()

c = a+b

print(c)
'''

a = int(input("첫번째 정수값"))
b = float(input("두번째 정수값"))

c = a+b
d = a-b
e = a*b
f = a/b

print("+의 값은:",c,"\n-의 값은:",d,"\n*의 값은:",e,"\n/의 값은:",f)

