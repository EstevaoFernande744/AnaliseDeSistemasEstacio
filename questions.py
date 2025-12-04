def maximo(num1, num2):
    if num1 > num2:
        return num1
    else:
        return num2


# Programa principal
print("=== Maior entre dois números ===")
n1 = float(input("Digite o primeiro número: "))
n2 = float(input("Digite o segundo número: "))


print(f"O maior valor é: {maximo(n1, n2)}")

def minimo(num1, num2):
    if num1 < num2:
        return num1
    else:
        return num2


# Programa principal
print("=== Menor entre dois números ===")
n1 = float(input("Digite o primeiro número: "))
n2 = float(input("Digite o segundo número: "))

print(f"O menor valor é: {minimo(n1, n2)}")
