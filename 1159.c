#include <stdio.h>

int main(){
    int n;
    while(1){
    scanf("%d", &n);
    if(n == 0)
        break;
    int sum =0;
    for(int i = 0; i<10; i++){
        if((n+i)%2 == 0){
            sum = sum+(n+i);
        }
    }
    printf("%d\n", sum);
    }
    return 0;

}
