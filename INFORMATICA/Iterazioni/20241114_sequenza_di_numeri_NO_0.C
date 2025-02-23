/*LEGGERE UNA SEQUENZA DI NUMERI, VISUALIZZARLA, SI TERMINA NON APPENA
ARRIVA UNO 0*/

#include <stdio.h>
int main(){

    int numero=0;

    printf("inserisci un numero: ");
    scanf("%d", &numero);

    while(numero!=0){
        printf("il numero inserito è: %d\n", numero);
        
        printf("inserisci un numero: ");
        scanf("%d", &numero);
    }

    return 0;
}
