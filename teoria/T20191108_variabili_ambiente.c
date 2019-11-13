//come conoscere le variabili d'ambiente definite
#include "stdio.h"
#include "stdlib.h"
int main(int argc, char const *argv[]) {
  //envirom che tiene traccia delle variabili d'ambiente
  extern char **environ; //puntatore a puntatore carattere cioè array di stringhe
  while ((**environ++) != NULL) {
    char *elem = **environ;
    while ((*elem++) != NULL) {
      char elemint = *elem;
      printf("%s\n", elemint);
    }
    printf("\n");
  }
  return 0;
}
