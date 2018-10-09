#include <stdio.h>

int main(void){
   int i, numero;
   int n=1;
   
   printf("Introduce un número: ");
   scanf("%d", &numero);

   for(i=1;i<=numero;i++)
      n=n*i;

   printf("La factorial del número es: %d \n", n);

}
