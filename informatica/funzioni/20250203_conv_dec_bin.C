/*dato un valore eseguire la conversione da decimale a binario*/

#include <stdio.h>
#include <math.h>

long converti(int _num);

int main(){
    int num=0;
    long conv=0;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &num);
    }while(num<=0);

    conv=converti(num);

    printf("%ld\n", conv);

    return 0;
}
long converti(int _num){
    int quoz=_num;
    int resto=0;
    int cont=0;
    int _conv=0;

    while(quoz!=0){
        resto=quoz%2;
        quoz=quoz/2;
        _conv+=resto*pow(10,cont);
        cont++;
    }
    return _conv;
}