#include <stdio.h>

int main(){
    int a, b, c, s;
    scanf("%d%d%d", &a, &b, &c);
    s = a+b+c;
    if(s>=24)
        printf("%d\n", s-24);
    else if(s<0)
        printf("%d\n", s+24);
    else
        printf("%d\n", s);
    return 0;
}
