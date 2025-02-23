/*Scrivi un programma che, dati in input N numeri interi e un numero X
determini:
- quanti numeri sono maggiori di X;
- quanti numeri sono minori di X;
- quanti numeri sono uguali a X.*/

#include <stdio.h>
int main(){

    int Nnum=0;
    int num=0;
    int X=0;

    printf("inserisci un valore X: ");
    scanf("%d", &X);

    do{
        printf("inserisci un valore: ");
        scanf("%d", &num);

        Nnum++;

        if(num<X){
            printf("%d è minore di %d\n", num, X);

        }else if(num>X){
            printf("%d è maggiore di %d\n", num, X);

        }else{
            printf("%d è uguale di %d\n", num, X);
        }
    }while(Nnum<10);

    return 0;
}