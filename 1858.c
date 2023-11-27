#include <stdio.h>

int main(){
    int n, a, b;
    scanf("%d", &n);
    int i=1, pos =1;
    int min = scanf("%d", &a);
    while(i<n){
        i++;
        scanf("%d", &a);
        if(min>a){
            min =a;
            pos = i;
        }
    }
    printf("%d\n", pos);

    return 0;

}
