#include <stdio.h>

int main(){
    double x, tax;
    scanf("%lf", &x);
    if(x>=2000.01 && x<= 3000.00){
        tax = 0.08*(x-2000.00);
    }
    else if(x>=3000.01 && x<= 4500.00){
        tax = 0.08*1000.00 + (x-3000.00)*0.18;
    }
    else if(x>4500.00){
        tax = 0.08*1000.00 + 1500.00*0.18 + (x-4500.00)*0.28;
    }
    if(x<2000.00){
        printf("Isento\n");
    }
    else{
        printf("R$ %.2lf\n", tax);
    }
    return 0;
}
