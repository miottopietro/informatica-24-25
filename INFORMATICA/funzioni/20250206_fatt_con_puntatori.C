#include <stdio.h>

void fattoriale(int *_num, long *_fatt);

int main(){

    int num=0;
    long fatt=1;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &num);
    }while(num<=0);

    fattoriale(&num, &fatt);

    printf("il fattoriale di %d è: %ld", num, fatt);

    return 0;
}
    void fattoriale(int *_num, long *_fatt){

    for(int i=1; i<=*_num; i++){
        *_fatt*=i;
    }
}