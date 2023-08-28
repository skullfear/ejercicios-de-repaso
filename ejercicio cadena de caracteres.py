print("holi")
cadena = input("Introduce una cadena de caracteres: ")
mayusculas = 0

for caracter in cadena:
    if caracter.isupper():
        mayusculas += 1

print("La cadena tiene", mayusculas, "mayúscula(s).")
