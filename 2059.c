#include <stdio.h>

int main(){
    int  p, j1, j2, r, a, sum;
    scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);
    sum = j1 + j2;
    if(a != 0){
        if(a == r){
            printf("Jogador 2 ganha!\n");
        }
        else{
            printf("Jogador 1 ganha!\n");
        }
    }
    else if(r != 0){
            printf("Jogador 1 ganha!\n");

    }

    else{
        if(sum%2 != p)
            printf("Jogador 1 ganha!\n");
        else
            printf("Jogador 2 ganha!\n");
    }

    return 0;
}
