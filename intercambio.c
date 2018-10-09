#include <stdio.h>

void Intercambio(int *a, int *b, int *c);

int main(void){

  int x,y,z;

  printf("Introduzca 3 valores separados por comas: ");
  scanf("%d,%d,%d", &x, &y, &z);
  Intercambio(&x,&y,&z);
  printf("Los valores intercambiados son: %d, %d, %d\n", x,y,z);

}

void Intercambio(int *a, int *b, int *c){

  int temp;
  temp = *a;
  *a = *c;
  *c = *b;
  *b = temp;
  
}
