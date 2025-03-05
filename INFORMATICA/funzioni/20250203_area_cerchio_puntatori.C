/*dato il raggio calcolare la circonferenza del cerchio*/
#include <stdio.h>

#define PI 3.14;

void calcoloCirc(float *_raggio, float *_circ);
void calcoloArea(float *_raggio, float *_area);

int main(){
    float raggio=0;
    float circ=0;
    float area=0;

    do{
        printf("inserisci il raggio del cerchio: ");
        scanf("%f", &raggio);
    }while(raggio<=0);

    calcoloCirc(&raggio, &circ);
    calcoloArea(&raggio, &area);

    printf("la circonferenza è: %.2f\n", circ);
    printf("l'area è: %.2f", area);

    return 0;
}

void calcoloCirc(float *_raggio, float *_circ){
    *_circ=(*_raggio*2)*PI;
}

void calcoloArea(float *_raggio, float *_area){
    *_area=(*_raggio * *_raggio)*PI;
}