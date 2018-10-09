#include <stdio.h>

void LeerNumeros(int arreglo[], int cuantos);
void Ordena(int arreglo[], int cuantos);

int main(void){

  int cuantos;
  int i;
  do{
  printf("Introduce cuantos numeros vas a poner: \n");
  scanf("%d", &cuantos);
  }while(cuantos>100);
  int arreglo[cuantos];


  for(i=0;i<cuantos;i++){

  printf("Introduce un valor para agregarlo al arreglo: ");
  scanf("%d", &arreglo[i]);
  Ordena(arreglo, cuantos);
  }

  printf("==============================================\n");
  printf("Valores impresos de manera ascendente\n");
  printf("==============================================\n");
  for(i=0;i<cuantos;i++){
    printf("Numero[%d]: %d\n", i+1, arreglo[i]);
  }

}


void Ordena(int arreglo[], int cuantos){

  int i, j, tap;

  for(i=0;i<cuantos;i++)

    for(j=i+1;j<cuantos;j++){

      if(arreglo[i]>arreglo[j]){

	tap=arreglo[i];
	arreglo[i] = arreglo[j];
	arreglo[j] = tap;

      }

    }

}
