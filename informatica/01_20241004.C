/*Scrivi un programma che legge in input il valore di due lati di un quadrilatero,
 individua se si tratta di un quadrato o di un rettangolo e ne calcola il perimetro e l’area.*/

 #include <stdio.h>

 int main(){

    float base = 0;
    float altezza = 0;
    float perimetro = 0;
    float area = 0;

    printf("Inserisci il valore della base: ");
    scanf("%f", &base);
    printf("Inserisci il valore dell' altezza: ");
    scanf("%f", &altezza);

    perimetro = (base*2)+(altezza*2);
    printf("il perimentro della figura è: %.2f CM " , perimetro);

    area = base*altezza;
    printf("l'area della figura geometrica è: %.2f CM2 ", area);

    if(base==altezza){
        printf("la forma geometrica è un quadrato.");
    }
    else{
        printf("la forma geometrica è un rettangolo.");
    }

    return 0;
 }