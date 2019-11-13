#include "stdio.h"
void stampa(int);

int main(void) {
  void(*fp)(int);
  fp = stampa;
  (*fp)(1); //stampa con il primo metodo
  fp(2); //stampa con il secondo metodo
  return 0;
}

void stampa(int arg){
  printf("%d\n", arg);
}
