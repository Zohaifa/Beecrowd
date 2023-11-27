#include <stdio.h>

int main(){
    int a=0, b=1, n, i, sum =0;
    scanf("%d", &n);
    if(n>=1){
        printf("%d", a);
    }
    if(n>=2)
        printf(" %d", b);
    if(n>=3){
        for(i=3; i<=n; i++){
            sum = a+b;
            a=b;
            b=sum;
            printf(" %d", sum);
        }
    }
    printf("\n");

    return 0;
}
