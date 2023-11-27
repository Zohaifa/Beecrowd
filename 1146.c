#include <stdio.h>

int main(){
    int  a;
    do{
        scanf("%d", &a);
        for(int i=1; i<=a; i++){
            printf("%d", i);
            if(i==a)
                printf("\n");
            else
                printf(" ");
        }
    }while(a != 0);
    return 0;
}
