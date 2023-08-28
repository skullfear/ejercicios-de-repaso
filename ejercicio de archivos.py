print("holi")
with open("caracteres_ascii.txt", "w") as archivo:
    for i in range(128):
        caracter = chr(i)
        archivo.write(f"Valor ASCII: {i} - Carácter: {caracter}\n")

print("Archivo 'caracteres_ascii.txt' creado exitosamente.")