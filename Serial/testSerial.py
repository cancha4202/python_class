#importar librerias para GUI
import serial
import os

opc = 'a'
#*****************************#
#arduinoData = serial.Serial("COM10",9600)

#FUNCIONES
def ON_OFF(valor):
    os.system('cls')
    valor = str(valor)
    arduinoData.write(str.encode(valor))
    print("ON/OFF")

while opc != 'c':
    data = str(input("Digite opcion: "))
    ON_OFF(data)
