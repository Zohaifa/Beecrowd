#include <stdio.h>

int main(){
    int a[1000], t;
    scanf("%d", &t);
    int j=0;
    for(int i = 0; i<1000; i++){
            if(i%t == 0)
                j=0;
            else
                j++;
    printf("N[%d] = %d\n", i, j);
    }


    return 0;
}
