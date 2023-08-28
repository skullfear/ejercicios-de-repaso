def octal_a_decimal(octal):
    decimal = int(octal, 8)
    return decimal

def decimal_a_octal(decimal):
    octal = oct(decimal)[2:]
    return octal

def suma_octal(octal1, octal2):
    decimal1 = octal_a_decimal(octal1)
    decimal2 = octal_a_decimal(octal2)
    resultado_decimal = decimal1 + decimal2
    resultado_octal = decimal_a_octal(resultado_decimal)
    return resultado_octal

def resta_octal(octal1, octal2):
    decimal1 = octal_a_decimal(octal1)
    decimal2 = octal_a_decimal(octal2)
    resultado_decimal = decimal1 - decimal2
    resultado_octal = decimal_a_octal(resultado_decimal)
    return resultado_octal

def multiplicacion_octal(octal1, octal2):
    decimal1 = octal_a_decimal(octal1)
    decimal2 = octal_a_decimal(octal2)
    resultado_decimal = decimal1 * decimal2
    resultado_octal = decimal_a_octal(resultado_decimal)
    return resultado_octal

def division_octal(octal1, octal2):
    decimal1 = octal_a_decimal(octal1)
    decimal2 = octal_a_decimal(octal2)
    resultado_decimal = decimal1 // decimal2
    resultado_octal = decimal_a_octal(resultado_decimal)
    return resultado_octal


