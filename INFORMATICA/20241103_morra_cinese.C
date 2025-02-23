/*Gioco della Morra cinese: supponendo sasso=1, carta=2, forbice=3, 
chiedere all’utente la sua scelta e far generare al computer la sua.
Stabilire il vincitore.
N.B.:per chi non conoscesse il gioco: sasso vince forbice, sasso perde carta, carta perde forbice.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int sceltaPC=0;
    int sceltaUtente=0;

    printf("SASSO = 1.\n");
    printf("CARTA = 2.\n");
    printf("FORBICE = 3.\n");

    printf("inserisci la tua scelta: ");
    scanf("%d", &sceltaUtente);

    srand(time(NULL));
    sceltaPC=rand()%3+1;

    printf("il computer ha scelto %d\n", sceltaPC);

    if(sceltaUtente==1 && sceltaPC==1){
        printf("sasso è uguale a sasso: PAREGGIO.");
    }
    else if(sceltaUtente==2 && sceltaPC==2){
        printf("carta è uguale a carta: PAREGGIO.");
    }
    else if(sceltaUtente==3 && sceltaPC==3){
        printf("forbice è uguale a forbice: PAREGGIO.");
    }
    else if(sceltaUtente==1 && sceltaPC==2){
        printf("sasso viene battuto da carta: VINCE IL COMPUTER.");
    }
    else if(sceltaUtente==1 && sceltaPC==3){
        printf("sasso batte forbici: HAI VINTO.");
    }
    else if(sceltaUtente==2 && sceltaPC==1){
        printf("carta batte sasso: HAI VINTO.");
    }
    else if(sceltaUtente==2 && sceltaPC==3){
        printf("carta viene battuto da forbici: VINCE IL COMPUTER.");
    }
    else if(sceltaUtente==3 && sceltaPC==1){
        printf("forbici viene battuto da sasso: VINCE IL COMPUTER.");
    }
    else if(sceltaUtente==3 && sceltaPC==2){
        printf("forbici batte carta: HAI VINTO.");
    }

    return 0;
}