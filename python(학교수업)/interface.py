from tkinter import*  #tk인터페이스 모듈에 있는 모든 함수 포함


# window =TK() # 최상위 윈도우 생성
#tkinter 모듈내의 TK 클래스가 하나의 윈도우를 나타낸다.
#TK 클래스는 제목을 가지고 있는 일반적인 윈도우
#TK 클래스의 객체를 생성하면 화면에 하나의 윈도우가 생성
#이 윈도우 안에 여러가지 위젯 추가 기능

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


##  종합적

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
    



def ent1_get():   #  엔트리 1값을 엔트리 2  에 출력
    ent1_value =entry1.get()
    entry2.delete(0,END)
    ent1_value = float(ent1_value)/28.35
    entry2.insert(0,ent1_value)

def ent2_get():
    ent2_value =entry2.get()
    entry1.delete(0,END)
    ent2_value =float(ent2_value)*28.35
    entry1.insert(0,ent2_value)


window=Tk()
window.title("그램(g) <->온스(oz)")
label1 =Label(window,text="그램g")
label2 =Label(window,text="온스(oz)")
entry1=Entry(window)
entry2=Entry(window)
label1.grid(row=0,column=0)
label2.grid(row=1,column=0)
entry1.grid(row=0,column=1)
entry1.insert(0,"그램입력(g)")
# entry1.insert(END,"(g)")
# entry1.delete(1,2)#2번째 글자 삭제 
# entry1.delete(0,END)#전체 삭제
entry2.grid(row=1,column=1)
entry2.insert(0,"온스입력(oz)")
# entry2.insert(END,"(oz)")
button1 = Button(window, text="그램 ->온스",command=ent1_get)
button2 = Button(window,text="온스 -> 그램",command=ent2_get)
button1.grid(row=2,column=0)
button2.grid(row=2,column=1)
window.mainloop()



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







