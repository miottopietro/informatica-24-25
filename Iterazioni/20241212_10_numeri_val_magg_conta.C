/*dati in input 10 numeri interi determinare il valore maggiore e
quante volte compare.*/

#include <stdio.h>
int main(){

    int num=0;
    int max=0;
    int cnt=0;
 
    for(int i=0; i<10; i++){
        printf("inserisci un valore: ");
        scanf("%d", &num);
        
        if(i==0){
            max=num;
        }

        if(num>max){
            max=num;
            cnt=0;
        }

        if(num==max){
            cnt++;
        }
    }

    printf("il numero maggiore è: %d\n", max);
    printf("il numero maggiore viene ripetuto %d volte.", cnt);

    return 0;
}