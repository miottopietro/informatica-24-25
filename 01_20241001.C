//Verificare se un numero dato in input è divisibile sia per 3 sia per 5

#include <stdio.h>

int main(){

    int valore=0;

    printf("inserisci un valore: ");
    scanf("%d", &valore);

    if(valore % 3 == 0){
        if(valore % 5 ==0){
            printf("il valore è divisibile sia per 3 e per 5");
        }
        else{
            printf("il valore non è divisibile sia per 3 e per 5");
        }
    }
    else{
        printf("il valore non è divisibile sia per 3 e per 5");
    }
    return 0;
}