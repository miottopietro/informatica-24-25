/*leggi un programma che legge una sequenza di numeri interi terminanti con 0 (cioè il programma termina quando viene inserito 0) 
e ne ricerca il valore nummin visualizzandolo sullo schermo.*/

#include <stdio.h>
#include <limits.h>
int main(){

    int num=0;
    int nummin=INT_MAX;

    printf("inserisci un numero: ");
    scanf("%d", &num);

    while(num!=0){
        printf("il numero inserito è: %d\n", num);

        printf("inserisci un numero: ");
        scanf("%d", &num);

        if(num<nummin){
            nummin=num;
        }
    }

    if (nummin == INT_MAX) {
        printf("Nessun numero è stato inserito.\n");
    } else {
        printf("Il valore minore è: %d\n", nummin);
    }

    return 0;
}