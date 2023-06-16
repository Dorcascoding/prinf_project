#include <stdlib.h>
  #include <stdio.h>
  int main( void )
  {
  /* allocate memory for a 100-character string */
  char *str;
  str = (char *) malloc(100);
  if (str == NULL)
  {
 printf( "Not enough memory to allocate buffer\n");
 exit(1);
 }
  printf( "String was allocated!\n" );
  printf("String indeed alocated\n");
  printf("String Added\n");
return 0;
 }
