/*stampa i primi N numeri dispari successivi al numero A*/

#include <stdio.h>
int main(){

    int Ndispari=0;
    int num=0;

    do{
        printf("inserisci il numero di numeri dispari da generare: ");
        scanf("%d", &Ndispari);
    }while(Ndispari<=0);

    printf("inserisci un valore: ");
    scanf("%d", &num);

    for(int i=num; i<=Ndispari; i++){
        if(num%2!=0){
            printf("%d, ", i);
        }
    }
    return 0;
}