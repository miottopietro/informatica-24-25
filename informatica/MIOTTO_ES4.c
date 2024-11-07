/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include <stdio.h>
#include <math.h>
int main(){

    int val=0;
    int r=0;
    int contatore=0;

    printf("inserisci un valore: ");
    scanf("%d", &val);

    if(val%2==0){
        printf("il valore è una potenza di 2.\n");
    }

    return 0;
}