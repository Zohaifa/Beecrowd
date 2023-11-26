#include <stdio.h>

int main(){
    int a, alcool=0, gasolina=0, diesel=0;
    printf("MUITO OBRIGADO\n");
    do{
        scanf("%d", &a);
        if(a == 1)
            alcool++;
        if(a==2)
            gasolina++;
        if(a==3)
            diesel++;
    }while(a!=4);
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}
