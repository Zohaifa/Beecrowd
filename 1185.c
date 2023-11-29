#include <stdio.h>

int main(){
    double a[12][12], sum, avg;
    int i, j, t, d =0;
    char c;
    scanf("%c", &c);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf", &a[i][j]);
        }
    }
    sum = 0;
    for(i=0; i<11; i++){
        for(j=0; j<=10-i; j++){
            sum += a[i][j];
            d++;
        }
    }
    if(c == 'S')
        printf("%.1lf\n", sum);
    if(c == 'M')
        printf("%.1lf\n", sum/d);

    return 0;
}
