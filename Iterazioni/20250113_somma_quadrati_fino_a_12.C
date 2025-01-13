/*scrivi un programma che visualizzi la somma dei quadrati
dei primi 12 numeri naturali successivi a 8
Es: somma=9*9+10*10+11*11+12*12+13*13+14*14+15*15+16*16+...*/

#include <stdio.h>
int main(){
    
    int inizio=0;
    int quantita=0;
    int somma=0;

    printf("inserisci il valore di inizo: ");
    scanf("%d", &inizio);

    printf("inserisci il valore della quantità: ");
    scanf("%d", &quantita);

    for(int i=inizio+1; i<=inizio+quantita; i++){
        somma+=i*i;
    }
    printf("la somma dei quadrati dei %d valori da %d vale: %d", quantita, inizio, somma);

    return 0;
}