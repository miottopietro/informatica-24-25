/* Classe di studenti:
   Cognome, Nome, classe, matricola
   Per ogni studente dotato di matricola abbiamo
   le informazioni riguardante gli esami e il livello raggiunto
   1)ricercare lo studente con più certificazioni
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char Cognome [20];
    char Nome [20];
    char classe [3];
    int matricola; // 1000-9999
}studente;

typedef struct{
    int matricola;
    struct esame {
        char corso [20];
        int livello; // (1-3)
    };
}certificazioni;

int main(){

    int scelta=0;

    printf("Menu:\n");
    printf("1) Inserisci nuovo studente\n");
    printf("2) stampa dati studente\n");
    printf("3) Ricerca studente con più certificazioni\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    getchar(); 

    switch(scelta){
        case 1:
            // Codice per inserire nuovo studente

            break;
        case 2:
            // Codice per stampare dati studente
            break;
        case 3:
            // Codice per ricercare studente con più certificazioni
            break;
        default:
            printf("Scelta non valida.\n");
    }
    return 0;
}