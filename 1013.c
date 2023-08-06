#include <stdio.h>

int main() {
    double A, B, C, AREA1, AREA2, AREA3, AREA4, AREA5, pi;
    scanf("%lf%lf%lf", &A, &B, &C);
    pi = 3.14159;
    AREA1 = 0.5*A*C;
    AREA2 = pi*C*C;
    AREA3 = 0.5*(A + B)*C;
    AREA4 = B*B;
    AREA5 = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", AREA1, AREA2, AREA3, AREA4, AREA5);
    return 0;
}
