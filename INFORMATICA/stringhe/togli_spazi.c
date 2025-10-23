#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

void compatta(char* buffer, int len){
    if(len > 0 && buffer[len - 1] == '\n'){
        buffer[len - 1] = '\0';
    }
}

void toglispazi(String frase){
    int i, j = 0;

    for(i = 0; frase[i] != '\0'; i++){
        if(frase[i] != ' '){
            frase[j++] = frase[i];
        }
    }
    frase[j] = '\0';
}

int main(){
    char buffer[200];
    String frase = 0;

    printf("inserisci una stringa: ");
    fgets(buffer, sizeof(buffer), stdin);

    int len = strlen(buffer);
    compatta(buffer, len);

    frase = (String)malloc((len + 1) * sizeof(char));
    if(frase == NULL){
        printf("c'è un errore\n");
        return 1;
    }

    strcpy(frase, buffer);

    toglispazi(frase);
    printf("Stringa senza spazi: %s\n", frase);

    free(frase);
    return 0;
}
