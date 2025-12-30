/*creare una struct Squadra vcontenente le seguenti informazioni:
nome, colore, punteggio
caricato  un massimo di 10 squadre stampare quelle con puneggio superiore a 100*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    char colore[20];
    int punteggio;
}squadra;

void stampa(squadra *teams, int n){
    for(int i=0; i<n; i++){
        printf("\nnome squadra: %s", teams[i].nome);
        printf("\ncolore squadra: %s", teams[i].colore);
        printf("\npunteggio squadra: %d", teams[i].punteggio);

    }
}
int main(){
    squadra *teams;
    int n;

    do{
        printf("inserisci il numero delle squadre(max 10): ");
        scanf("%d", &n);

    }while(n<0 || n>10);
 
    teams = (squadra*)malloc(sizeof(squadra));
    if(teams==NULL){
        printf("Errore di allocazione");
        return 1;
    }

    for(int i=0; i<n; i++){
        printf("\ninserisci il nome della squadra: ");
        scanf("%s", teams[i].nome);
        fflush(stdin);
        printf("\ninserisci il colore della squadra: ");
        scanf("%s", teams[i].colore);
        fflush(stdin);
        printf("\ninserisci il punteggio della squadra: ");
        scanf("%d", &(teams[i].punteggio));
        fflush(stdin);
    }
    stampa(teams,n);
    
}