/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/

#include <stdio.h>
int main(){

    int num1=0;
    int num2=0;
    int scelta=0;
    int sommaAssoluta=0;
    int differenza=0;
    int k=0;
    int diffmin1=0;
    int diffmin2=0;

    printf("inserisci il primo valore: ");
    scanf("%d", &num1);

    printf("inserisci il secondo valore: ");
    scanf("%d", &num2);

    printf("SCEGLI TRA:\n");
    printf("1) LA SOMMA IN VALORE ASSOLUTO.\n");
    printf("2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE.\n");
    printf("3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI AVVICINA DI PIÙ.\n");
    printf("4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.\n");

    printf("che scelta vuoi fare: ");
    scanf("%d", &scelta);

    switch (scelta){
    case 1:{
        if(num1<0 && num2<0){
            sommaAssoluta = num1+num2;
            sommaAssoluta = sommaAssoluta+(sommaAssoluta*2);
        }
        else{
            sommaAssoluta = num1+num2;
        }
        printf("la somma assoluta dei due valori è: %d", sommaAssoluta);
        break;}

    case 2:{
        if(num1>num2){
            differenza = num1-num2;
        }
        else{
            differenza = num2-num1;
        }

        printf("la differenza tra il maggiore e il minore è: %d", differenza);
        break;}

    case 3:{
        printf("inserisci un nuovo valore: ");
        scanf("%d", &k);

        diffmin1 = num1-k;
        diffmin2 = num2-k;

        if(diffmin1<diffmin2){
            printf("il nuovo valore si avvicina di più a %d", num2);
        }
        else{
            printf("il nuovo valore si avvicina di più a %d", num1);
        }
        break;}

    case 4:{
        if(num1/num2==0 || num2/num1==0){
            printf("uno dei due valori è multiplo del altro.\n");
        }
        else{
            printf("nessuno dei due valori è multiplo del altro.\n");
        }
    }
    default:{
        printf("hai inserito una scelta non valida.");
        break;}
    }

    return 0;
}