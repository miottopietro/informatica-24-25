/*Scrivi un programma in C che simuli una calcolatrice semplice. Il programma deve permettere all'utente di scegliere
un'operazione tra somma,sottrazione, moltiplicazione e divisione.Il programma deve quindi chiedere due numeri
e restituire il risultato dell'operazione scelta.Usare il costrutto switch case.*/

#include <stdio.h>
int main(){

    int num1=0;
    int num2=0;
    int risultato=0;
    int oper=0;

    printf("inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("inserisci il secondo numero: ");
    scanf("%d", &num2);

    printf("che operazione vuoi fare 1=somma, 2=sottrazione, 3=moltiplicazione, 4=divisione: ");
    scanf("%d", &oper);

    switch(oper){
        case 1: risultato=num1+num2;{
            printf("%d+%d è uguale a: %d", num1, num2, risultato);
        }
        break;

        case 2: risultato=num1-num2;{
            printf("%d-%d è uguale a: %d", num1, num2, risultato);
        }
        break;

        case 3: risultato=num1*num2;{
            printf("%d*%d è uguale a: %d", num1, num2, risultato);
        }
        break;

        case 4: risultato=num1/num2;{
            printf("%d/%d è uguale a: %d", num1, num2, risultato);
        }
        break;
        default:
        printf("NON VALIDO: le operzioni sono 1=somma, 2=sottrazione, 3=moltiplicazione, 4=divisione");

    }
    

    return 0;
}