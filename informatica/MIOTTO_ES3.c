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

    if(num1>0 && num1<20 && num2>0 && num2 <20){
        printf("SCEGLI TRA:\n");
        printf("1) LA SOMMA IN VALORE ASSOLUTO.\n");
        printf("2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE.\n");
        printf("3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI AVVICINA DI PIÙ.\n");
        printf("4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.\n");

        switch (scelta){
        case 1:{
            if(num1<0 || num2<0 || num1<0 && num2<0){
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

            

            printf("il valore k si avvicina di più a: %d", );
            break;}

        case 4:{
            printf("la divisione vale: %.2f", n1/n2);
            break;}

        default:{
            printf("hai inserito una scelta non valida.");
            break;
        }
    }
    return 0;
}