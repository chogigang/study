import random
# list_int=[1,2,5,8,10]
# list_char=['a','b','c','d','e']



# print(list_int)
# print(list_char)
# print(list_int[0])
# print(list_char[1])



c = []
for i in range(1, 8) :
    c.append(0)     #리스트 끝에 값을  추가하기
print(c)

# c =[0,0,0,0,0,0,0]

for i in range(1, 101):
    rand_val = random.randrange(1, 7)
    c[rand_val] = c[rand_val] + 1

print(f"{c}")




