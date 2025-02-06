#include <stdio.h>

long fattoriale(int _num);

int main(){

    int num=0;
    long fatt=0;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &num);
    }while(num<=0);

    fatt=fattoriale(num);

    printf("il fattoriale di %d è: %ld", num, fatt);

    return 0;
}
    long fattoriale(int _num){
    
    int _fatt=1;

    for(int i=1; i<=_num; i++){
        _fatt*=i;
    }

    return _fatt;
}