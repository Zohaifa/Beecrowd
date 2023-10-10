#include <stdio.h>

int main(){
    double x, rate, inc;
    scanf("%lf", &x);
    if(x>=0 && x<=400){
        rate = 15.0;
        inc = (x*rate)/100;
        x = x+ inc;
    }else if(x>400 && x<800){
        rate = 12.0;
        inc = (x*rate)/100;
        x = x+ inc;
    }else if(x>=800 && x<=1200){
        rate = 10.0;
        inc = (x*rate)/100;
        x = x+ inc;
    }else if(x>=1200 && x<=2000){
        rate = 7.0;
        inc = (x*rate)/100;
        x = x+ inc;
    }
    else{
        rate = 4.0;
        inc = (x*rate)/100;
        x = x+ inc;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.lf %%\n", x, inc, rate);


    return 0;
}
