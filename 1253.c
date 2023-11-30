#include <stdio.h>
#include <string.h>


int main(){
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", b[60];
    int i, j, t, n;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%s%d", b, &n);
        for(j=0; j<strlen(b); j++){
            b[j] = b[j] - n;
            if(b[j]<'A'){
                b[j] += 26;
            }
        }
        printf("%s\n", b);
    }
    return 0;
}
