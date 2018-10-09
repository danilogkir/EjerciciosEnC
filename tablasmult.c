#include<stdio.h>

void AplicarMultiplicacion(int principal, int i, int numero);
void MostrarMenu(void);

int main(void){
  int i, principal, numero, a;
  int opcion;
  do {
    int numero = 11;
    MostrarMenu();
    scanf("%d", &opcion);

    switch(opcion){
    case 1: printf("La tabla del 1 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("1 * %d = %d\n", a, a * 1);
      break;
    case 2: printf("La tabla del 2 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("2 * %d = %d\n", a, a * 2);
      break;
    case 3: printf("La tabla del 3 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("3 * %d = %d\n", a, a * 3);
      break;
    case 4: printf("La tabla del 4 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("4 * %d = %d\n", a, a * 4);
      break;
    case 5: printf("La tabla del 5 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("5 * %d = %d\n", a, a * 5);
      break;
    case 6: printf("La tabla del 6 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("6 * %d = %d\n", a, a * 6);
      break;
    case 7: printf("La tabla del 7 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("7 * %d = %d\n", a, a * 7);
      break;
    case 8: printf("La tabla del 8 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("8 * %d = %d\n", a, a * 8);
      break;
    case 9: printf("La tabla del 9 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("8 * %d = %d\n", a, a * 9);
      break;
    case 10: printf("La tabla del 10 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("10 * %d = %d\n", a, a * 10);
      break;
      //del 11 hasta el 20
    case 11: printf("La tabla del 11 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("11 * %d = %d\n", a, a * 11);
      break;
    case 12: printf("La tabla del 12 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("12 * %d = %d\n", a, a * 12);
      break;
    case 13: printf("La tabla del 13 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("13 * %d = %d\n", a, a * 13);
      break;
    case 14: printf("La tabla del 14 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("14 * %d = %d\n", a, a * 14);
      break;
    case 15: printf("La tabla del 15 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("15 * %d = %d\n", a, a * 15);
      break;
    case 16: printf("La tabla del 16 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("16 * %d = %d\n", a, a * 16);
      break;
    case 17: printf("La tabla del 17 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("17 * %d = %d\n", a, a * 17);
      break;
    case 18: printf("La tabla del 18 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("18 * %d = %d\n", a, a * 18);
      break;
    case 19: printf("La tabla del 19 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("19 * %d = %d\n", a, a * 19);
      break;
    case 20: printf("La tabla del 20 es la siguiente: \n");
      for(a=1;a<numero;a++)
	printf("20 * %d = %d\n", a, a * 20);
      break;
    } 

  } while(opcion != 20);
}

void MostrarMenu(void){

  printf("Menu: \n");
  printf("1.- Tabla del 1\n");
  printf("2.- Tabla del 2\n");
  printf("3.- Tabla del 3\n");
  printf("4.- Tabla del 4\n");
  printf("5.- Tabla del 5\n");
  printf("6.- Tabla del 6\n");
  printf("7.- Tabla del 7\n");
  printf("8.- Tabla del 8\n");
  printf("9.- Tabla del 9\n");
  printf("10.- Tabla del 10\n");
  printf("11.- Tabla del 11\n");
  printf("12.- Tabla del 12\n");
  printf("13.- Tabla del 13\n");
  printf("14.- Tabla del 14\n");
  printf("15.- Tabla del 15\n");
  printf("16.- Tabla del 16\n");
  printf("17.- Tabla del 17\n");
  printf("18.- Tabla del 18\n");
  printf("19.- Tabla del 19\n");
  printf("20.- Tabla del 20\n");
  printf("Introduce tu opción:");
  

}
