# 딕셔너리 Dictionary


#순서가 없음 여러 정보를 하나의 변수로 표현할 경우 유용

#len()함수 지원 값변경 가능 인덱스 사용불가 슬라이스 사용 불가

# key :value 의 쌍으로 구성

#dictionary={key1:value1,key2}


#Dictionary 접근

# dic_stud={'학과':'IT','학번':'20001','학년':'2','이름':'아이티'}
# print(dic_stud)

# dic_stud['폰번호']='010-000-0000' # 값 추가
# print(dic_stud)

# dic_stud['학과'] ='기계' # 값 변경
# print(dic_stud)

# del(dic_stud['학과'])  #해당 값 삭제
# print(dic_stud)

# dic_stud ={'학과':'IT','학번':'20001','학년':'2','이름':'아이티','학년':'1'} # 초기화
# print(dic_stud)

# print('---------------------------------')

# #.get()
# print(dic_stud['학과'])
# print(dic_stud['이름'])
# print(dic_stud.get('이름'))
# # print(dic_stud['주소']) # Error
# print(dic_stud.get('주소'))# non



# #key
# print(dic_stud.keys()) # 딕셔너리 키들 출력
# print(list(dic_stud.keys())) # 딕셔너리 키들 출력

# for i in dic_stud.keys():
#     print(i)

# print(dic_stud.values()) # 딕셔너리 밸류들 출력
# for i in dic_stud.values():
#     print(i)

# print(dic_stud.items()) # items 를 하면 모든 키,밸류값이 다나옴
# print('이름'in dic_stud) # 있으면 트루 없으면 펄스
# print('주소'in dic_stud) # 


# num_key =1
# num_val =5

# dict1={num_key:num_val}
# print(dict1)


# num_val=10
# print(dict1[num_key])# 안바뀜
# dict1[1]=10  
# print(dict1[num_key])# 바뀜
# # 키값을 주고 벨류값을 줘야한다.



# Dictionary 활용 문제

# dic_stud={'학과':'IT','학번':21001,'학년':2,'이름':'아이티'}

# print(dic_stud['이름'])



# for i in dic_stud.keys():
#     # print("%s => %s" %(i,dic_stud[i]))
#     print(f"{i}=>{dic_stud[i]}")

# dic_stud = dict(sorted(dic_stud.items()))
# print(f"{dic_stud}")
# for i in dic_stud.keys():
# #  print("%s => %s" %(i,dic_stud[i]))
#     print(f"{i}=>{dic_stud[i]}")


# import random


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
           

        
# print(di)
    


# dic_di={1:0,2:0,3:0,4:0,5:0,6:0}

# for i in range(1,1001):
#     dic_di[random.randrange(1,7)]+=1

    
# for i in dic_di.keys():
#         print(f"{i}==>{dic_di[i]}")




# target_value = '값2'
# target_keys = []

# for key, value in dictionary.items():
#     if value == target_value:
#         target_keys.append(key)

# print(target_keys)  # 출력: ['키2']

# and



# target_value = '값2'
# target_keys = [key for key, value in dictionary.items() if value == target_value]

# print(target_keys)  # 출력: ['키2']

# 딕셔너리 밸류 값으로 키값 찾는 설명 기존에는 지원하지 않지만 억지로 찾는다면 이런 구조로 찾아야함.