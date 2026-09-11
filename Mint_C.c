#include <stdio.h>

long long calculoF(int n) {

  if (n == 0 || n == 1) {
           return 1;
  }
  else {
        return n * calculoF(n - 1);
  }

}

int main () {

int n;

printf("Digite a quantidade de produtos distintos para o kit: ");
scanf("%d", &n);

if(n < 0) {
        printf("Quantidade negativa digitada.");
}
else {
      long long totalFormas = calculoF(n);
printf("Existem %lld maneiras de organizar o kit com %d produtos. \n", totalFormas, n);
}
return 0;

}
