/*sviluppare un programma in C che sviluppi
il triangolo di floyd
N=5

1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>

void floyd(int _numRighe);

int main(){

    int numRighe=0;

    do{
        printf("inserisci il numero di righe: ");
        scanf("%d", &numRighe);
    }while(numRighe<=0);

    floyd(numRighe);

    return 0;
}

void floyd(int _numRighe){
    int cnt=1;

    for(int i=1; i<=_numRighe; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
}
