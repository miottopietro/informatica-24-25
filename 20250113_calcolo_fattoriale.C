/*scrivi un programma che esegue il calcolo del fattoriale
di un numero num inserito
Es: 5 fattoriale= 1*2*3*4*5*/

#include <stdio.h>
int main(){

    int num=0;
    int fat=1;

    printf("inserisci un valore: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        fat*=i;
    }

    printf("il valore fattoriale di %d è: %d", num, fat);

    return 0;
}