#cash.py
import os
os.system("cls")

int_max = 3
int_hech = 1
clave_pred = 5096
clave_i = int(input("digite clave de ingreso: "))

while int_max > 1:
    int_max = int_max - int_hech
    print("le quedan", int_max - int_hech, "intentos")
    if clave_pred == clave_i :
        print("menu transaccional")
        print("1: cambiar clave")
        print("2: mostrar saldo")
        print("3: realizar retiro")
        print("4: salir")
        print(".: digite opcion")
        
    else :
        clave_i = int(input("digite clave de ingreso nuevamente: "))
        
        
        
