/*creaiamo un menù di richieste
1) Caricare un array con solo valori pari;
2) Stampare l'array;
3) Ordina l'array tramite la tecnica del bubble sort;
*/

#include <stdio.h>
#include "libreria.c"
#define DIM 5

int main(){

    int vett[DIM];
    int scelta=0;

    do{
    printf("MENù:");
    printf("\n1) Carica l'array");
    printf("\n2) Stampa l'array");
    printf("\n3) Ordina tramite Bubble sort");
    printf("\n4) Digita 0 per terminare");
    printf("\n \n Inserisci la scelta: ");
    scanf("%d", &scelta);

    switch (scelta){
        case 1:{
            riempiVettore(vett, DIM);
            printf("\n");
            break;
        }
        case 2:{
            stampaVettore(vett, DIM, '-');
            printf("\n");
            break;
        }
        case 3:{
            bubbleSort(vett, DIM);
            printf("\n");
            break;
        }
        default:
        break;
    }

    }while(scelta!=0);

    return 0;
}