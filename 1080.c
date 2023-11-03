#include <stdio.h>

int main(){
    int n, max = 0, i, pos;
    for(i=1; i<=100; i++){
        scanf("%d", &n);
        if(max<n){
            max = n;
            pos = i;
        }
    }
    printf("%d\n%d\n", max, pos);

    return 0;
}
