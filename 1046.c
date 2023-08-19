#include <stdio.h>

int main(){
    int X, Y, difference;
    scanf("%d %d", &X, &Y);
    if (Y<=X){
        difference = (24 - X) + Y;
    }
    else {
        difference = Y - X;
    }
    printf("O JOGO DUROU %d HORA(S)\n", difference);

    return 0;
}
