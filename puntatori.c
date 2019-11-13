#include "stdio.h"
#include "stdlib.h"
void scambia(char* a, char* b);

int main(int argc, char const *argv[]) {
  char* string = {'a', 'b', 'c'};
  scambia(string, (string+1));

  printf("%s\n", &string);
  string++;
  printf("%s\n", &string);
  return 0;
}

void scambia(char* a, char* b) {
  // char* tmp = *a;
  // *a = *b;
  // *b = *tmp;
}
