/*progetta un algoritmo che legga un numero B<A e scriva quante volte A è
è divisibile per B
ES: A=162 e B=3 A è divisibile 4 volte per B*/

#include <stdio.h>
int main(){

    int num1=0;
    int num2=0;
    int quoz=0;
    int cnt=0;

    printf("inserisci il primo valore: ");
    scanf("%d", &num1);

    do{
        printf("inserisci il secondo valore: ");
        scanf("%d", &num2);
    }while(num2>=num1);

    while(num1%num2==0){
        quoz=num1/num2;
        num1=quoz;
        cnt++;
    }

    printf("il primo valore è divisibile per il secondo %d volte", cnt);

    return 0;
}