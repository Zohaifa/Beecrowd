#include <stdio.h>

int main(){
    double N1, N2, N3, N4, exam_score, avg, new_avg;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    avg = (N1 * 2 + N2 * 3 + N3 * 4 + N4)/10;
    printf("Media: %.1lf\n", avg);
    if (avg>6.9){
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0) {
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%lf", &exam_score);
        new_avg = (avg + exam_score)/2;
        printf("Nota do exame: %.1lf\n", exam_score);
        if(new_avg>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", new_avg);
        }
        else{
            printf("Aluno reprovado.\n");
        }
    }

    return 0;
}
