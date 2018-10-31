#importar librerias para GUI

from tkinter import *
import tkinter

#****************************

#Crear ventana
root = tkinter.Tk()
root.geometry("400x400")#WExHE or ALxAN
root.title("MI CALCULADORA")

#define si se puede o no cambiar el tamaño de la paguinaWExHE or ALxAN
root.resizable(FALSE,FALSE)
root.configure(background="#FFFFFF")#color fondo



#******************************
#Pantalla
Display = Entry(root, font = ('times new roman', 20, 'bold'), width = 22, bd = 15, insertwidth = 4, bg = "#FFB600", justify = "left").place(x=30,y=15)

Botoncito_1 = Button(root, text = "1", width = 4 , height = 2).place(x=30,y=100)
Botoncito_2 = Button(root, text = "2", width = 4 , height = 2).place(x=90,y=100)
Botoncito_3 = Button(root, text = "3", width = 4 , height = 2).place(x=150,y=100)
Botoncito_4 = Button(root, text = "4", width = 4 , height = 2).place(x=210,y=100)
Botoncito_5 = Button(root, text = "5", width = 4 , height = 2).place(x=270,y=100)
Botoncito_6 = Button(root, text = "6", width = 4 , height = 2).place(x=330,y=100)
Botoncito_7 = Button(root, text = "7", width = 4 , height = 2).place(x=30,y=150)
Botoncito_8 = Button(root, text = "8", width = 4 , height = 2).place(x=90,y=150)
Botoncito_9 = Button(root, text = "9", width = 4 , height = 2).place(x=150,y=150)
Botoncito_10 = Button(root, text = "10", width = 4 , height = 2).place(x=210,y=150)
Botoncito_11 = Button(root, text = "11", width = 4 , height = 2).place(x=270,y=150)
Botoncito_12 = Button(root, text = "12", width = 4 , height = 2).place(x=330,y=150)

#Abrir ventana para el programa
root.mainloop()

