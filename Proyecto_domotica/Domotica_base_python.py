
#importar librerias para GUI
import serial
from tkinter import *
import tkinter


#*****************************#
##arduino = serial.Serial("COM3",9600)


#Crear ventana
ventana_login = tkinter.Tk()
ventana_login.title("Login")
ventana_login.geometry("500x500")
ventana_login.resizable(FALSE,FALSE)
ventana_login.configure(background="#FFFFFF")
color_boton=("gray77")

#FUNCIONES

def ON_OFF(valor):
    arduinoData.write(b'valor')
    #print ("Encendido")

def Leds():
    print ("funciona")

def MainM():
    global ventana_2
    ventana_2 = tkinter.Tk()
    ventana_2.title("Menu de Control")
    ventana_2.geometry("400x400")
    ventana_2.resizable(FALSE,FALSE)
    ventana_2.configure(background="#000000")
    Btn_Menu_Sala = Button(ventana_2, text = "Sala", width = 15 , height = 2, command = SalaCocina).place(x=30,y=30)
    Btn_Menu_Garaje = Button(ventana_2, text = "Garaje", width = 15, height = 2, command = Garaje).place(x=30,y=100)
    Btn_Alcoba = Button(ventana_2, text = "Alcoba", width = 15 , height = 2, command = Alcoba).place(x=150,y=30)
    Btn_Baño = Button(ventana_2, text = "Baño", width = 15 , height = 2, command = Baño).place(x=270,y=100)
    Btn_Lavado = Button(ventana_2, text = "Lavadero", width = 15 , height = 2, command = Lavadero).place(x=150,y=100)
    Btn_semaf = Button(ventana_2, text = "Encender Una Vez", width = 15 , height = 2, command = lambda:ON_OFF(12)).place(x=270,y=30)

def SalaCocina():
    global ventana_3
    ventana_3 = tkinter.Tk()
    ventana_3.title("Sala")
    ventana_3.geometry("175x200")
    ventana_3.resizable(FALSE,FALSE)
    ventana_3.configure(background="#000000")
    Btn_LuzSala = Button(ventana_3, text = "Luz Sala", width = 15 , height = 2, command = lambda:ON_OFF(0)).place(x=31.5,y=15)
    Btn_PuertaP = Button(ventana_3, text = "Puerta Principal", width = 15 , height = 2, command = lambda:ON_OFF(13)).place(x=31.5,y=60)
    Btn_Luz_Cocina = Button(ventana_3, text = "Luz Cocina", width = 15 , height = 2, command = lambda:ON_OFF(1)).place(x=31.5,y=105)
    Btn_Estufa = Button(ventana_3, text = "Estufa", width = 15 , height = 2, command = Estufa).place(x=31.5,y=150)

def Estufa():
    global ventana_5
    ventana_5 = tkinter.Tk()
    ventana_5.title("Menu de Cocina")
    ventana_5.geometry("175x250")
    ventana_5.resizable(FALSE,FALSE)
    ventana_5.configure(background="#000000")
    Btn_Fogon_1 = Button(ventana_5, text = "Fogon 1", width = 15 , height = 2, command = lambda:ON_OFF(6)).place(x=31.5,y=15)
    Btn_Fogon_2 = Button(ventana_5, text = "Fogon 2", width = 15 , height = 2, command = lambda:ON_OFF(7)).place(x=31.5,y=60)
    Btn_Fogon_3 = Button(ventana_5, text = "Fogon 3", width = 15 , height = 2, command = lambda:ON_OFF(8)).place(x=31.5,y=105)
    Btn_Fogon_4 = Button(ventana_5, text = "Fogon 4", width = 15 , height = 2, command = lambda:ON_OFF(9)).place(x=31.5,y=150)
    Btn_temp = Button(ventana_5, text = "Temp", width = 15 , height = 2, command = lambda:ON_OFF(11)).place(x=31.5,y=195)

def Garaje():
    global ventana_6
    ventana_6 = tkinter.Tk()
    ventana_6.title("Garaje")
    ventana_6.geometry("175x150")
    ventana_6.resizable(FALSE,FALSE)
    ventana_6.configure(background="#000000")
    Btn_Luz = Button(ventana_6, text = "Luz", width = 15 , height = 2, command = lambda:ON_OFF(2)).place(x=31.5,y=15)
    Btn_Puerta = Button(ventana_6, text = "Puerta Garaje", width = 15 , height = 2, command = lambda:ON_OFF(14)).place(x=31.5,y=60)
    Btn_temp_G = Button(ventana_6, text = "Temp", width = 15 , height = 2, command = lambda:ON_OFF(10)).place(x=31.5,y=105)
    
def Alcoba():
    global ventana_7
    ventana_7 = tkinter.Tk()
    ventana_7.title("Menu de Control")
    ventana_7.geometry("175x130")
    ventana_7.resizable(FALSE,FALSE)
    ventana_7.configure(background="#000000")
    Btn_Luz = Button(ventana_7, text = "Luz", width = 15 , height = 2, command = lambda:ON_OFF(4)).place(x=31.5,y=15)

def Baño():
    global ventana_8
    ventana_8 = tkinter.Tk()
    ventana_8.title("Menu de Control")
    ventana_8.geometry("175x130")
    ventana_8.resizable(FALSE,FALSE)
    ventana_8.configure(background="#000000")
    Btn_Luz = Button(ventana_8, text = "Luz", width = 15 , height = 2, command = lambda:ON_OFF(3)).place(x=31.5,y=15)

def Lavadero():
    global ventana_9
    ventana_9 = tkinter.Tk()
    ventana_9.title("Menu de Control")
    ventana_9.geometry("175x130")
    ventana_9.resizable(FALSE,FALSE)
    ventana_9.configure(background="#000000")
    Btn_Luz = Button(ventana_9, text = "Luz", width = 15 , height = 2, command = lambda:ON_OFF(5)).place(x=31.5,y=15)




    
#*******************************#


input_text_user = StringVar()
Screen_text = ""

input_text_key = StringVar()
Screen_text = ""

Display_user = Entry(ventana_login, font = ('times new roman', 20, 'bold'), width = 22, bd = 20, insertwidth = 3, bg = "#FDFEFE", justify = "left", textvariable = input_text_user).place(x=30,y=15)
Display_key = Entry(ventana_login, font = ('times new roman', 20, 'bold'), width = 22, bd = 20, insertwidth = 3, bg = "#FDFEFE", justify = "left", textvariable = input_text_key).place(x=30,y=100)

#*******************************#

Btn_Acceso = Button(ventana_login, text = "Entrar", width = 10 , height = 2, command = MainM).place(x=30,y=430)








#Abrir ventana para el programa
ventana_login.mainloop()

