#include "stdlib.h"
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int *pi; //inizializzo un nuovo puntatore di printf
  int i = 0;
  pi = &i; //assegno a pi l'indirizzo di memoria di i
  *pi = 5; //equivale a dire i =5;

  printf("il valore della variabile puntata da 'pi' è %d\n", i );
  printf("il valore della variabile 'pi' è %p\n", pi );



  return 0;
}
