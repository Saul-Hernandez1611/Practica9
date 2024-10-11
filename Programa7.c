#include <stdio.h>
int main ()
{
  int arr[] = {5, 4, 3, 2, 1};
  int *apArr;
  int x;
  apArr = arr;
  printf("int arr[] = {5, 4, 3, 2, 1};\n");
  printf("apArr = &arr[0]\n");
  x = *apArr; 
  printf("x = *apArr \t -> x = %d\n", x);
  x = *(apArr+1); 
  printf("x = *(apArr+1) \t -> x = %d\n", x);
  x = *(apArr+2); 
  printf("x = *(apArr+2) \t -> x = %d\n", x);
  x = *(apArr+3); 
  printf("x = *(apArr+3) \t -> x = %d\n", x);
  x = *(apArr+4); 
  printf("x = *(apArr+2) \t -> x = %d\n", x);
  return 0;
}
