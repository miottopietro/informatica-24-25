#include <stdio.h>

/*Calcola il resto ricevuto dal benzinaio: dopo aver inserito il numero di litri di carburante introdotto nel motorino
 e il costo al litro della benzina, il programma deve visualizzare l’importo da pagare.
 L’utente digita l’importo di una banconota di valore superiore a tale importo
  e il programma visualizza il resto della banconota che questi deve ricevere.*/

    int main(){

    float litri, eurolitro, TOTeuro, banconota, resto;

    eurolitro = 1.6;
    litri=0;
    TOTeuro=0;
    banconota=0;
    resto=0;

    printf("inserire quantitativo di litri di carburante: ");
    scanf("%f", &litri);

    TOTeuro = litri*eurolitro;

    printf("il costo totale è: %.2f ", TOTeuro);

    printf("Inserire una banconota di valore superiore al costo del carburante: ");
    scanf("%f", &banconota);

    resto = banconota - TOTeuro;
    printf("il resto è di: %.2f", resto);

    }