#include <stdio.h>

int main(){
    int n, i, d, frogs = 0, rats = 0, rabbits = 0, total =0;
    double frogp, ratp, rabbitp;
    char c;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d %c", &d, &c);
        if(c == 'C'){
            rabbits+=d;
        }
        if(c=='R'){
            rats+=d;
        }
        if(c=='S'){
            frogs+=d;
        }
        total+=d;
    }
    frogp = (double)frogs*100/total;
    rabbitp = (double)rabbits*100/total;
    ratp = (double)rats*100/total;


    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", total, rabbits, rats, frogs, rabbitp, ratp, frogp);

    return 0;
}
