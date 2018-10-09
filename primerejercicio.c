#include <stdio.h>

void MostrarMenu(void);
void CompararNumeros(float numero1, float numero2, float *numeromasgrande);

int main(void){

  float numero1, numero2, resultado;
  int opcion;

  do {
    
  MostrarMenu();
  scanf("%d", &opcion);

  switch(opcion){
    
  case 1: printf("Introduce 2 números diferentes: \n");
    scanf("%f %f", &numero1, &numero2);
    CompararNumeros(numero1, numero2, &resultado);
    break;
  case 2: printf("Adiós\n");
    break;
  default: printf("Las opción es invalida\n");
    break;
  }
  
  } while(opcion != 2);
  
}

void CompararNumeros(float numero1, float numero2, float *numeromasgrande){
  
  if(numero1 ||  numero2 < 0){
    
    if(numero1 > numero2){

      *numeromasgrande = numero1;
    
    } else if (numero2 > numero1){
    
      *numeromasgrande = numero2;
    
    }
    
  }

}

void MostrarMenu(void){

  printf("Menu\n");
  printf("1.- Iniciar programa\n");
  printf("Introduce tu opción:");
  

}
