
// Definire puntatori a funzioni che ritornano valori.

// DICHIARAZIONE
int (*func) (int a, float b); //occhio alle parentesi

//assegnare il puntatore ad una reale funzione
func = funzione_reale;

//la funzione reale si può invocare nei seguenti modi
(*func)(1,2); //utilizzo per intero il puntatore
func(1,2); //utilizzo il nome del puntatore dichiarato
funzione_reale(1,2) //utilizzo la funzione reale
