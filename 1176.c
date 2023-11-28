#include <stdio.h>

int main(){
    unsigned long long int a[60];
    int n, t;
    a[0] = 0;
    a[1] = 1;
    for(int i=2; i<61; i++){
        a[i] = a[i-1] +a[i-2];
    }
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, a[n]);
    }


    return 0;
}
