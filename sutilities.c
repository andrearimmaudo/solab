// file per dichiarazione funzioni stringhe
#include "stdio.h"
#include "stdlib.h"


unsigned int count_occurrencies(char str[], char elem) {
  int c = 0;
  if (str != NULL)
    for (size_t i = 0; i < (sizeof(str) / sizeof(char)); i++) {
      if (str[i] == elem) {
        c++;
      }
    }
  else return -1;
  return c;
}

unsigned int count_occurrencies_equiv(char *str, int length, char c) {
  int i=0;
  unsigned int counter=0;
  char s;
// -----------------------------------------------------------
  if (str!=NULL) {
    while (i<length && (s=*(str+1) != '\0') ) {
      if (s == c) {
        counter++;
      }
      i++;
    }
  } else return -1;
  return counter;
}

unsigned int count_occurrencies_ptr(char *str, int length, char c) {
  int i=0;
  unsigned int counter=0;
  char s;
  char *ptr=str; //ptr punta a str[0]
// -----------------------------------------------------------
  if (str!=NULL) {
    while (ptr<str + length && (s=*ptr != '\0') ) {
      if (s == c) {
        counter++;
      }
      ptr++;
    }
  } else return -1;
  return counter;
}
