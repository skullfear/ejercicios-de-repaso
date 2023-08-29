
def bin_to_dec(binary_str):
    return int(binary_str, 2)

def dec_to_bin(decimal):
    return bin(decimal)[2:]

def binary_addition(bin_str1, bin_str2):
    dec1 = bin_to_dec(bin_str1)
    dec2 = bin_to_dec(bin_str2)
    result_dec = dec1 + dec2
    return dec_to_bin(result_dec)

def binary_subtraction(bin_str1, bin_str2):
    dec1 = bin_to_dec(bin_str1)
    dec2 = bin_to_dec(bin_str2)
    result_dec = dec1 - dec2
    return dec_to_bin(result_dec)

def binary_multiplication(bin_str1, bin_str2):
    dec1 = bin_to_dec(bin_str1)
    dec2 = bin_to_dec(bin_str2)
    result_dec = dec1 * dec2
    return dec_to_bin(result_dec)

def binary_division(bin_str1, bin_str2):
    dec1 = bin_to_dec(bin_str1)
    dec2 = bin_to_dec(bin_str2)
    if dec2 == 0:
        return "Error: División por cero"
    result_dec = dec1 // dec2
    return dec_to_bin(result_dec)
