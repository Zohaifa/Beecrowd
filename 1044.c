#include <stdio.h>

int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    if(X%Y==0 || Y%X==0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }


    return 0;
}
