/*FUNDAMENTOS DE PROGRAMACION
  LABORATORIO DE PROGRAMACION 
  ERICK SAUL GARCIA HERNANDEZ
  PRACTICA 9 EJERCICIO 3*/

#include <stdio.h>
int main ()
{
  int lista[5] = {10, 8, 5, 8, 7}; 
  int indice = 0;
  printf("\tLista\n");
  do 
  {
    printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
    indice += 1; 
  }
  while (indice < 5 );
  printf("\n");
  return 0;
}
