#include <stdio.h>

int main(){
    int m, m1, m2, h1, h2, h;
    scanf("%d%d%d%d", &h1,&m1, &h2, &m2);
    if(m1<=m2){
        m = m2-m1;
    }
    else{
        m = m2+60-m1;
        h1++;
    }
    if(h1<=h2){
        h = h2-h1;
    }
    else{
        h = 24+h2-h1;
    }
    if(h == 0 && m == 0)
        h = 24;


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);

    return 0;
}
