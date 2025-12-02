/*esempio di utilizzo di una struttura complessa facendo accesso
ai campi in modalità variabile e in puntatore alla struttura*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    char cognome[20];
    int eta;
}persona;

int main(){
    persona p1;
    persona *p2;

    // inseriamo le informazioni in p1
    printf("inserisci il nome della persona: ");
    scanf("%s", p1.nome);
    fflush(stdin);
    
    printf("inserisci il cognome della persona: ");
    scanf("%s", p1.cognome);
    fflush(stdin);

    printf("inserisci l'eta' della persona: ");
    scanf("%d", &(p1.eta));
    fflush(stdin);

    printf("dati della persona: %s, %s, %d\n", p1.nome, p1.cognome, p1.eta);

    // inseriamo le informazioni in p2
    p2=malloc(sizeof(persona));

    printf("inserisci il nome dell'altra persona: ");
    scanf("%s", p2->nome);
    fflush(stdin);
    
    printf("inserisci il cognome dell'altra persona: ");
    scanf("%s", p2->cognome);
    fflush(stdin);

    printf("inserisci l'eta' dell'altra persona: ");
    scanf("%d", &(p2->eta));
    fflush(stdin);

    printf("dati dell'altra persona: %s, %s, %d", p2->nome, p2->cognome, p2->eta);

    return 0;
}