#importar librerias para GUI

import serial
from tkinter import *
import tkinter

arduinoData = serial.Serial('COM4',9600)

#*****************************#


#Crear ventana
quiz = tkinter.Tk()
quiz.geometry("400x400")
quiz.title("MI CALCULADORA")
quiz.configure(background="#17202A")

#FUNCIONES
def btnClick(valor):
    global operador
    operador = operador + str(valor)
    input_text.set(operador)

def clear():
    global operador
    operador = ("")
    input_text.set(operador)
    
def operacion():
    global operador
    try:
        operador = str(eval(operador))
        arduinoData.write(b'operador')
    except:
        clear()
        operador = ("ERROR")
    input_text.set(operador)


#*******************************#
    
input_text = StringVar()
operador = ""


    
#*******************************#

Display = Entry(quiz, font = ('times new roman', 20, 'bold'), width = 22, bd = 15, insertwidth = 4, bg = "#FDFEFE", justify = "right", textvariable = input_text).place(x=30,y=15)

Botoncito_1 = Button(quiz, text = "1", width = 4 , height = 2, command = lambda:btnClick(1)).place(x=30,y=100)
Botoncito_2 = Button(quiz, text = "2", width = 4 , height = 2, command = lambda:btnClick(2)).place(x=90,y=100)
Botoncito_3 = Button(quiz, text = "3", width = 4 , height = 2, command = lambda:btnClick(3)).place(x=150,y=100)
Botoncito_4 = Button(quiz, text = "4", width = 4 , height = 2, command = lambda:btnClick(4)).place(x=30,y=150)
Botoncito_5 = Button(quiz, text = "5", width = 4 , height = 2, command = lambda:btnClick(5)).place(x=90,y=150)
Botoncito_6 = Button(quiz, text = "6", width = 4 , height = 2, command = lambda:btnClick(6)).place(x=150,y=150)
Botoncito_7 = Button(quiz, text = "7", width = 4 , height = 2, command = lambda:btnClick(7)).place(x=30,y=200)
Botoncito_8 = Button(quiz, text = "8", width = 4 , height = 2, command = lambda:btnClick(8)).place(x=90,y=200)
Botoncito_9 = Button(quiz, text = "9", width = 4 , height = 2, command = lambda:btnClick(9)).place(x=150,y=200)
Botoncito_10 = Button(quiz, text = "0", width = 4 , height = 2, command = lambda:btnClick(0)).place(x=90,y=250)
Botoncito_11 = Button(quiz, text = "+", width = 4 , height = 2, command = lambda:btnClick('+')).place(x=210,y=100)
Botoncito_12 = Button(quiz, text = "-", width = 4 , height = 2, command = lambda:btnClick('-')).place(x=210,y=150)
Botoncito_13 = Button(quiz, text = "X", width = 4 , height = 2, command = lambda:btnClick('*')).place(x=210,y=200)
Botoncito_14 = Button(quiz, text = "/", width = 4 , height = 2, command = lambda:btnClick('/')).place(x=210,y=250)
Botoncito_15 = Button(quiz, text = "=", width = 4 , height = 2, command = operacion).place(x=270,y=200)
Botoncito_16 = Button(quiz, text = "CLS", width = 4 , height = 2, command = lambda:clear()).place(x=270,y=250)

quiz.mainloop()
