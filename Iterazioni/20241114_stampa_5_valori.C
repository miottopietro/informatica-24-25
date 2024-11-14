/*DATI 10 VALORI STAMPARLI*/

#include <stdio.h>
int main(){

    int num=0;
    int cnt=0;
    
    while(cnt<5){
        printf("inserisci un valore: ");
        scanf("%d", &num);

        cnt++;

        printf("il valore inserito è: %d\n", num);
    }

    return 0;
}