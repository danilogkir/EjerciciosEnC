#include <stdio.h>

int main(void){

  int arreglo1[9];
  int i;
  int suma;
  int promedio;
  int mayor;
  int menor;
  
  for(i=0;i<10;i++){
    printf("Introduce un valor para agregar al arreglo: ");
    scanf("%d", &arreglo1[i]);
  }

  mayor = arreglo1[0];
  menor = arreglo1[0];

  for(i=0;i<10;i++){

      if(arreglo1[i]>mayor){
	mayor = arreglo1[i];
      }

      if(arreglo1[i]<menor){
	menor = arreglo1[i];
      }
      
  }

  
  suma = arreglo1[0]+arreglo1[1]+arreglo1[2]+arreglo1[3]+arreglo1[4]+arreglo1[5]+arreglo1[6]+arreglo1[7]+arreglo1[8]+arreglo1[9];
  promedio = suma / 10;

  printf("La suma de todos los valores dentro del arreglo es: %d \n", suma);
  printf("El promedio de la suma de los valores del arreglo es de: %d \n", promedio);
  printf("El mayor es: %d \n", mayor);
  printf("El menor es: %d \n", menor);

}
