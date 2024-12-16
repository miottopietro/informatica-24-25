/*calcolare la somma dei primi N numeri naturali*/

#include <stdio.h>
int main(){

    int Nnumeri=0;
    int somma=0;

    do{
        printf("inserisci il numero dei valori che vuoi inserire: ");
        scanf("%d", &Nnumeri);
    }while(Nnumeri<0);

    for(int i=0; i<=Nnumeri; i++){
        somma+=i;
        printf("%d+", i);
    }
    printf(" la somma è: %d", somma);

    return 0;
}