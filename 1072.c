#include <stdio.h>

int main(){
    int n, x, cin=0, ccout=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        if(x<10 || x>20){
            ccout++;
        }
        else{
            cin++;
        }
    }
    printf("%d in\n%d out\n", cin, ccout);

    return 0;
}
