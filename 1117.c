#include <stdio.h>

int main(){
    double avg, sum = 0, x;
    int flag=0;
    while(flag<2){
        scanf("%lf", &x);
        if(x<0 || x>10){
                printf("nota invalida\n");
        }
        else{
            sum+=x;
            flag++;
        }
    }
    avg = sum/2;
    printf("media = %.2lf\n",avg);
    return 0;
}
