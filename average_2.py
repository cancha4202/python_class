#average_2.py

promed_edades = 0
promed_mas = 0
promed_fem = 0
cont = 1
sum_ed = 0
suma_ed_Muj = 0
suma_ed_Hom = 0
suma_mas = 0
suma_fem = 0


cant = int(input("Iavor ingresar la cantidad de personas: "))
while cont <= cant:
    personas = int(input("Ingrese la edad: "))
    print("Digame si es masculino o femenino")
    genero = input("F ó f para femenino ó M ó m para masculino : ")
    sum_ed = sum_ed + personas
        
    if genero == ("m, M"):
         suma_mas = suma_mas + 1
         suma_ed_Hom = suma_ed_Hom + personas
    elif genero == ("f, F"):
            suma_fem = suma_fem + 1
            suma_ed_Muj = suma_ed_Muj + personas
    cont = cont + 1
promed_edades = sum_ed / cant
promed_mas = suma_ed_Hom / suma_mas
promed_fem = suma_ed_Muj / suma_fem


print("El numero de personas son: ", cant)
print("El promedio de todas las edades es: ",promed_edades)
print("El numero de hombres es: ",suma_mas)
print("El promedio de las edades de los hombres es: ",promed_mas)
print("El numero de mujeres es: ",suma_fem)
print("El promedio de las edades de las mujeres es: ",promed_fem)
print("El numero de personas es: ", cont)
