/*dato un numero N calcolare il suo quadrato sommando
i primi N numeri dispari.*/

#include <stdio.h>
int main(){

    int num=0;
    int quadrato=0;
    int i=1;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &num);
    }while(num<=0);
    
    for (int cnt = 1; cnt <= num; i++){
        quadrato=quadrato+i;
        i=i+2;
    }

    printf("il quadrato con la somma dei numeri dispari è: %d", quadrato);
    
    return 0;
}