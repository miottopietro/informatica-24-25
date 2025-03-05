/*avendo un'equazione ricavare i coefficenti e determinare la parabola*/

#include <stdio.h>

float calcolodelta(int a, int b, int c);

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

    delta=calcolodelta(a,b,c);

    printf("il delta è: %.2f", delta);

    return 0;
}
float calcolodelta(int a, int b, int c){
    return (b*b)-4*(a*c);
}