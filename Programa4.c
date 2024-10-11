/*ERICK SAUL GERCIA HERNANDEZ 
  PRACTICA 9 EJERCICIO 4*/


#include <stdio.h>
int main ()
{
  int lista[10]; 
  int indice=0;
  int numeroElementos=0;
  printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
  scanf("%d",&numeroElementos);
  if((numeroElementos>=1) && (numeroElementos<=10))
  {
    for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
    {
      printf("\nDar un número entero para el elemento %d del arreglo", indice );
      scanf("%d",&lista[indice]);
    }
  printf("\nLos valores dados son: \n");  
    
  for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
    {
      printf("%d ", lista[indice] );
    }
  }
  else printf("el valor dado no es válido");
  printf("\n");
  return 0;
}
