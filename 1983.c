#include <stdio.h>

int main(){
    int t, a, c;
    double b;
    double max=0;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
       scanf("%d%lf", &a, &b);
       if(max<b){
            max=b;
            c=a;
       }
    }
    if(max>=8){
        printf("%d\n", c);
    }
    else
        printf("Minimum note not reached\n");

}
