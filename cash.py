#cash.py
intentos = 3
clave_pred = 5096
clave_i = int(input("digite clave de ingreso: "))
while intentos >= 0 :
    if clave_pred == clave_i :
        print("menu transaccional")
        print("1: cambiar clave")
        print("2: mostrar saldo")
        print("3: realizar retiro")
        print("4: salir")
        print(".: digite opcion")
    else :
        print("clave no valida")
        int_max = intentos - 1
print("su cuenta ha sido bloqueada")
