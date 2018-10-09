#include <stdio.h>

int main(void){

	float arreglo[24],  promedio, suma = 0, mayor, menor;
	int i;

	for(i=0;i<=24;i++){

		if(i<12){
			printf("Introduce la temperatura de la %d am: ", i);
			scanf("%f", &arreglo[i]);
		} else {
			printf("Introduce la temperatura de las %d pm: ", i);
			scanf("%f", &arreglo[i]);
		}

	}

	mayor = arreglo[0];
	menor = arreglo[0];

	for(i=0;i<24;i++){

		if(arreglo[i]>mayor){
			mayor = arreglo[i];
		}

		if(arreglo[i]<menor){
			menor = arreglo[i];
		}

	}

	printf("La temperatura mayor registrada fue de: %f \n", mayor);
	printf("La temperatura menor registrada fue de: %f \n", menor);

	suma = suma = arreglo[0]+arreglo[1]+arreglo[2]+arreglo[3]+arreglo[4]+arreglo[5]+arreglo[6]+arreglo[7]+arreglo[8]+arreglo[9]+arreglo[10]+arreglo[11]+arreglo[12]+arreglo[13]+arreglo[14]+arreglo[15]+arreglo[16]+arreglo[17]+arreglo[18]+arreglo[19]+arreglo[20]+arreglo[21]+arreglo[22]+arreglo[23];
	printf("%f", suma);
	promedio = suma/24;
	printf("%f", promedio);
}
