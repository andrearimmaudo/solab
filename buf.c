//locazione dinamica
#include "stdlib.h" //necessaria per utilizzare funzioni locazione dinamica

void f() {
  // facendo una funzione che non ritorna niente, con l'esecuzione seguente allochiamo una locazione di memoria che rimarra fino alla fine del programma inutilmente
  const int *buf = (const int *) calloc(10, sizeof(int)); //finita l'assegnazione non ce nessun puntatore che punta alla locazione err: MEMORY LEAKS
  if (buf!=NULL) {
    // code

    // per evitare memory leaks ricordarSI di liberare la zona di memoria con il free
    free(buf);
  } else {
    if(errno==ENOMEM) {

    }
  }
}

// PURPOSE: capire come allocare dinamicamente una matrice
void bidim() {
  // scritture analoghe
  // a[i][j] == a[i*3+j] == *a+i*3+j

  // quando dichiaro una funzione in C che come parametro ha una matrice, devo indicare SEMPRE  il # delle colonne
  // es a[][3] dove 3 è il # delle colonne
}
