#include <stdio.h>

int main(){
    int i, X;
    scanf("%d", &X);
    if(X%2 == 0){
        X++;
    }
    for(i = 1; i<=6; i++){
            printf("%d\n", X);
            X+=2;
        }
    return 0;
}
