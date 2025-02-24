/*Supponete
che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
- Dollari in Euro;
- Euro in Dollari.*/

#include <stdio.h>
int main(){

    int euro=1;
    float dollari=1.23;
    int cambio=0;
    float importoDAcambiare=0;
    float D=0;
    float E=0;

    printf("inserisci l'importo da cambiare: ");
    scanf("%f", &importoDAcambiare);

    printf("SE VUOI CAMBIARE DOLLARI IN EURO DIGITARE 1.\n");
    printf("SE VUOI CAMBIARE EURO IN DOLLARI DIGITARE 2.\n");

    printf("che cambio vuoi fare:");
    scanf("%d", &cambio);

    switch (cambio){
        case 1:{
            E=importoDAcambiare/1.23;
            printf("%.2f DOLLARI è uguale a %.2f EURO.", importoDAcambiare, E);
            break;}

        case 2:{
            D=importoDAcambiare*1.23;
            printf("%.2f EURO è uguale a %.2f DOLLARI.", importoDAcambiare, D);
            break;}

        default:{
            printf("hai inserito un cambio non valido.");
            break;}
    }

    return 0;
}