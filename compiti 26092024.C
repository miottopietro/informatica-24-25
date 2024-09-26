#include <stdio.h>

/*Calcola il costo sostenuto dalla scolaresca per andare a
 teatro sapendo che il biglietto ordinario costa 12 euro,
 i 2 docenti accompagnatori hanno lo sconto del 50% e 
 che il numero degli alunni deve essere letto in INPUT.*/

int main(){

    int costoStudenti;
    int costoDocenti;
    int costoTOT;
    int Nstudenti;

    costoStudenti=0;
    costoDocenti=0;
    costoTOT=0;
    Nstudenti=0;


    printf("inserisci il numero di studenti: ");
    scanf("%d", &Nstudenti);

    costoStudenti = Nstudenti*12;
    costoDocenti = (12*2)/2;
    costoTOT = costoDocenti + costoStudenti;

    printf("il costo totale per l'uscita a teatro è di: %d ", costoTOT);


}