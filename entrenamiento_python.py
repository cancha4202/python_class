i = 1
suma_edades = 0
max_pers = int(input("cuantas personas a ingresar: "))

while i <= max_pers:
    edad = int(input("ingrese la edad "))
    i = i + 1
    suma_edades = suma_edades + edad

    
promedio_edades = suma_edades/max_pers
print(float(promedio_edades))
