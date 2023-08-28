for i in range(1,101):
    print(i,end="")
    if i % 10 == 0:
        print()# salto de linea despues de mostrar 10 numeros
    else:
        print("", end="")# espacio adicional entre numeros
        