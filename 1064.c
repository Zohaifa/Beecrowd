#include <stdio.h>

int main(){
    int i, count;
    double num, sum;
    count = 0; sum = 0;
    for(i = 1; i<=6; i++){
        scanf("%lf", &num);
        if(num>0){
            count++;
            sum = sum + num;
        }
    }
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", sum/count);

    return 0;
}
