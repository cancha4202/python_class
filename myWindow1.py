#importar librerias para GUI

from Tkinter import *
import Tkinter

#****************************

#Crear ventana
root = Tkinter.Tk()
root.geometry("400x400")#WExHE or ALxAN
root.title("MI CALCULADORA")

#define si se puede o no cambiar el tamaño de la paguinaWExHE or ALxAN
root.resizable(FALSE,FALSE)
root.configure(background="#9B00FF")



#******************************
#Pantalla
Display = Entry(root, font = ('arial', 20, 'bold'), width = 22, bd = 15, insertwidth = 4, bg = "#FF00C9", justify = "center").place(x=20,y=10)

Botoncito = Button(root, text = "1", width = 4
                   , height = 2).place(x=20,y=100)

#Abrir ventana para el programa
root.mainloop()

