/*
Verificare se una stringa è palindroma
    ES: anna è palindroma
        ciao non è palindroma
*/

#include <stdio.h>
#include <stdlib.h>

typedef char* String;

int lunghezza(String s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

int Palindroma(String s, int len){
    int flag=0;
    int i=0;
    int j=0;

    for(i=0, j=len-1; i<len/2; i++, j--){
        if(s[i]!=s[j]){
            flag=1;
        }
    }
    return flag;
}

int main(){

    int dim=0;
    int palindroma=0;

    String s=(String)malloc(sizeof(char)*50);

    if(s==NULL){
        return 1;
    }

    printf("inserisci una stringa: ");
    fgets(s, 50, stdin);
    printf("\n%s", s);

    dim=lunghezza(s);
    printf("\n%d\n", dim);

    palindroma=Palindroma(s, dim);
    if(palindroma=1){
        printf("la frase è palindroma.");
    }else{
        printf("la frase non è palindroma.");
    }


    return 0;
}