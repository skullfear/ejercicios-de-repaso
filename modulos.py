# main.py
import operaciones

bin_str1 = "1010"
bin_str2 = "1101"

sum_result = operaciones.binary_addition(bin_str1, bin_str2)
print("Suma:", sum_result)

subtraction_result = operaciones.binary_subtraction(bin_str1, bin_str2)
print("Resta:", subtraction_result)

multiplication_result = operaciones.binary_multiplication(bin_str1, bin_str2)
print("Multiplicación:", multiplication_result)

division_result = operaciones.binary_division(bin_str1, bin_str2)
print("División:", division_result)
