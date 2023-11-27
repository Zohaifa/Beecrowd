#include <stdio.h>
#include <math.h>

int main(){
    int n, t;
    scanf("%d", &t);
    for(int i =0; i<t; i++){
        scanf("%d", &n);
        int count =0;
        for(int j=(n-1); j>1; j--){
            if(n%j == 0){
                count++;
            }
        }
        if(count == 0){
            printf("%d eh primo\n", n);
        }
        else{
            printf("%d nao eh primo\n", n);
        }
    }

    return 0;

}


