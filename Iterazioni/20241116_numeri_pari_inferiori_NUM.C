/*scrivi un programma che legge un numero NUM strettamente positivo e visualizza tutti i numeri 
pari inferiori a tale numero fino a 0.*/

#include <stdio.h>
int main(){

    int num=0;
    int N1=0;
    int cnt=0;

    printf("inserisci un numero: ");
    scanf("%d", &num);

    while(num!=0){

        if(cnt==1){
            num==N1;
        }

        printf("il numero inserito è: %d\n", num);

        printf("inserisci un numero: ");
        scanf("%d", &num);

        cnt++;
    }

    

    return 0;
}