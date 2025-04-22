#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void caricaMatrice(int mat[17][10], int max, int min);
void stampaMatrice(int mat[17][10]);
void caricaVett(int vett[10], int max, int min);
void stampaVett(int vett[10]);
void caricaVett1(int vett1[17], int mat[17][10], int vett[10]);
void stampaVett1(int vett1[17]);

int main(){
    srand(time(NULL));
    int mat[17][10];
    int vett[10];
    int vett1[17];
    int max=4;
    int min=1;

    caricaMatrice(mat,max,min);
    stampaMatrice(mat);
    caricaVett(vett,max,min);
    stampaVett(vett);
    caricaVett1(vett1,mat,vett);
    stampaVett2()


    return 0;
}