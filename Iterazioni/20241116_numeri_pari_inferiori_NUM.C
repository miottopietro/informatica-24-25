/*scrivi un programma che legge un numero NUM strettamente positivo e visualizza tutti i numeri 
pari inferiori a tale numero fino a 0.*/

#include <stdio.h>
int main(){

    int num=0;
    int N1=0;
    int cnt=0;
    int numinf=0;

    printf("inserisci un numero strettamente positivo: ");
    scanf("%d", &num);

    while(num!=0){

        if(cnt==1){
            num==N1;
        }
        else{
            num==numinf;
        }

        printf("il numero inserito è: %d\n", num);

        printf("inserisci un numero: ");
        scanf("%d", &num);

        cnt++;
    }

    if(numinf%2==0){
        while(numinf!=0){
            printf("%d", numinf);
        }
    }
    else{
        printf("numero non valido.");
    }

    return 0;
}