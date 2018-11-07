#importar librerias para GUI

from tkinter import *
import tkinter

#*****************************#

#Crear ventana
ventana_login = tkinter.Tk()
ventana_login.title("Login")#Nombre ventana
ventana_login.geometry("500x500") #WExHE or ALxAN
ventana_login.resizable(FALSE,FALSE) #define si se puede o no cambiar el tamaño de la paguinaWExHE or ALxAN
ventana_login.configure(background="#FFFFFF") #color fondo
color_boton=("gray77")
#FUNCIONES

def menuWindow():
    ventana2 = tkinter.Tk()
    ventana2.title("Menu de Control")#Nombre ventana
    ventana2.geometry("400x200") #WExHE or ALxAN
    
    
#*******************************#

Boton_Acceso = Button(ventana_login, text = "ingresar", width = 10 , height =5, command = menuWindow).place(x=50,y=50)

#Abrir ventana para el programa
ventana_login.mainloop()

