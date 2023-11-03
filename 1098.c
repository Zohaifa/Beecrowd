#include <stdio.h>

int main(){
    double i, j;
    for(i=0, j=1; i<=2; i+=0.2, j+=0.2)    {
        printf("I=%g J=%g\n", i, j);
        printf("I=%g J=%g\n", i, j+1);
        printf("I=%g J=%g\n", i, j+2);
    }

    return 0;
}
