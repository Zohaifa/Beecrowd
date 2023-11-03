#include <stdio.h>

int main(){
    double S =1, i, j;
    for(i=2, j=3; j<=39; i*=2, j+=2){
        S+= (j/i);
    }
    printf("%.2lf\n", S);
    return 0;
}
