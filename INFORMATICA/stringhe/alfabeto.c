
#include <stdio.h>

int main() {
    int N=0;
    char lettera='A';
    char* str;
    
    do{
        printf("Inserisci un numero (compreso tra 1 e 26): ");
        scanf("%d", &N);
    }while(N<=1||N>26);

    str=(char*)malloc(N+1)*sizeof(char));

    for(int i=0; i<N; i++) {
        str[i]=lettera++;
    }

    str[N]='\0';

    printf("La stringa è: %s\n", str);

    return 0;
}
