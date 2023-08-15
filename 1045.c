#include <stdio.h>

int main(){
    double X, Y, Z, A, B, C;
    scanf("%lf %lf %lf", &X, &Y, &Z); // taking three side of a triangle

    //putting them in an order of highest to lowest as A, B, C.
    if (X>=Y && X>=Z && Y>=Z){ A = X; B = Y; C = Z;}
    else if(X>=Y && X>=Z && Z>=Y){A = X; B = Z; C = Y;}
    else if(Y>=Z && Y>=X && X>=Z){A = Y; B = X; C = Z;}
    else if(Y>=Z && Y>=X && Z>=X){A = Y; B = Z; C = X;}
    else if(Z>=X && Z>=Y && X>=Y){A = Z; B = X; C = Y;}
    else{A = Z; B = Y; C = X;}
//checking if traingle can be formed
    if(A >= (B + C)){
            printf("NAO FORMA TRIANGULO\n");}// if it cant be formed, we print this message
    else{// if it can be formed we categorize them

    if(A*A == B*B + C*C) {printf("TRIANGULO RETANGULO\n"); }
    else if (A*A > B*B + C*C) { printf("TRIANGULO OBTUSANGULO\n"); }
    else if (A*A < B*B + C*C) {printf("TRIANGULO ACUTANGULO\n");}

    if(A == B && B == C){printf("TRIANGULO EQUILATERO\n");}
    else if(B == C || A == B || A ==C){ printf("TRIANGULO ISOSCELES\n"); }


    return 0;
}
}
