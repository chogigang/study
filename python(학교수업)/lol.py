# 저항값 전류,전압 계산기 

# def calc_resistors(r1, r2, r3, r4, r5, r6, r7, voltage):

#     r23 = r2 + r3
#     r23r4 = 1 / (1 / r23 + 1 / r4)
#     r56 = r5 + r6
#     r56r23r4 = 1 / (1 / r56 + 1 / r23r4)
#     r_total = r1 +r56r23r4 +r7

#     Itotal = voltage / r_total *1000
#     Vad = Itotal * r_total / 1000
#     Vbc = Itotal * r56r23r4
#     I1 = Vbc / r23 
#     I2 = Vbc / r4 
#     I3 = Vbc / r56 

#     Vr2 = I1 * r2 / 1000
#     Vr3 = I1 * r3/ 1000
#     Vr4 = I2 * r4/ 1000
#     Vr5 = I3 * r5/ 1000
#     Vr6 = I3 * r6/ 1000
#     Vr7 = Itotal * r7 / 1000

#     print(f"전체저항 : {r_total:.2f} ohms")
#     print(f"I : { Itotal:.2f} mA")
#     print(f"I1 : {I1:.2f} mA")
#     print(f"I2 : {I2:.2f} mA")
#     print(f"I3 : {I3:.2f} mA")
#     print(f"Vad : {Vad:.2f} V")
#     print(f"Vr2 : {Vr2:.2f} V")
#     print(f"Vr3 : {Vr3:.2f} V")
#     print(f"Vr4 : {Vr4:.2f} V")
#     print(f"Vr5 : {Vr5:.2f} V")
#     print(f"Vr6 : {Vr6:.2f} V")
#     print(f"Vr7 : {Vr7:.2f} V")

# r1 = float(input("R1 (ohms): "))
# r2 = float(input("R2 (ohms): "))
# r3 = float(input("R3 (ohms): "))
# r4 = float(input("R4 (ohms): "))
# r5 = float(input("R5 (ohms): "))
# r6 = float(input("R6 (ohms): "))
# r7 = float(input("R7 (ohms): "))
# voltage = float(input("Voltage (V): "))

# calc_resistors(r1, r2, r3, r4, r5, r6, r7, voltage)



# # 그램,온스 계산기 

# import tkinter as tk
# from tkinter import *

# value = 28.35

# def update_window():
#     global value
#     editvalue = edit.get()
#     try:
#         editvalue = int(editvalue)
#         if variable.get() == OptionList[0]:
#             result.config(text=f"{editvalue} {OptionList[0]}은(는) \n{round(editvalue / value,2)} {OptionList[1]} 입니다.")
#         elif variable.get() == OptionList[1]:
#             result.config(text=f"{editvalue} {OptionList[1]}은(는) \n{round(editvalue * value,2)} {OptionList[0]} 입니다.")
#     except:
#         pass

#     result.after(100,update_window)

# OptionList = ["그램(g)","온스(oz)"] 

# window = tk.Tk()

# window.geometry('250x100')
# window.resizable(height=False,width=False)

# text = Label(window,text="무게 : ")
# text.grid(row=0,column=0)

# result = Label(window,text="")
# result.place(x=10,y=35)

# edit = Entry(window)
# edit.config(width=10)
# edit.grid(row=0,column=1)

# variable = tk.StringVar(window)
# variable.set(OptionList[0])

# ddl = tk.OptionMenu(window, variable,*OptionList)
# ddl.config(width=7)
# ddl.grid(row=0,column=2)

# update_window()
# window.mainloop()


def calc_resistors(r1, r2, r3, r4, r5, r6, voltage):

    r23 = (r2 * r3) / (r2 + r3)
    r56 = (r5 * r6) / (r5 + r6)
    r_total = r1 + r23 + r4 + r56
    Itotal = voltage / r_total *1000
    Vbc = Itotal * r23
    Vde = Itotal * r56
    I1 = Vbc / r2 
    I2 = Vbc / r3 
    I3 = Vde / r5
    I4 = Vde / r6 

    Vr1 = Itotal * r1 / 1000
    Vbc = Itotal * r23/ 1000
    Vr4 = Itotal * r4/ 1000
    Vde = Itotal * r56/ 1000

    Vae = Vr1 + Vbc + Vr4 + Vde

    print(f"전체저항 : {r_total:.2f} ohms")
    print(f"I : { Itotal:.2f} mA")
    print(f"I1 : {I1:.2f} mA")
    print(f"I2 : {I2:.2f} mA")
    print(f"I3 : {I3:.2f} mA")
    print(f"I4 : {I4:.2f} mA")
    print(f"Vae : {Vae:.2f} V")
    print(f"Vr1 : {Vr1:.2f} V")
    print(f"Vbc : {Vbc:.2f} V")
    print(f"Vr4 : {Vr4:.2f} V")
    print(f"Vde : {Vde:.2f} V")

r1 = float(input("R1 (ohms): "))
r2 = float(input("R2 (ohms): "))
r3 = float(input("R3 (ohms): "))
r4 = float(input("R4 (ohms): "))
r5 = float(input("R5 (ohms): "))
r6 = float(input("R6 (ohms): "))
voltage = float(input("Voltage (V): "))

calc_resistors(r1, r2, r3, r4, r5, r6, voltage)