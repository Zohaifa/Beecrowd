#include <stdio.h>
#include <math.h>

int main(){
    int x[10];
    for(int i =0; i<10; i++){
        scanf("%d", &x[i]);
    }
    for(int i =0; i<10; i++){
            if(x[i]>0)
        printf("X[%d] = %d\n", i, x[i]);
    else
        printf("X[%d] = 1\n", i);
    }

    return 0;
}
