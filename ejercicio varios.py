print("holi")
import time

def convertir_a_segundos(horas, minutos, segundos):
    return horas * 3600 + minutos * 60 + segundos

horas_limite = int(input("Horas límite: "))
minutos_limite = int(input("Minutos límite: "))
segundos_limite = int(input("Segundos límite: "))

tiempo_limite_segundos = convertir_a_segundos(horas_limite, minutos_limite, segundos_limite)
tiempo_actual_segundos = 0

while tiempo_actual_segundos < tiempo_limite_segundos:
    horas_actual, segundos_actual = divmod(tiempo_actual_segundos, 3600)
    minutos_actual, segundos_actual = divmod(segundos_actual, 60)
    print(f"Tiempo actual: {horas_actual:02}:{minutos_actual:02}:{segundos_actual:02}", end="\r")
    time.sleep(1)
    tiempo_actual_segundos += 1

print("\n¡Tiempo límite alcanzado!")