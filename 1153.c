#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    long long int factorial=n;
    for(i=1; i<n; i++){
            factorial = factorial*(n-i);
    }
    printf("%lld\n", factorial);
    return 0;
}
