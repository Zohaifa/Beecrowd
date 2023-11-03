#include <stdio.h>

int main(){
    int i, x, y, big, small, n, sum, d;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
            scanf("%d%d", &x, &y);
            if(x>y){
                big = x;
                small = y;
            }
            else{
                big = y;
                small = x;
            }
            sum =0;
            for(d = small+1; d<big; d++){
                if(d%2 == 1){
                    sum+=d;
                }
            }
            printf("%d\n", sum);

    }


    return 0;
}
