#include <stdio.h>

int main(){
    double a[100], t;
    scanf("%lf", &t);
    a[0] = t;
    printf("N[0] = %.4lf\n", t);
    for(int i = 1; i<100; i++){
            a[i] = a[i-1]/2;
    printf("N[%d] = %.4lf\n", i, a[i]);
    }


    return 0;
}
