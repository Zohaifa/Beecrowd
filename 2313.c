#include <stdio.h>

int main(){
    int  a, b, c, triangle_type, is_rectangle = 0;
    scanf("%d%d%d", &a, &b, &c);

    if( ((a+b)>c) && ((a+c)>b) && ((c+b)>a) ){

    if( a == b && b == c && c == a){
        triangle_type = 1;
    }
    else if ( a == b || b == c || c == a){
        triangle_type = 2;
    }
    else{
        triangle_type = 3;
    }
    if( (a*a == (b*b + c*c)) || (b*b == (a*a + c*c)) || (c*c == (b*b + a*a)) ){
        is_rectangle = 1;
    }
    switch(triangle_type){if( (a*a == (b*b + c*c)) || (b*b == (a*a + c*c)) || (c*c == (b*b + a*a)) ){
        is_rectangle = 1;
    }
    case 1:
        printf("Valido-Equilatero\n");
        break;
    case 2:
        printf("Valido-Isoceles\n");
        break;
    case 3:
        printf("Valido-Escaleno\n");
    }
    if(is_rectangle){
        printf("Retangulo: S\n");
    }
    else{
        printf("Retangulo: N\n");
    }
    }
    else{
        printf("Invalido\n");
    }
    return 0;
}
