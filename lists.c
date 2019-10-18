// esempio di struct per definizione dei punti euclidei
#include "stdio.h"

struct point {
  double x;
  double y;
  double z;
  char name[20];
}

// creare un nuovo tipo dati attraverso una struttura (sntx: typedef int MyCustomType;)
typedef struct student {
  unsigned int      matr;
  char*             name;
  float             mean;
  struct student*   next;
} student;

// TODO: le due operazioni per aggiungere/rimuovere in una lista
// @params: *h testa dello studente; *s studente da aggiungere in coda
student add(student* h, student* s) {
  if (h != NULL) { //Controllo che la lista non sia vuota
    student *c = h;
    while (c->next!=NULL)
      c = c->next;
    c->next=s;
    s->next = NULL;
    return h;
  } else {
    return s;
  }
}
//occhio che vuole un solo RETURN, quindi il codice sarebbe da modificare

//elimina l'oggetto in testa riportandolo nel secondo parametro
student* remove(student* h, student** s) {
  student* new_h = NULL;
  if (h!=NULL) {
    new_h = h->next;
    h->next = NULL;
   *s = h; //assegno la vecchia testa alla nostra variabile passata attraverso il secondo param
  }
  return h;
}
