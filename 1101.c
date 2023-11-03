#include <stdio.h>

int main(){
    int i, x, y, big, small, n, sum, d;
    while(1){
            scanf("%d%d", &x, &y);
            if(x<=0 || y<=0){
                break;
            }
            if(x>y){
                big = x;
                small = y;
            }
            else{
                big = y;
                small = x;
            }
            sum = 0;
            for(d = small; d<=big; d++){
                printf("%d ", d);
                    sum+=d;
            }
            printf("Sum=%d\n", sum);

    }


    return 0;
}
