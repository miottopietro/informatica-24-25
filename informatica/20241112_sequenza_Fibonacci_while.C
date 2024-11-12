/*scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 e che indica quanti valori della
sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.
Vedi pag 160*/

#include <stdio.h>
int main(){

    int N=0;
    int conta=0;
    int fib1=1;
    int fib2=1;
    int fib3=0;

    printf("inserisci un valore maggiore di 3: ");
    scanf("%d", &N);

    while(N<3){
        printf("valore non valido inserirne un altro: ");
        scanf("%d", &N);
    }

    printf("%d, ", fib1);
    printf("%d, ", fib2);
    conta=2;

    while(conta<N){
        fib3=fib1+fib2;
        printf("%d, ", fib3);
        conta++;
        fib1=fib2;
        fib2=fib3;
    }

    return 0;
}