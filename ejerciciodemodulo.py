from operaciones_octal import suma_octal, resta_octal, multiplicacion_octal, division_octal

octal1 = input("Ingrese el primer número octal: ")
octal2 = input("Ingrese el segundo número octal: ")

resultado_suma = suma_octal(octal1, octal2)
resultado_resta = resta_octal(octal1, octal2)
resultado_multiplicacion = multiplicacion_octal(octal1, octal2)
resultado_division = division_octal(octal1, octal2)

print("Suma:", resultado_suma)
print("Resta:", resultado_resta)
print("Multiplicación:", resultado_multiplicacion)
print("División:", resultado_division)