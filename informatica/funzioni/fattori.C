/*dato un valore stamparew i suoi fattori
ES: 28 = 2*2*7   2, 2, 7
ES: 36 = 2*13    2, 13

28/2
14/2
7/7
1
*/

#include <stdio.h>

void fattori(int fatt, int num);

int main(){

    int num=0;
    int fatt=0;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &num);
    }while(num<=0);

    fattori(fatt, num);

    return 0;
}
void fattori(int _fatt, int _num){
    int i;
    for(i=2; i<=_num; i++){

        if(_num%i==0){
            printf("%d, ", i);
            _num=_num/i;
            i=1;
        }
    }
}