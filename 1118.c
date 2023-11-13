#include <stdio.h>

int main(){
    double avg, sum = 0, x;
    int flag=0, continuation;
    do{while(flag<2){
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
    flag = 0;
    sum = 0;
    do{
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &continuation);
    }while(continuation<1 || continuation>2);
    }while(continuation!=2);
    return 0;
}
