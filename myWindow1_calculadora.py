#importar librerias para GUI

from tkinter import *
import tkinter

#*****************************#

#Crear ventana
root = tkinter.Tk()
root.geometry("400x400")#WExHE or ALxAN
root.title("MI CALCULADORA")

#define si se puede o no cambiar el tamaño de la paguinaWExHE or ALxAN
root.resizable(FALSE,FALSE)
root.configure(background="#17202A")#color fondo

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
        opera=str(eval(operador))
    except:
        clear()
        opera = ("ERROR")
    input_text.set(opera)#mostrar resultado

    
    

    

#*******************************#
    
input_text = StringVar()
operador = ""


    
#*******************************#
#Pantalla
Display = Entry(root, font = ('times new roman', 20, 'bold'), width = 22, bd = 15, insertwidth = 4, bg = "#FDFEFE", justify = "right", textvariable = input_text).place(x=30,y=15)

Botoncito_1 = Button(root, text = "1", width = 4 , height = 2, command = lambda:btnClick(1)).place(x=30,y=100)
Botoncito_2 = Button(root, text = "2", width = 4 , height = 2, command = lambda:btnClick(2)).place(x=90,y=100)
Botoncito_3 = Button(root, text = "3", width = 4 , height = 2, command = lambda:btnClick(3)).place(x=150,y=100)
Botoncito_4 = Button(root, text = "4", width = 4 , height = 2, command = lambda:btnClick(4)).place(x=30,y=150)
Botoncito_5 = Button(root, text = "5", width = 4 , height = 2, command = lambda:btnClick(5)).place(x=90,y=150)
Botoncito_6 = Button(root, text = "6", width = 4 , height = 2, command = lambda:btnClick(6)).place(x=150,y=150)
Botoncito_7 = Button(root, text = "7", width = 4 , height = 2, command = lambda:btnClick(7)).place(x=30,y=200)
Botoncito_8 = Button(root, text = "8", width = 4 , height = 2, command = lambda:btnClick(8)).place(x=90,y=200)
Botoncito_9 = Button(root, text = "9", width = 4 , height = 2, command = lambda:btnClick(9)).place(x=150,y=200)
Botoncito_10 = Button(root, text = "0", width = 4 , height = 2, command = lambda:btnClick(0)).place(x=90,y=250)
Botoncito_11 = Button(root, text = "+", width = 4 , height = 2, command = lambda:btnClick('+')).place(x=210,y=100)
Botoncito_12 = Button(root, text = "-", width = 4 , height = 2, command = lambda:btnClick('-')).place(x=210,y=150)
Botoncito_13 = Button(root, text = "X", width = 4 , height = 2, command = lambda:btnClick('*')).place(x=210,y=200)
Botoncito_14 = Button(root, text = "/", width = 4 , height = 2, command = lambda:btnClick('/')).place(x=210,y=250)
Botoncito_15 = Button(root, text = "=", width = 4 , height = 2, command = operacion).place(x=270,y=200)
Botoncito_16 = Button(root, text = "CLS", width = 4 , height = 2, command = lambda:clear()).place(x=270,y=250)
Botoncito_17 = Button(root, text = "(", width = 4 , height = 2, command = lambda:btnClick('(')).place(x=330,y=100)
Botoncito_18 = Button(root, text = ")", width = 4 , height = 2, command = lambda:btnClick(')')).place(x=330,y=150)



#Abrir ventana para el programa
root.mainloop()

