#include <stdio.h>
#include <math.h>

void aplicarFormula(float coef1, float coef2, float coef3, float *raiz1, float *raiz2);

int main(void){

  float coef1, coef2, coef3, resultado, resultadodos;

	printf("Escriba 3 coeficientes por favor: \n");
	scanf("%f%f%f", &coef1, &coef2, &coef3);
	aplicarFormula(coef1, coef2, coef3, &resultado, &resultadodos);
	printf("La raíz uno es: %f \n", resultado);
	printf("La raíz dos es: %f \n", resultadodos);

}

void aplicarFormula(float coef1, float coef2, float coef3, float *raiz1, float *raiz2){
	
	
            *raiz1 = (-coef2+sqrt((coef2*coef2)-(4*coef1*coef3))/2*coef1);
 
	    *raiz2 = (-coef2+sqrt((coef2*coef2)-(4*coef1*coef3))/2*coef1);

}
