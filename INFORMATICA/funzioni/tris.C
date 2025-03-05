#include <stdio.h>
void stampagriglia (char *_c1, char *_c2, char *_c3, char *_c4, char *_c5, char *_c6, char *_c7, char *_c8, char *_c9);
void sceltacasella(int _turno, char *_c1, char *_c2, char *_c3, char *_c4, char *_c5, char *_c6, char *_c7, char *_c8, char *_c9);

int main(){
    int scelta, cnt=0;
    char simbolo; 
    char c1,c2,c3,c4,c5,c6,c7,c8,c9;
    c1='1';
    c2='2';
    c3='3';
    c4='4';
    c5='5';
    c6='6';
    c7='7';
    c8='8';
    c9='9';
    while(cnt<=9)
    {
        stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);
        sceltacasella(cnt, &c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);
        
        if(cnt%2==0){
            simbolo = 'x';
        }
        else{
            simbolo = 'o';
        }
        if(c1==simbolo && c2==simbolo && c3==simbolo)
            {printf("ha vinto %c\n", simbolo);
            cnt=11;
            stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);}
        else if (c4==simbolo && c5==simbolo && c6==simbolo)
            {printf("ha vinto %c\n", simbolo);
            cnt=11;
            stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);}
        else if (c7==simbolo && c8==simbolo && c9==simbolo)
            {printf("ha vinto %c\n", simbolo);
            cnt=11;
            stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);}
        else if (c1==simbolo && c5==simbolo && c9==simbolo)
            {printf("ha vinto %c\n", simbolo);
            cnt=11;
            stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);}
        else if (c7==simbolo && c5==simbolo && c3==simbolo)
            {printf("ha vinto %c\n", simbolo);
            cnt=11;
            stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);}
        else if (c1==simbolo && c4==simbolo && c7==simbolo)
            {printf("ha vinto %c\n", simbolo);
            cnt=11;
            stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);}
        else if (c2==simbolo && c5==simbolo && c8==simbolo)
            {printf("ha vinto %c\n", simbolo);
            cnt=11;
            stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);}
        else if (c3==simbolo && c6==simbolo && c9==simbolo)
            {printf("ha vinto %c\n", simbolo);
            cnt=11;
            stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);}

            cnt++;

            
        }

        if(cnt==12){
            printf("Pareggio\n");
            stampagriglia(&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9);
        }
    }

    

 

void stampagriglia (char *_c1, char *_c2, char *_c3, char *_c4, char *_c5, char *_c6, char *_c7, char *_c8, char *_c9)
{
    

    printf("%c|%c|%c\n",*_c1,*_c2,*_c3);
    printf("_____\n");
    printf("%c|%c|%c\n", *_c4,*_c5,*_c6);
    printf("_____\n");
    printf("%c|%c|%c\n", *_c7,*_c8,*_c9);}

void sceltacasella(int _turno, char *_c1, char *_c2, char *_c3, char *_c4, char *_c5, char *_c6, char *_c7, char *_c8, char *_c9){
    int _scelta, error=1;
    char simb;
    while(error==1){
        if(_turno%2==0){
            simb = 'x';
        }
        else{
            simb = 'o';
        }
            printf("il tuo simbolo è la %c scegli una cella: ",simb);
            scanf("%d",&_scelta);
            switch (_scelta)
                {
                case 1:
                    if(*_c1=='1')
                    {*_c1=simb;
                    error=0;}
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 2:
                    if(*_c2=='2')
                    {*_c2=simb;
                    error=0;}
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 3:
                    if(*_c3=='3')
                    {*_c3=simb;
                    error=0;}
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 4:
                    if (*_c4=='4')
                    {*_c4=simb;
                    error=0;}
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 5:
                    if(*_c5=='5')
                    {*_c5=simb;
                    error=0;}
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 6:
                    if(*_c6=='6')
                    {*_c6=simb;
                    error=0;}
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 7:
                    if (*_c7=='7')
                    {*_c7=simb;
                    error=0;}
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 8:
                    if(*_c8=='8')
                    {*_c8=simb;
                    error=0;}
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                case 9:
                    if(*_c9=='9')
                    {*_c9=simb;
                    error=0;}
                    else 
                    printf("scegli un'altra cella, è gia occupata");
                    break;
                
            default:
            printf("errore");
                break;
            }
    }
}