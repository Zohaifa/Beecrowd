#include <stdio.h>

int main(){
    int n, i=0, x, y;
    double z;
    scanf("%d", &n);
    while(i<n){
        scanf("%d%d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
        z = (1.0)*x/y;
        printf("%.1lf\n", z);
        }
        i++;
    }
    return 0;
}
