#login.py
from tkinter import *

def menuWindow():
	ventana2=Tk()
	ventana2.title("Menu de control")
	ventana2.geometry("400x200")


ventana_login=Tk()
ventana_login.title("Login")
ventana_login.geometry("300x400")
ventana_login.resizable(FALSE, FALSE)
ventana_login.configure(background="SkyBlue4")
color_boton=("gray77")

BotonAcceso=Button(ventana_login,text="Ingresar",width=30,height=3,command=menuWindow).place(x=50,y=50)

ventana_login.mainloop()
