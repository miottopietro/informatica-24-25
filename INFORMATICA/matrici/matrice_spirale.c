#include <stdio.h>
#define N 4

void riempiMat(int _Mat[][N]){
    int num=1;
    int i=0;
    int top=0;
    int bottom=N-1;
    int left=0;
    int right=N+-1;

    while(num<=N*N){
        //sinistra verso destra 
        for(i=left; i<=right; i++){
            _Mat[top][i ]=num++;
        }
        top++;

        //alto verso basso
        for(i=top; i<=bottom; i++){
            _Mat[i][right]=num++;
        }
        right--;

        //destra verso sinistra
        for(i=right; i>=left; i--){
            _Mat[bottom][i]=num++;
        }
        bottom--;

        //basso verso alto
        for(i=bottom; i>=top; i--){
            _Mat[i][left]=num++;
        }
        left++;
    }
}

void stampaMat(int _Mat[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d\t", _Mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int Mat[N][N];

    riempiMat(Mat);
    printf("la matrice a spirale è: \n");
    stampaMat(Mat);
}