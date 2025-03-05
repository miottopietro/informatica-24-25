/*avendo un'equazione ricavare i coefficenti e determinare la parabola*/

#include <stdio.h>

float delta(int a, int b, int c);

int main(){

    int a=0;
    int b=0;
    int c=0;
    float delta=0;

    printf("inserisci il valore di A: ");
    scanf("%d", &a);

    printf("inserisci il valore di B: ");
    scanf("%d", &b);

    printf("inserisci il valore di C: ");
    scanf("%d", &c);

    float delta(a,b,c);

    return 0;
}
float delta(int a, int b, int c){
    delta = (b*b)-4(a*c);
    printf("il delta è: %f", delta);
}