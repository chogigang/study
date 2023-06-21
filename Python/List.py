import random
# list_int=[1,2,5,8,10]
# list_char=['a','b','c','d','e']



# print(list_int)
# print(list_char)
# print(list_int[0])
# print(list_char[1])



# c = []
# for i in range(1, 8) :
#     c.append(0)     #리스트 끝에 값을  추가하기
# print(c)

# # c =[0,0,0,0,0,0,0]

# for i in range(1, 101):
#     rand_val = random.randrange(1, 7)
#     c[rand_val] = c[rand_val] + 1

# print(f"{c}")



# list_int=[1,5,7,9,3]
# list_char=['a','b','c','d']


# list_char.insert(2,'z') #지정 인덱스 위치에 값 삽입
# list_int.append(11)#마지막에 삽입
# list_char.remove('z') #삭제 앞에것만 지워짐
# # list_char.pop('z')# 삭제 하면서 무엇을 삭제 했는지 알려줌 주로 이걸 사용하는것이 좋음

# list_int.index(5)#인덱스 조회



# #List method 

# # 개수 구하기 list.count()
# # list_char.count('b')

# #정렬하기 list.sort() 오름차순
# list_char.sort()
# print(list_char)


# #내림차순 list.sort(reverse=True) 내림차순
# list_char.sort(reverse=True)
# print(list_char)

# # list 크기 구하기 

# print(f"list 크기: {len(list_char)}")


# # 최대값,최소값 구하기

# print(f"list 최대값: {max(list_int)}")# 최대값
# print(f"list 최소값: {min(list_int)}")# 최소값







# #합 반환 
# # sum(list_int)


# print('------------------')
# # 리스트 정렬 결과반영안됨

# print(sorted(list_int)) #오름차순
# print(list(reversed(list_int))) #순서가 반대 
# print(list_int)# list 변환 없음


# list_int2=list(reversed(list_int))
# print(list_int2)




# #list 접근

# a=[0,1,2,3,4,5,6,7,8,9]

# print(a[-1],a[-2])
# #

# print(a[0:4])
# print(a[3:6])
# print(a[7:]) #뒤에 : 붙으면 끝가지
# print(a[:3]) # 앞에 : 붙으면 처음부터


# print(a[2:3])
# a[2:3]=[20,30]
# print(a)


# print(a[2:4])
# a[2:4] =[20,30]
# print(a)

# a[2:5]=[20,30]
# print(a)

# a[2]=[20,30]
# print(a)


# list 메소드 모음

# append(element): 리스트에 요소를 추가합니다.
# extend(iterable): 리스트에 이터러블(iterable)의 모든 요소를 추가합니다.
# insert(index, element): 주어진 인덱스에 요소를 삽입합니다.
# remove(element): 리스트에서 주어진 값과 일치하는 첫 번째 요소를 제거합니다.
# pop(index=-1): 주어진 인덱스의 요소를 제거하고 반환합니다. 인덱스를 지정하지 않으면 마지막 요소를 제거합니다.
# index(element, start=0, end=len(list)): 주어진 값과 일치하는 첫 번째 요소의 인덱스를 반환합니다. 지정된 범위 내에서 검색할 수 있습니다.
# count(element): 주어진 값과 일치하는 요소의 개수를 반환합니다.
# sort(key=None, reverse=False): 리스트를 정렬합니다. key 매개변수를 사용하여 정렬 기준을 지정할 수 있고, reverse 매개변수를 사용하여 역순으로 정렬할 수 있습니다.
# reverse(): 리스트의 요소를 역순으로 정렬합니다.
# copy(): 리스트의 얕은 복사본을 생성합니다.
# clear(): 리스트의 모든 요소를 제거합니다.
# len(list): 리스트의 요소 개수를 반환합니다.
# list(iterable): 이터러블(iterable)을 리스트로 변환합니다.
# max(iterable): 이터러블(iterable)에서 최댓값을 반환합니다.
# min(iterable): 이터러블(iterable)에서 최솟값을 반환합니다.
# sum(iterable): 이터러블(iterable)의 모든 요소의 합을 반환합니다.
# any(iterable): 이터러블(iterable)의 요소 중 하나 이상이 True인지 확인합니다.
# all(iterable): 이터러블(iterable)의 모든 요소가 True인지 확인합니다.
# sorted(iterable, key=None, reverse=False): 이터러블(iterable)을 정렬된 리스트로 반환합니다. key와 reverse 매개변수를 사용할 수 있습니다.

# 연습문제 

# 10개의 정수를 입력받아 모두 더한 값을 출력
# sum1 = []
# for i in range(0, 10):
#     num = int(input("더할 값을 입력하세요: "))
#     sum1.append(num)

# print(sum(sum1))


# 튜플

# 값을 수정 불가 읽기만 가능


# 튜플 생성

# tup1 =(10,20,30)
# print(tup1)
# tup2= 10,20,30,



# #튜플 접근


# print(tup1[0]) #0번째 인덱스


# 튜플 활용

# tup_int=(1,2,3,4,5)
# tup_char=('a','b','c')

# print(tup_int+tup_char)
# print(tup_int*2)


# 튜플 값 추가




# 딕셔너리 Dictionary


#순서가 없음 여러 정보를 하나의 변수로 표현할 경우 유용

#len()함수 지원 값변경 가능 인덱스 사용불가 슬라이스 사용 불가

# key :value 의 쌍으로 구성

#dictionary={key1:value1,key2}


#Dictionary 접근

dic_stud={'학과':'IT','학번':'20001','학년':'2','이름':'아이티'}
print(dic_stud)

dic_stud['폰번호']='010-000-0000' # 값 추가
print(dic_stud)

dic_stud['학과'] ='기계' # 값 변경
print(dic_stud)

del(dic_stud['학과'])  #해당 값 삭제
print(dic_stud)

dic_stud ={'학과':'IT','학번':'20001','학년':'2','이름':'아이티','학년':'1'} # 초기화
print(dic_stud)



#.get()
print(dic_stud['학과'])
print(dic_stud['dlfma'])
print(dic_stud.get('이름'))
print(dic_stud['주소']) # Error
print(dic_stud.get('주소'))# non



#key
print(dic_stud.keys())
print(list(dic_stud.keys()))

for i in dic_stud.keys():
    print(i)

print(dic_stud.values())
for i in dic_stud.values():
    print(i)

