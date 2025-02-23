/*Scrivi un programma che legge in input il valore di tre lati di un triangolo,
 individua se si tratta di un triangolo equilatero e ne calcola in tal caso l’area e il perimetro*/

 #include <stdio.h>

 int main(){

    float lato1 = 0;
    float lato2 = 0;
    float lato3 = 0;
    float perimetro = 0;
    float area = 0;
    float altezza = 0;

    printf("inserisci il valore del primo lato: ");
    scanf("%f", &lato1);

    printf("inserisci il valore del secondo lato: ");
    scanf("%f", &lato2);

    printf("inserisci il valore del terzo lato: ");
    scanf("%f", &lato3);

        perimetro = lato1+lato2+lato3;
        altezza =  √((lato1*lato1)-(lato1/2*lato1/2));
        area = altezza*lato1;

    if(lato1==lato2==lato3){
        printf("il triangolo è quilatero.\n");
        printf("il perimetro è di %.2f CM \n", perimetro);
        printf("l'area è di %.2f \n", area);
    }
    else{
        printf("il triangolo non è equilatero.");
    }

    return 0;
 }