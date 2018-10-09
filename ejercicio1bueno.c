#include <stdio.h>

int main(void){

  int numero, mayor=-1;

  do{

    printf("Introduzca numero positivo (numero negativo para terminar)");
    scanf("%d", &numero);

    if(numero>mayor){

      mayor = numero;
      
    }

  } while(numero>=0);

  printf("El mayor numero es: %d \n", mayor);

}
