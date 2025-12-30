/*visualizzare le squadre il cui allenatore presenta più di 10 titoli
e un punteggio della squadra superiore a 30 */

#include <stdio.h>

struct squadra{
    char nome[20];
    char colore[20];
    int punteggio;

    struct allenatore{
        char nomeAllenatore[20];
        char cognomeAllenatore[20];
        int titoli;
    }mister;
};

typedef struct squadra squadre;

void inserisci squadra()

int main(){

    squadra* squadra1;

    if(squadra1==NULL){
        printf("errore di allocazione")
    }

    inserisci squadra();

    return 0;
}