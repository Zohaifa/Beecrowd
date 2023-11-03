#include <stdio.h>

int main(){
    int d1, d2, d3, h1, h2, h3, m1, m2, m3, s1, s2, s3;
    scanf("Dia %d\n", &d1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("Dia %d\n", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    if(s2<s1){
         m2--;
         s2+=60;
    }
    s3 = s2-s1;
    if(m2<m1){
         h2--;
         m2+=60;
    }
    m3 = m2-m1;
    if(h2<h1){
         d2--;
         h2+=24;
    }
    h3 = h2-h1;
    d3 = d2-d1;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d3, h3, m3, s3);
    return 0;
}
