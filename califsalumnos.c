#include<stdio.h>

int main(void){

  int i;
  float calif1, calif2, calif3;
  float  promedioalumno;
  float sumatotal = 0;
  float  sumaalumno;
  
  for(i=1;i<=20;i++){

    printf("Introduzca las 3 califs del alumno %d \n", i);
    scanf("%f,%f,%f", &calif1, &calif2, &calif3);

    sumaalumno = calif1+calif2+calif3;
    printf("La suma de las calificaciones del alumno %d es %f \n", i, sumaalumno);
    promedioalumno = sumaalumno/3;

    printf("El promedio del alumno %d es %f \n", i, promedioalumno);
    sumatotal = sumatotal+sumaalumno;

  }

  printf("El promedio total del grupo es %f \n", sumatotal/60);

}
