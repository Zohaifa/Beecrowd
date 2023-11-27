#include <stdio.h>

int main(){
    int  a;
    scanf("%d", &a);
    for(long long int i=1; i<=a; i++){
        printf("%lld %lld %lld\n", i, i*i, i*i*i);
        printf("%lld %lld %lld\n", i, i*i+1, i*i*i+1);

    }

    return 0;
}
