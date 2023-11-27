#include <stdio.h>
#include <math.h>

int main(){
    int n, t;
    scanf("%d", &t);
    for(int i =0; i<t; i++){
        scanf("%d", &n);
        int sum =0;
        for(int j=(n-1); j>0; j--){
            if(n%j == 0){
                sum = sum+j;
            }
        }
        if(sum == n){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n", n);
        }
    }

    return 0;

}


