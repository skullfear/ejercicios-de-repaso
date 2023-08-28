print("holi")
numeros = []

for i in range(5):
    numero = float(input("Introduce un número: "))
    numeros.append(numero)

media = sum(numeros) / len(numeros)
print("La media aritmética de los números es:", media)
