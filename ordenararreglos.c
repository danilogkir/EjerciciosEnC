#include <stdio.h>

void Inserta(int lista[], int numero, int *insertados){
	
	int i, j;
	i = 0;
	while((i< *insertados)&&(numero>lista[i]))
		i++;
		if(i<*insertados){
			for(j=*insertados;j>i;j--)
				lista[j] = lista[j-1];

				lista[i]=numero;
				(*insertados)++;
		} else {

			lista[i] = numero;
			(*insertados)++;

		}
	}

void Imprime(int lista[], int insertados);

int main(void){

	int numeros[100], valor, porintroducir, introducidos=0, i;
	do{
	
	printf("Cuantos numeros quieres introducir? (máximo 100)");
	scanf("%d", &porintroducir);
	if(porintroducir>100)
		printf("No puedes introducir mas de 100 numeros\n");	
	}while(porintroducir>100);
	for(i=0;i<porintroducir; i++){

		printf("Cual es el numero?");
		scanf("%d", &valor);
		Inserta(numeros, valor, &introducidos);
	}

	Imprime(numeros, introducidos);

}

void Imprime(int lista[], int insertados){

	int i;
	for(i=0;i<insertados;i++)
	printf("%d\n", lista[i]);	

}
