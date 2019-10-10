#include "stdio.h" //i cmd con il # indicano le direttive per il preprocessore, che viene eseguito prima del compilatore
#include "stdlib.h"
#include "/home/rimma/dev/c/solab/sutilities.h" //aggiungo mia libreria per le stringhe

unsigned int main(int argc, char const *argv[]) {
  char scan[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
  unsigned int res = count_occurrencies(scan, 'l');
  printf("%d\n", res);
  return 0;
}
