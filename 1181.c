#include <stdio.h>

int main(){
    double a[12][12], sum, avg;
    int i, j, t;
    char c;
    scanf("%d %c", &t, &c);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf", &a[i][j]);
        }
    }
    sum = 0;
    for(j=0; j<12; j++){
        sum += a[t][j];
    }
    if(c == 'S')
        printf("%.1lf\n", sum);
    if(c == 'M')
        printf("%.1lf\n", sum/12);

    return 0;
}
