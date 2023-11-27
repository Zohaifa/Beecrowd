#include <stdio.h>

int main(){
    int n, a, b, r;
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        scanf("%d%d", &a, &b);
        r = a+b;
        printf("%d\n", r);
    }

    return 0;

}
