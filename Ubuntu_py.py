n = int(input("Digite um número para calcular o fatorial: "))

if n < 0:
   print("Erro na quantidade digitada.")
else:
 resultado = 1

for i in range(1, n + 1):
 resultado *= i

 print(f"O fatorial de {n} é {resultado}")

input("Aperte ENTER para finalizar o programa")