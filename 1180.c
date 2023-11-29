#include <stdio.h>

int main(){
    int a[1000], n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
            scanf("%d", &a[i]);
    }
    int min = a[0], pos = 0;
    for(int i = 0; i<n; i++){
        if(min>a[i]){
            min = a[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, pos);

    return 0;
}
