#include <stdio.h>
#include <math.h>

int main(){
    int n, i, x, y;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d%d", &x,&y);
        int j =0, sum =0;
        while(j < y){
            if(abs(x%2) == 1){
                sum += x;
                j++;
            }
            x++;
        }
        printf("%d\n", sum);
    }

    return 0;
}
