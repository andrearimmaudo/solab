// esempio di struct per definizione dei punti euclidei
#include "stdio.h"

struct point {
  double x;
  double y;
  double z;
  char name[20];
}

struct complex n[100];
n[0].r = 8.0;

// creare un nuovo tipo dati attraverso una struttura (sntx: typedef int MyCustomType;)
typedef struct student {
  unsigned int      matr;
  char*             name;
  float             mean;
  struct student*   next;
} student;
