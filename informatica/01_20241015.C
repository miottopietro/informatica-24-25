/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica;
una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.*/

#include <stdio.h>
int main(){

    int n1=0;
    int n2=0;
    int n3=0;
    int diff1=0;
    int diff2=0;

    printf("inserisci il primo numero: ");
    scanf("%d", &n1);

    printf("inserisci il secondo numero: ");
    scanf("%d", &n2);

    printf("inserisci il terzo numero: ");
    scanf("%d", &n3);

    diff1=n2-n1;
    diff2=n3-n2;

    if(diff1==diff2){
        printf("i numeri sono in progressione aritmetica.");
    }
    else{
        printf("i numeri non sono in progressione aritmetica.");
    }

    return 0;
}
