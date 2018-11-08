
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

def MainM():
    global ventana_2
    ventana_2 = tkinter.Tk()
    ventana_2.title("Menu de Control")
    ventana_2.geometry("400x400")
    ventana_2.resizable(FALSE,FALSE)
    Btn_Encender = Button(ventana_2, text = "Encender Circuito", width = 15 , height = 2, command = Leds).place(x=30,y=30)
    Btn_Apagar = Button(ventana_2, text = "Apagar Circuito", width = 15 , height = 2, command = Leds).place(x=30,y=100)
    Btn_Leds = Button(ventana_2, text = "Luces", width = 15 , height = 2, command = Leds).place(x=150,y=30)
    Btn_Fans = Button(ventana_2, text = "Ventiladores", width = 15 , height = 2, command = Fans).place(x=270,y=100)
    Btn_Doors = Button(ventana_2, text = "Puertas", width = 15 , height = 2, command = Doors).place(x=150,y=100)

def Leds():
    global ventana_3
    ventana_3 = tkinter.Tk()
    ventana_3.title("Menu Leds")
    ventana_3.geometry("400x400")
    ventana_3.resizable(FALSE,FALSE)
    ventana_3.configure(background="#000000")
    Btn_led_1 = Button(ventana_3, text = "Luz 1", width = 5 , height = 2, command = Leds).place(x=30,y=30)
    Btn_led_2 = Button(ventana_3, text = "Luz 2", width = 5 , height = 2, command = Leds).place(x=100,y=30)
    Btn_led_3 = Button(ventana_3, text = "Luz 3", width = 5 , height = 2, command = Leds).place(x=170,y=30)
    Btn_led_4 = Button(ventana_3, text = "Luz 4", width = 5 , height = 2, command = Leds).place(x=240,y=30)

def Fans():
    global ventana_4
    ventana_4 = tkinter.Tk()
    ventana_4.title("Menu de Control")
    ventana_4.geometry("200x90")
    ventana_4.resizable(FALSE,FALSE)
    ventana_4.configure(background="#000000")
    Btn_Fan_1 = Button(ventana_4, text = "Ventilador 1", width = 15 , height = 2, command = Fans).place(x=45,y=15)
    Btn_Fan_2 = Button(ventana_4, text = "Ventilador 2", width = 15 , height = 2, command = Fans).place(x=45,y=75)

def Doors():
    global ventana_5
    ventana_5 = tkinter.Tk()
    ventana_5.title("Menu de Control")
    ventana_5.geometry("400x200")
    ventana_5.resizable(FALSE,FALSE)
    ventana_5.configure(background="#000000")
    Btn_Door_1 = Button(ventana_5, text = "Puerta 1", width = 15 , height = 2, command = Doors).place(x=20,y=30)
    Btn_Door_2 = Button(ventana_5, text = "Puerta 2", width = 15 , height = 2, command = Doors).place(x=145,y=30)
    Btn_Door_3 = Button(ventana_5, text = "Puerta 3", width = 15 , height = 2, command = Doors).place(x=270,y=30)
    Btn_Door_4 = Button(ventana_5, text = "Puerta 4", width = 15 , height = 2, command = Doors).place(x=20,y=100)
    Btn_Door_5 = Button(ventana_5, text = "Puerta 5", width = 15 , height = 2, command = Doors).place(x=145,y=100)
    Btn_Garaje = Button(ventana_5, text = "Garaje", width = 15 , height = 2, command = Doors).place(x=270,y=100)


    
#*******************************#

input_text_user = StringVar()
Screen_text = ""

input_text_key = StringVar()
Screen_text = ""

Display_user = Entry(ventana_login, font = ('times new roman', 20, 'bold'), width = 22, bd = 20, insertwidth = 3, bg = "#FDFEFE", justify = "left", textvariable = input_text_user).place(x=30,y=15)
Display_key = Entry(ventana_login, font = ('times new roman', 20, 'bold'), width = 22, bd = 20, insertwidth = 3, bg = "#FDFEFE", justify = "left", textvariable = input_text_key).place(x=30,y=100)

#*******************************#

Btn_Acceso = Button(ventana_login, text = "ingresar", width = 10 , height = 2, command = MainM).place(x=30,y=430)








#Abrir ventana para el programa
ventana_login.mainloop()

