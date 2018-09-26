#calculadora_avanzada.py
#1 funcion aritmetica
#2 resistencia
#3 voltajes
#4 potencia
#5 corriente

#1
import math
def menu():
    print (".::MENU ARITMETICA::.")
    print ("1. Suma")
    print ("2. Resta")
    print ("3. Multiplicacion")
    print ("4. Division")
    print ("5. Raiz Cuadrada")

def operaciones():
    if opc==1:
        print ("La Suma es: ",n1+n2)
    elif opc==2:
        print ("La Resta es: ",n1-n2)
    elif opc==3:
        print ("La Multiplicacion es: ",n1*n2)
    elif opc==4:
        print ("La Division es es: ",n1/n2)
    elif opc==5:
        print ("La raiz cuadrada es: ",n1**n2)
        
def datos():
    global n1,n2
    n1=int(input("Digite el primer numero: "))
    n2=int(input("Digite el segundo numero: "))

datos()
menu()
opc=int(input("Ingrese su opcion: "))
operaciones()


