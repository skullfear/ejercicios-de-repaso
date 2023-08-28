print("holi")
def calcular_potencia(base, exponente):
    if exponente == 0:
        return 1
    else:
        return base * calcular_potencia(base, exponente - 1)

base = float(input("Introduce la base: "))
exponente = int(input("Introduce el exponente: "))

resultado = calcular_potencia(base, exponente)
print(f"{base} elevado a la {exponente} es igual a {resultado}")