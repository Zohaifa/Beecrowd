#include <stdio.h>
#include <string.h>

int main(){
    char a[1010], b[1010], c[1010];
    int t, i, j, k;
    scanf("%d", &t);
    for(i = 0; i<t; i++){
            scanf(" %s %s", a, b);
            int la = strlen(a);
            int lb = strlen(b);
            for(j =(la-lb), k=0; j<la; j++, k++){
                c[k] = a[j];
            }
            c[k]='\0';
            if(!(strcmp(c,b))){
                printf("encaixa\n");
            }
            else{
                printf("nao encaixa\n");
            }
    }

    return 0;
}
