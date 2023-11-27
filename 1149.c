#include <stdio.h>

int main(){
    int  i,j, a, b, sum;
    scanf("%d", &a);
    do{
        scanf("%d", &b);
    }while(b<=0);
    sum = a;
    for(i=1; i<b; i++){
        sum+=(i+a);
    }
    printf("%d\n", sum);
    return 0;
}
