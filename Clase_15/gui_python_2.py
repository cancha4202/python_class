import serial
from tkinter import *
import tkinter

arduinoData = serial.Serial('COM3',9600)

def led_on():
    arduinoData.write(b'1')
    print("Encender")
def led_off():
    arduinoData.write(b'0')
    print("Apagar")

led_control_window =Tk()
#Button = Tkinter.Button
btn1 = Button(led_control_window, text = "1_ON", command = led_on)
btn2 = Button(led_control_window, text = "1_OFF", command = led_off)
btn3 = Button(led_control_window, text = "2_ON", command = led_on)
btn4 = Button(led_control_window, text = "2_OFF", command = led_off)
btn5 = Button(led_control_window, text = "3_ON", command = led_on)
btn6 = Button(led_control_window, text = "3_OFF", command = led_off)
btn7 = Button(led_control_window, text = "ALL_ON", command = led_on)
btn8 = Button(led_control_window, text = "ALL_OFF", command = led_off)



btn1.grid(row=0,column=1)
btn2.grid(row=0,column=2)
btn3.grid(row=1,column=1)
btn4.grid(row=1,column=2)
btn5.grid(row=2,column=1)
btn6.grid(row=2,column=2)
btn7.grid(row=3,column=1)
btn8.grid(row=3,column=2)


led_control_window.mainloop()


