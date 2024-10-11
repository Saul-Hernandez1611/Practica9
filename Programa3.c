/*FUNDAMENTOS DE PROGRAMACION
LABORATORIO DE PROGRAMACION
ERICK SAUL GARCIA HERNANDEZ
PRACTICA 9, EJERCICIO 1.2*/

#include <stdio.h>
int main()

{
  int Lista [5] = {10, 8, 5, 8, 7};
  int indice = 0;
  printf("\tLista\n");
  for (indice = 0; indice < 5; indice++);
  {
    printf("'nLa calificación del alumno %d es %d", indice+1, Lista [indice]);
  }
printf("\n");
return 0;
}

