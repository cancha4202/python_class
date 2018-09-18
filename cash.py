#cash.py
import os
os.system("cls")

#la clave era 5096

saldo = int(7000000)
int_max = 3
int_hech = 1
clave_pred = 1
clave_var = clave_pred
clave_i = int(input("digite clave de ingreso: "))
int_para_salir = int_max - int_hech

while int_max > 1:
    int_max = int_max - int_hech
    if clave_pred == clave_i :
        int_max = 100
        print("menu transaccional")
        print("1: cambiar clave")
        print("2: mostrar saldo")
        print("3: realizar retiro")
        print("4: salir")
        print(".: digite opcion")


        opc = int(input("digite la operacion a realizar: "))
        if opc == 1:
            clave_var = int(input("ingrese nueva clave: "))
        elif opc == 2:
            print("su saldo es de: ", saldo)
        elif opc == 3:
            print("monto a retirar?")
            print("1: $10000")
            print("2: $20000")
            print("3: $50000")
            print("4: $100000")
            print("5: $200000")
            print("6: $400000")
            print("7: $600000")
            print("8: $1000000")
            print(".: digite opcion")

            sal_1 = 10000
            sal_2 = 20000
            sal_3 = 50000
            sal_4 = 100000
            sal_5 = 200000
            sal_6 = 400000
            sal_7 = 600000
            sal_8 = 1000000
            
            opc_d = int(input("ingrese cuanto dinero desea retirar: "))
            
            if opc_d == 1:
                print("su retiro esta siendo procesado")
                if saldo > sal_1:
                    print("usted ha retirado: $10000 cop")
                    print("ahora su saldo es de: ",saldo - 10000)
                else:
                    print("Saldo insuficiente para completar la transaccion")
            elif opc_d == 2:
                print("su retiro esta siendo procesado")
                if saldo > sal_2:
                    print("usted ha retirado: $20000 cop")
                    print("ahora su saldo es de: ",saldo - 20000)
                else:
                    print("Saldo insuficiente para completar la transaccion")
            elif opc_d == 3:
                print("su retiro esta siendo procesado")
                if saldo > sal_3:
                    print("usted ha retirado: $50000 cop")
                    print("ahora su saldo es de: ",saldo - 50000)
                else:
                    print("Saldo insuficiente para completar la transaccion")
            elif opc_d == 4:
                print("su retiro esta siendo procesado")
                if saldo > sal_4:
                    print("usted ha retirado: $100000 cop")
                    print("ahora su saldo es de: ",saldo - 100000)
                else:
                    print("Saldo insuficiente para completar la transaccion")
            elif opc_d == 5:
                print("su retiro esta siendo procesado")
                if saldo > sal_5:
                    print("usted ha retirado: $200000 cop")
                    print("ahora su saldo es de: ",saldo - 200000)
                else:
                    print("Saldo insuficiente para completar la transaccion")
            elif opc_d == 6:
                print("su retiro esta siendo procesado")
                if saldo > sal_6:
                    print("usted ha retirado: $400000 cop")
                    print("ahora su saldo es de: ",saldo - 400000)
                else:
                    print("Saldo insuficiente para completar la transaccion")
            elif opc_d == 7:
                print("su retiro esta siendo procesado")
                if saldo > sal_7:
                    print("usted ha retirado: $600000 cop")
                    print("ahora su saldo es de: ",saldo - 600000)
                else:
                    print("Saldo insuficiente para completar la transaccion")
            elif opc_d == 8:
                print("su retiro esta siendo procesado")
                if saldo > sal_8:
                    print("usted ha retirado: $1000000 cop")
                    print("ahora su saldo es de: ",saldo - 1000000)
                else:
                    print("Saldo insuficiente para completar la transaccion")
            else :
                print("ingrese una opvion valida")

                
        elif opc == 4:
            print("usted ha salido de su cuenta")
            break
        else:
            ("ingrese opcion valida")

else :
    if int_max < int_hech:
        print("le quedan", int_para_salir, "intentos")
        clave_i = int(input("digite clave de ingreso nuevamente: "))
