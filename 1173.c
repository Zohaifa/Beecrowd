#include <stdio.h>
#include <math.h>

int main(){
    int x[10],v;
    scanf("%d", &v);
    for(int i =0; i<10; i++){
            printf("N[%d] = %d\n", i, v);
            v*=2;
    }

    return 0;
}
