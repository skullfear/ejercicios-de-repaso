print("holi")
def es_numero(caracter):
    return caracter.isdigit()

caracter = input("Introduce un carácter: ")

if es_numero(caracter):
    print("El carácter es un número.")
else:
    print("El carácter no es un número.")