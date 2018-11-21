import serial
from tkinter import *
import tkinter

arduinoData = serial.Serial('COM3',9600)

<<<<<<< HEAD
def led_on1():
    arduinoData.write(b'0')
    print("Encender")
def led_off1():
    arduinoData.write(b'1')
    print("Apagar")

def led_on2():
    arduinoData.write(b'2')
    print("Encender")
def led_off2():
    arduinoData.write(b'3')
    print("Apagar")
    
def led_on3():
    arduinoData.write(b'4')
    print("Encender")
def led_off3():
    arduinoData.write(b'5')
    print("Apagar")

def led_onA():
    arduinoData.write(b'6')
    print("Encender")
def led_offA():
    arduinoData.write(b'7')
=======
def led_on(valor):
    arduinoData.write(b'valor')
    print("Encender")
def led_off(valor):
    arduinoData.write(b'valor')
>>>>>>> bfdd51bf6332cc91121492d7fd5629620b673ce9
    print("Apagar")

led_control_window =Tk()
#Button = Tkinter.Button
<<<<<<< HEAD
btn1 = Button(led_control_window, text = "1_ON", command = led_on1)
btn2 = Button(led_control_window, text = "1_OFF", command = led_off1)
btn3 = Button(led_control_window, text = "2_ON", command = led_on2)
btn4 = Button(led_control_window, text = "2_OFF", command = led_off2)
btn5 = Button(led_control_window, text = "3_ON", command = led_on3)
btn6 = Button(led_control_window, text = "3_OFF", command = led_off3)
btn7 = Button(led_control_window, text = "ALL_ON", command = led_onA)
btn8 = Button(led_control_window, text = "ALL_OFF", command = led_offA)
=======
btn1 = Button(led_control_window, text = "1 ON", command = lambda:led_on(0))
btn3 = Button(led_control_window, text = "2 ON", command = lambda:led_on(2))
btn5 = Button(led_control_window, text = "3 ON", command = lambda:led_on(4))
btn7 = Button(led_control_window, text = "ALL ON", command = lambda:led_on(6))
btn2 = Button(led_control_window, text = "1 OFF", command = lambda:led_off(1))
btn4 = Button(led_control_window, text = "2 OFF", command = lambda:led_off(3))
btn6 = Button(led_control_window, text = "3 OFF", command = lambda:led_off(5))
btn8 = Button(led_control_window, text = "ALL OFF", command = lambda:led_off(7))
>>>>>>> bfdd51bf6332cc91121492d7fd5629620b673ce9



btn1.grid(row=0,column=1)
btn2.grid(row=0,column=2)
btn3.grid(row=1,column=1)
btn4.grid(row=1,column=2)
btn5.grid(row=2,column=1)
btn6.grid(row=2,column=2)
btn7.grid(row=3,column=1)
btn8.grid(row=3,column=2)


led_control_window.mainloop()


