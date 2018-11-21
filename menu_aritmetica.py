#Ejercicio menu calculadora
import os # importar librerias del sistema
suma = 0
resta = 0
multiplicacion = 0
division = 0

os.system("cls")
print ("Menu principal")
print ("1. sumar numeros")
print ("2. restar numeros")
print ("3. multiplicar numeros")
print ("4. dividir numeros")
print (".:::Dijite su opcion")

num1 = int(input("ingrese el primer numero "))
num2 = int(input("ingrese el segundo numero "))
opc = int(input("digite la operacion a realizar "))

if opc == 1 :
	print ("la suma es: ",num1 + num2)
elif opc == 2 :
	print ("la resta es: ",num1 - num2)
elif opc == 3 :
	print ("la multiplicacion es: ",num1 * num2)
elif opc == 4 :
        print ("la division es: ",num1 / num2)
else :
	print ("igresar numero valido")	


