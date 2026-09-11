n = int(input("Digite uma quantidade para calcular o fatorial de: "))

if n < 0:
 print("Erro na quantidade digitada")
else: 
 resultado = 1

for i in range(1, n * 1):
 resultado *= i

print(f"O fatorial de {n} fica {resultado}")

input("Aperte ENTER para terminar o programa")
