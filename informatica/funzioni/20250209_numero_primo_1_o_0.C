/*Scrivete una funzione con parametro un intero n(passato per valore) che stabilisca se n è un numero primo. 
La funzione restituirà 1 se il numero è primo altrimenti 0.  */

#include <stdio.h>

int calcoloNumPrimo(_num);

int main(){

    int num=0;
    int numeroPrimo=0;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &num);
    }while(num<=0);

    numeroPrimo=calcoloNumPrimo(num);

    printf("%d", numeroPrimo);
    return 0;
}
int calcoloNumPrimo(_num){

    int _cnt=0;

    for(int i=0; i<=_num; i++){
        if(_num%i==0){
            _cnt++;
        }
    }
    if(_cnt>=3){
        printf("0");
    }else{
        printf("1");
    }
    return _calcoloNumPrimo;
}