#include <stdio.h>
int main ()
{
  int lista[5] = {10, 8, 5, 8, 7};
  int *ap = lista; 
  int indice;
  printf("\tLista\n");

  for (indice = 0 ; indice < 5 ; indice++)
    {
      printf("\nCalificación del alumno %d es %d", indice+1,
*(ap+indice));
    }
  printf("\n");
  return 0;
}
