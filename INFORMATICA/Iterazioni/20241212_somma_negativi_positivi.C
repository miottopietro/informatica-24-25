/*dati N numeri in input (con N chiesto all' utente strettamente maggiore di 5)
e mostrare la somma dei numeri negativi e positivi.*/

#include <stdio.h>
int main(){

    int num=0;
    int N=0;
    int sommaN=0;
    int sommaP=0;

    do{
        printf("inserisci il numero di valori che vengono inseriti: ");
        scanf("%d", &N);

        N++;
    }while(N<=5);

    for(int i=0; i<N; i++){
        printf("inserisci un valore: ");
        scanf("%d", &num);

        if(num < 0){
        sommaN += num;
        }else{
        sommaP += num;
        }
    }

    printf("la somma dei numeri negativi è: %d\n", sommaN);
    printf("la somma dei numeri positivi è: %d", sommaP);

    return 0;
}