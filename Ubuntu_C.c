#include <stdio.h>

long long calculoF(int n) {

       if (n == 0 || n == 1) {
                  return 1;
        }
        else {
             return n * calculoF( n - 1);
         }
}

int main ( ) {

      int n;

      printf("Digite a quantidade de produtos distintos (N) para o kit: ");
      scanf("%d", &n);

     if (n < 0) {
          printf("A quantidade de produtos não pode ser negativa.");
      }
      else {
                  long long totalformas = calculoF(n);
      printf("Existem %lld maneiras de organizar o kit com %d produtos. \n", totalformas, n);
    }
    return 0;
}