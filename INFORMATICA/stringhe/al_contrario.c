/*data una stringa creare la stringa al contrario scambiando gli elementi*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* Stringa;

void flip(Stringa s){
    char tmp=0;

    for(int i=0; i<strlen(s)/2; i++){
        tmp=s[i];
        s[i]=s[strlen(s)-i-1];
        s[strlen(s)-i-1]=tmp;
    }
}

int main() {
    char tmp=0;
    int i=0;

    Stringa s=(Stringa)malloc(sizeof(s)*sizeof(char));
    if(s==NULL){
        return 1;
    }

    printf("inserisci una stringa: ");
    fgets(s, 50, stdin);

    flip(s);
    printf("la stringa invertita vale: %s", s);
    return 0;
}