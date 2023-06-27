from tkinter import*  #tk인터페이스 모듈에 있는 모든 함수 포함
from tkinter import messagebox
import random



# window =TK() # 최상위 윈도우 생성
# tkinter 모듈내의 TK 클래스가 하나의 윈도우를 나타낸다.
# TK 클래스는 제목을 가지고 있는 일반적인 윈도우
# TK 클래스의 객체를 생성하면 화면에 하나의 윈도우가 생성
# 이 윈도우 안에 여러가지 위젯 추가 기능

# window.mainloop()

# window =Tk()
# window.title("동전던지기") #윈도우창 이름
# # window.mainloop()

# # 윈도우 사이즈
# window.geometry("800x600")
#                     #영문자 x


# # 확대 축소
# window.resizable(width=True,height=False)# 펄스로 지정하면 가로,세로 확대 축소를 못하게 하는것
#                         #대문자                   
# window.mainloop() 



# window =Tk()
# label1 = Label(window,text="그램(g)\n 온스(oz)")
# label2 = Label(window,text="오이시오이시")
# label1.pack()
# label2.pack()
# window.mainloop()


# Entry 입력받을때 사용

# window=Tk()
# entry1=Entry(window)
# entry1.insert(0,"출력하기")
# entry1.pack()
# window.mainloop()


# Button

# window=Tk()
# button1 = Button(window, text="그램 ->온스")
# command =entry1_get # 입력값 받기
# button1.pack()

# window.mainloop()


# #  종합적

# window=Tk()
# window.title("변환기")

# label1=Label(window,text="그램(g)")
# label1.pack()
# label2=Label(window,text="온스(oz)")



# 배치 관리자 

# Pack #압축 배치
# Grid #격자 배치 


# grid(격자 ) 배치 관리자
# window =Tk()
# label1 = Label(window,text = "그램(g)")
# label1.grid(row=0,column=0)
# window.mainloop()



# # place 배치 관리자

# Button.place(x=100,y=100)



# window=Tk()
# label1 =Label(window,text="그램(g)",font="휴먼옛체 20")
# with= 10,

# def ent1_get():
#     entry1.delete(0,END)
#     entry1.insert(0,"1번 버튼이 눌러짐")

# def ent1_get():   #  엔트리 1값을 엔트리 2  에 출력
#     ent1_value =entry1.get()
#     entry2.delete(0,END)
#     entry2.insert(0,ent1_value)

# window=Tk()
# window.title("그램(g) <->온스(oz)")
# label1 =Label(window,text="그램g")
# label2 =Label(window,text="온스(oz)")
# entry1=Entry(window)
# entry2=Entry(window)
# label1.grid(row=0,column=0)
# label2.grid(row=1,column=0)
# entry1.grid(row=0,column=1)
# entry1.insert(0,"그램입력(g)")
# # entry1.insert(END,"(g)")
# # entry1.delete(1,2)#2번째 글자 삭제 
# # entry1.delete(0,END)#전체 삭제
# entry2.grid(row=1,column=1)
# entry2.insert(0,"온스입력(oz)")
# # entry2.insert(END,"(oz)")
# button1 = Button(window, text="그램 ->온스",command=ent1_get)
# button2 = Button(window,text="온스 -> 그램")
# button1.grid(row=2,column=0)
# button2.grid(row=2,column=1)
# window.mainloop()



# def entry1_get():
#     pass

# def entry1_get():
    



# def ent1_get():   #  엔트리 1값을 엔트리 2  에 출력
#     ent1_value =entry1.get()
#     entry2.delete(0,END)
#     ent1_value = float(ent1_value)/28.35
#     entry2.insert(0,ent1_value)

# def ent2_get():
#     ent2_value =entry2.get()
#     entry1.delete(0,END)
#     ent2_value =float(ent2_value)*28.35
#     entry1.insert(0,ent2_value)


# window=Tk()
# window.title("그램(g) <->온스(oz)")
# label1 =Label(window,text="그램g")
# label2 =Label(window,text="온스(oz)")
# entry1=Entry(window)
# entry2=Entry(window)
# label1.grid(row=0,column=0)
# label2.grid(row=1,column=0)
# entry1.grid(row=0,column=1)
# entry1.insert(0,"그램입력(g)")
# # entry1.insert(END,"(g)")
# # entry1.delete(1,2)#2번째 글자 삭제 
# # entry1.delete(0,END)#전체 삭제
# entry2.grid(row=1,column=1)
# entry2.insert(0,"온스입력(oz)")
# # entry2.insert(END,"(oz)")
# button1 = Button(window, text="그램 ->온스",command=ent1_get)
# button2 = Button(window,text="온스 -> 그램",command=ent2_get)
# button1.grid(row=2,column=0)
# button2.grid(row=2,column=1)
# window.mainloop()



# #위젯 크기 설정
# label2 =Label(window,text="온스(oz)",width=200,height=5)

# # 색상변경
# button1 = Button(window, text="그램 ->온스",bg="yellow",fg="purple",command=entry1)

# # 테두리 설정

# # boarderwidth 옵션지정

# boarderwidth =3

# # relief 옵션 지정 (default:flat)
# # label1=Label(window,text='0'borderwidth=10,relief=raised)

# #label text 변경

# label1.config(text="텍스트 변경")

# # font 출력

# from tkinter import*
# from tkinter import font

# window=Tk()
# fonts=font.families()
# for i in fonts:
#     print(i)


# Radiobutton


# drink_sel =StringVar()#위젯과 연결된 변수 생성
# #var_name =IntVar()


# drink_sel = Radiobutton(window,text="딸기",variable=drink_sel,value="딸기")

# drink_sel.get()#값을 가져올때 사용한다.

# def order_chk():
#  label_sel1.config(text=f"{drink_sel.get()}주스 {drink_cup.get()}")
   

  


# window =Tk()
# label_sel=Label(window,text="과일쥬스 종류를 선택하세요..")
# drink_sel=StringVar()

# drink_sel1 = Radiobutton(window, text="딸기", value="딸기", variable=drink_sel)
# drink_sel1.select()#선택 하는것 처음에 1개를 선택한채로 스타트 
# drink_sel2 = Radiobutton(window, text="포도", value="포도", variable=drink_sel)
# drink_sel3 = Radiobutton(window, text="바나나", value="바나나", variable=drink_sel)


# label_sel.pack()
# drink_sel1.pack()
# drink_sel2.pack()
# drink_sel3.pack()


# label_sel=Label(window,text="몇 잔을 선택하시겠습니까?")
# drink_cup=StringVar()


# drink_cup1 =Radiobutton(window,text="1잔",value="1잔",variable=drink_cup)
# drink_cup1.select()
# drink_cup2 =Radiobutton(window,text="2잔",value="2잔",variable=drink_cup)
# drink_cup3 =Radiobutton(window,text="3잔",value="3잔",variable=drink_cup)

# label_sel.pack()
# drink_cup1.pack()
# drink_cup2.pack()
# drink_cup3.pack()



# button1 = Button(window,text="주문",command=order_chk)





# button1.pack()


# label_sel1=Label(window,)
# label_sel1.pack()

# window.mainloop()

# messagebox 표시

# from tkinter import messagebox
# messagebox.showinfo(title,Text)
# messagebox.showingfo("결과","정확하시네요")

# 이미지 표시
# window =Tk()

# img1 =PhotoImage(file="image/fr.gif")
# Label=Label(window,image=img1)

# window.mainloop()

# def p_img():
#     sel=forb.get()
#     if sel==1:
#         label1.config(Image=img_f)
#     else:
#         label1.config(image=img_b)


    
# def coin_chk():
#     com = random.randrange(1, 3)
#     if com == coin_var.get():
#         messagebox.showinfo("결과", "정답")
#     else:
#         messagebox.showinfo("결과", "오답")

#     label1.config(text=str(coin_var.get()))

# window = Tk()

# window.title("Coin Toss")
# window.geometry("300x120")
# window.resizable(width=False, height=False)

# coin_var = IntVar()  # 라디오 버튼 값을 정수형으로 저장하는 coin_var 변수 생성
# coin_f = Radiobutton(window, text="앞면", value=1, variable=coin_var)
# coin_f.place(x=10, y=10)
# coin_b = Radiobutton(window, text="뒷면", value=2, variable=coin_var)
# coin_b.place(x=10, y=30)

# button1 = Button(window, text="시작", command=coin_chk)
# button1.place(x=10, y=55)

# label1 = Label(window, width=20, text="", borderwidth=3, relief="raised")
# label1.place(x=150, y=20)

# window.mainloop()




# def p_img():
#     sel = forb.get()
#     if sel == 1:
#         label1.config(image=img_f)
#     else:
#         label1.config(image=img_b)

# def coin_chk():
#     com = random.choice(["앞면", "뒷면"])
#     user_sel = "앞면" if forb.get() == 1 else "뒷면"
#     if com == user_sel:
#         messagebox.showinfo("결과", "정답")
#     else:
#         messagebox.showinfo("결과", "오답")

# window = Tk()
# window.title("동전 던지기")
# window.resizable(width=False, height=False)

# img_f = PhotoImage(file="python/image/f.png")
# img_b = PhotoImage(file="python/image/b.png")
# label1 = Label(window, image=img_f)
# label1.grid(row=0, column=0)

# forb = IntVar()
# r1 = Radiobutton(window, text="앞면", value=1, command=p_img)
# r1.select()
# r2 = Radiobutton(window, text="뒷면", value=2, command=p_img)
# r1.grid(row=2, column=0)
# r2.grid(row=3, column=0)

# button1 = Button(window, text="시작", command=coin_chk)
# button1.grid(row=4, column=0)

# window.mainloop()





# from tkinter import*
# from tkinter import messagebox
# import random

# def play():
#     com=random.randint(1,2)
#     if coin_cel.get() == 1:
#         label3.config(image=img1)
#     else:
#         label3.config(image=img2)
#     if com == 1:
#         label4.config(image=img1)
#     else:
#         label4.config(image=img2)
#     if com == coin_cel.get():
#         messagebox.showinfo("결과","맞았습니다.")
#     else:
#         messagebox.showinfo("결과","틀렸습니다.")
# window = Tk()
# window.title("동전던지기")
# window.geometry("350x600")

# coin_cel = IntVar()
# img1 = PhotoImage(file="python/image/f.png")
# img2 = PhotoImage(file="python/image/b.png")
# label1 = Label(window, text="앞면 뒷면을 선택하세요")
# label2 = Label(window, text="본인선택",borderwidth=5,relief="groove")
# label3 = Label(window)
# label4 = Label(window)
# label5 = Label(window, text="컴퓨터선택",borderwidth=5, relief="groove")
# coin1 = Radiobutton(window, text="앞면",variable=coin_cel,value=1)
# coin1.select()
# coin2 = Radiobutton(window, text="뒷면",variable=coin_cel,value=2)

# button1 = Button(window, text="던지기", command=play)

# label1.pack()
# coin1.pack()
# coin2.pack()
# button1.pack()
# label2.pack()
# label3.pack()
# label5.pack()
# label4.pack()
# window.mainloop()

# def pressButton(num):
#     number_entry.insert("end", num)


# def calculate():
#     expression = number_entry["text"]
#     try:
#         result = eval(expression)
#         number_entry["text"] = str(result)
#     except:
#         number_entry["text"] = "Error"

# def clear():
#     number_entry["text"] = ""

# window = Tk()
# window.title("계산기")
# window.geometry("350x600")
# window.resizable(width=False, height=False)

# number_entry = Entry(window, width=20)
# number_entry.grid(row=0, column=0, columnspan=3)

# button_add = Button(window, text="+", width=5, command=lambda: pressButton('+'))
# button_add.grid(row=1, column=3)
# button_subtract = Button(window, text="-", width=5, command=lambda: pressButton('-'))
# button_subtract.grid(row=2, column=3)
# button_multiply = Button(window, text="*", width=5, command=lambda: pressButton('*'))
# button_multiply.grid(row=3, column=3)
# button_divide = Button(window, text="/", width=5, command=lambda: pressButton('/'))
# button_divide.grid(row=4, column=3)
# button_equal = Button(window, text="=", width=5, command=calculate)
# button_equal.grid(row=4, column=2)
# button_clear = Button(window, text="C", width=5, command=clear)
# button_clear.grid(row=4,column=0)

# button0 = Button(window, text="0",width=5,command=lambda:pressButton('0'))
# button0.grid(row=4, column=1)
# button1 = Button(window, text="1", width=5, command=lambda: pressButton('1'))
# button1.grid(row=1, column=0)
# button2 = Button(window, text="2", width=5, command=lambda: pressButton('2'))
# button2.grid(row=1, column=1)
# button3 = Button(window, text="3", width=5, command=lambda: pressButton('3'))
# button3.grid(row=1, column=2)
# button4 = Button(window, text="4", width=5, command=lambda: pressButton('4'))
# button4.grid(row=2, column=0)
# button5 = Button(window, text="5", width=5, command=lambda: pressButton('5'))
# button5.grid(row=2, column=1)
# button6 = Button(window, text="6", width=5, command=lambda: pressButton('6'))
# button6.grid(row=2, column=2)
# button7 = Button(window, text="7", width=5, command=lambda: pressButton('7'))
# button7.grid(row=3, column=0)
# button8 = Button(window, text="8", width=5, command=lambda: pressButton('8'))
# button8.grid(row=3, column=1)
# button9 = Button(window, text="9", width=5, command=lambda: pressButton('9'))
# button9.grid(row=3, column=2)

# window.mainloop()


# def pressButton(num):
#     number_entry.insert("end", num)


# def calculate():
#     expression = number_entry["text"]
#     try:
#         result = eval(expression)
#         number_entry["text"] = str(result)
#     except:
#         number_entry["text"] = "Error"

# def clear():
#     number_entry["text"] = ""
# button_n =['1','2','3',]

# window = Tk()
# window.title("계산기")
# window.geometry("350x600")
# window.resizable(width=False, height=False)

# number_entry = Entry(window, width=20)
# number_entry.grid(row=0, column=0, columnspan=3)

# button_add = Button(window, text="+", width=5, command=lambda: pressButton('+'))
# button_add.grid(row=1, column=3)
# button_subtract = Button(window, text="-", width=5, command=lambda: pressButton('-'))
# button_subtract.grid(row=2, column=3)
# button_multiply = Button(window, text="*", width=5, command=lambda: pressButton('*'))
# button_multiply.grid(row=3, column=3)
# button_divide = Button(window, text="/", width=5, command=lambda: pressButton('/'))
# button_divide.grid(row=4, column=3)
# button_equal = Button(window, text="=", width=5, command=calculate)
# button_equal.grid(row=4, column=2)
# button_clear = Button(window, text="C", width=5, command=clear)
# button_clear.grid(row=4,column=0)

# button0 = Button(window, text="0",width=5,command=lambda:pressButton('0'))
# button0.grid(row=4, column=1)
# button1 = Button(window, text="1", width=5, command=lambda: pressButton('1'))
# button1.grid(row=1, column=0)
# button2 = Button(window, text="2", width=5, command=lambda: pressButton('2'))
# button2.grid(row=1, column=1)
# button3 = Button(window, text="3", width=5, command=lambda: pressButton('3'))
# button3.grid(row=1, column=2)
# button4 = Button(window, text="4", width=5, command=lambda: pressButton('4'))
# button4.grid(row=2, column=0)
# button5 = Button(window, text="5", width=5, command=lambda: pressButton('5'))
# button5.grid(row=2, column=1)
# button6 = Button(window, text="6", width=5, command=lambda: pressButton('6'))
# button6.grid(row=2, column=2)
# button7 = Button(window, text="7", width=5, command=lambda: pressButton('7'))
# button7.grid(row=3, column=0)
# button8 = Button(window, text="8", width=5, command=lambda: pressButton('8'))
# button8.grid(row=3, column=1)
# button9 = Button(window, text="9", width=5, command=lambda: pressButton('9'))
# button9.grid(row=3, column=2)

# window.mainloop()



# def click(num):
#     if num == "=":
#         result = eval(number_entry.get())
#         number_entry.delete(0, END)
#         number_entry.insert(END, "=" + str(result))
#     elif num == "C":
#         number_entry.delete(0, END)
#     elif num == "<":
#         current = number_entry.get()
#         number_entry.delete(0, END)
#         number_entry.insert(END, current[:-1])
#     else:
#         number_entry.insert(END, num)

# button_n = ['7', '8', '9', '/', '4', '5', '6', '*', '1', '2', '3', '-', '00', '0', '.', '+', 'C', '=', '<']

# window = Tk()
# window.title("계산기")
# window.geometry("200x290")
# window.resizable(width=False, height=False)

# number_entry = Entry(window, width=26)
# number_entry.place(x=5, y=10)

# x = 5
# y = 40

# for b in button_n:
#     Button(window, text=b, width=4, height=2, command=lambda t=b: click(t)).place(x=x, y=y)
#     x += 50
#     if (x - 5) % 200 == 0:
#         y += 50
#         x = 5

# window.mainloop()



# def game(com,me):
#     if com==me:
#         messagebox.showinfo("Result","비김....")
#         print("-----------")
#     elif(me==1 and com==3)or(me==2 and com==1)or(me==3 and com==2):
#         messagebox.showinfo("Result","내가 이김...")
#         print("-----------")
#     else : 
#         messagebox.showinfo("Result","내가 졌음...")
#         print("-----------")



# sel_me =int(input("1:가위 2:바위 3:보 =>" ))
# sel_com=random.randrange(1,4)
# game(sel_com,sel_me)



# def game():
#     me = var.get()
#     com = random.randint(1,3)

#     if me == 1:
#         label2.configure(image=photo_scis)
#     elif me == 2:
#         label2.configure(image=photo_rock)
#     else:
#         label2.configure(image=photo_pape)

#     if com == 1:
#         label3.configure(image=photo_scis)
#     elif com == 2:
#         label3.configure(image=photo_rock)
#     else:
#         label3.configure(image=photo_pape)

#     if com == me :
#         messagebox.showinfo("Result" ,"비겼습니다.")
#     elif (com == 1 and me == 2) or (com == 2 and me == 3) or (com == 3 and me == 1):
#         messagebox.showinfo("Result" ,"이겼습니다.")
#     else:
#         messagebox.showinfo("Result" ,"졌습니다.")

# window = Tk()
# window.geometry("500x900")

# photo_rock = PhotoImage(file="image/ro.gif")
# photo_scis = PhotoImage(file="image/sc.gif")
# photo_pape = PhotoImage(file="image/pa.gif")
# photo_st = PhotoImage(file="image/st.gif")

# var=IntVar()

# scis = Radiobutton(window, text="가위",variable=var,value=1,command=game).grid(row=1,column=0)
# rock = Radiobutton(window, text="바위",variable=var,value=2,command=game).grid(row=2,column=0)
# pape = Radiobutton(window, text="보",variable=var,value=3,command=game).grid(row=3,column=0)

# label1=Label(window,image=photo_st)
# label2=Label(window)
# label3=Label(window)
# label4=Label(window,text="본인선택")
# label5=Label(window,text="컴퓨터선택")
# label1.grid(row=0,column=0)
# label2.grid(row=4,column=0)
# label4.grid(row=5,column=0)
# label3.grid(row=6,column=0)
# label5.grid(row=7,column=0)
# window.mainloop()


# def prt(a):
#     com=random.randrange(1,4)
#     me=var.get()
#     label2.configure(image=spr_photo[me])
#     me=var.get()
#     label1.config(image=spr_photo)
#     game(com,me)


# def game(com,me):
#     if com==me:
#         messagebox






# def ent1_get():   # 엔트리 1값을 엔트리 2에 출력
#     ent1_value = entry1.get()  # entry1의 입력 값을 가져옴
#     entry2.delete(0, END)  # entry2의 내용을 삭제
#     ent1_value = float(ent1_value) / 1282.40  # 입력 값을 1282.40으로 나눔 (원을 달러로 변환)
#     entry2.insert(0, ent1_value)  # entry2에 변환된 값을 삽입

# def ent2_get():
#     ent2_value = entry2.get()  # entry2의 입력 값을 가져옴
#     entry1.delete(0, END)  # entry1의 내용을 삭제
#     ent2_value = float(ent2_value) * 1282.40  # 입력 값을 1282.40으로 곱함 (달러를 원으로 변환)
#     entry1.insert(0, ent2_value)  # entry1에 변환된 값을 삽입

# def clear():
#     entry1.delete(0, END)  # entry1의 내용을 삭제
#     entry2.delete(0, END)  # entry2의 내용을 삭제


# window = Tk()
# window.title("원(w) <-> 달러($)")
# window.geometry("500x500")
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
# window.mainloop()


# def convert():
#     value = entry1.get()
#     if value:
#         try:
#             value = float(value)
#             converted_value = value / 1282.40
#             entry2.delete(0, END)
#             entry2.insert(0, converted_value)
#         except ValueError:
#             entry2.delete(0, END)
#     else:
#         value = entry2.get()
#         if value:
#             try:
#                 value = float(value)
#                 converted_value = value * 1282.40
#                 entry1.delete(0, END)
#                 entry1.insert(0, converted_value)
#             except ValueError:
#                 entry1.delete(0, END)

# def clear():
#     entry1.delete(0, END)
#     entry2.delete(0, END)

# window = Tk()
# window.title("원(w) <-> 달러($)")

# label1 = Label(window, text="원(w)")
# label2 = Label(window, text="달러($)")
# entry1 = Entry(window)
# entry2 = Entry(window)
# label1.grid(row=0, column=0)
# label2.grid(row=1, column=0)
# entry1.grid(row=0, column=1)
# entry1.insert(0, "원 입력(w)")
# entry2.grid(row=1, column=1)
# entry2.insert(0, "달러 입력($)")
# button = Button(window, text="변환", command=convert)
# button_clear = Button(window, text="Clear", command=clear)
# button.grid(row=2, column=0, columnspan=2, sticky="we", padx=10, pady=5)
# button_clear.grid(row=2, column=2, padx=5, pady=5)

# window.mainloop()


# window = Tk()

# window.title("계산기")
# window.geometry("300x300")
# window.resizable(width=False,height=False)

# def button(_arg):
#     if EditEntry2.get() == "":
#         if _arg == "C":
#             EditEntry1.delete(0,END)

#         elif _arg == "=":
#             result = eval(EditEntry1.get())
#             EditEntry2.delete(0,END)
#             EditEntry2.insert(END,result)
#         else:
#             EditEntry1.insert(END,_arg)
#     else:
#         EditEntry1.delete(0,END)
#         EditEntry1.insert(END,EditEntry2.get() + _arg)
#         EditEntry2.delete(0,END)
#     return

# numList = [i for i in range(1,10)]
# charList = ["+","-","","/","C","="]
# allList = numList + charList
# print(allList)
# buttonList = [Button(window,text=f"{i}",\
#                      command=lambda x = i : button(x)) \
#               for i in allList]

# for i in range(len(numList)):
#     posX = int(i%3) 20
#     posY = int(i / 3) * 40
#     buttonList[i].place(x=posX,y=posY + 55)

# count = 0
# for i in range(len(numList),len(numList) + len(charList)):
#     buttonList[i].place(x=count * 20,y=180)
#     count += 1

# EditEntry1 = Entry(window,text="")
# EditEntry1.place(x=0,y=0)
# EditEntry2 = Entry(window,text="")
# EditEntry2.place(x=0,y=30)
# window.mainloop()


# scis = Radiobutton(window, text="가위",variable=var,value=1,command=game).grid(row=1,column=0)
# rock = Radiobutton(window, text="바위",variable=var,value=2,command=game).grid(row=2,column=0)
# pape = Radiobutton(window, text="보",variable=var,value=3,command=game).grid(row=3,column=0)
