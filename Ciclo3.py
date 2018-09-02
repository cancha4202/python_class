tabla_i = int(input("ingrese desde que tabla se va a resolver: "))
tabla_max = int(input("ingrese el fin del rango: "))
while tabla_i <= tabla_max :
    multip = 1
    while multip <= 10 :
        print (tabla_i ,"*", multip, "=", tabla_i * multip)
        multip = multip + 1
    tabla_i = tabla_i + 1
