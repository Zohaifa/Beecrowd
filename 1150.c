#include <stdio.h>

int main(){
    int  i,j, a, b, sum, count =0;
    scanf("%d", &a);
    do{
        scanf("%d", &b);
    }while(b<=a);
    sum = 0;
    for(i=0; sum<b; i++){
        sum+=(i+a);
        count++;
    }
    printf("%d\n", count);
    return 0;
}
