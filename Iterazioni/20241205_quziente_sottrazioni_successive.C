/*calcolare il quoziente fra due numeri applicando il metodo delle sottrazioni successive*/

#include <stdio.h>
int main(){

    int num1=0;
    int num2=0;
    int q=0;
    int r=0;
    int temp=0;

    do{
        printf("inserisci il primo valore: ");
        scanf("%d", &num1);
    }while(num1<=0);

    do{
        printf("inserisci il secondo valore: ");
        scanf("%d", &num2);
    }while(num2<=0);

    if(num2<num1){
       temp=num1;
       num1=num2;
       num2=temp;  
    }
    r=num1;
    while(r>=num2){
        r-=num2;
        q++;
    }
    printf("il quoziente è: %d con resto %d.", q, r);

    return 0;
}