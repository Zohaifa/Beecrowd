#include <stdio.h>

int main(){
    int cont, rounds = 0, inter_goals, inter_wins=0, gremio_goals, gremio_wins=0, draws=0;

    while(1){
        scanf("%d%d", &inter_goals, &gremio_goals);
        if(inter_goals>gremio_goals)
            inter_wins++;
        else if(gremio_goals>inter_goals)
            gremio_wins++;
        else
            draws++;
        rounds++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &cont);
        if(cont == 2)
            break;
    }

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", rounds, inter_wins, gremio_wins, draws);

    if(inter_wins>gremio_wins)
        printf("Inter venceu mais\n");
    else if(inter_wins<gremio_wins)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");

    return 0;
}
