#include <stdio.h>

int main(){
    //variaveis
    int ingre_vend, cont; //numero de ingressos e um contador
    int i;
    //porcentagem nas categorias popular, geral, aquibancada e cadeiras
    double per_pop, per_ge, per_arq, per_cad, renda;
    double t1, t2, t3, t4;

    scanf("%d", &cont);

    for(i=1; i<=cont; i++){
        scanf("%d %lf %lf %lf %lf", &ingre_vend, &per_pop, &per_ge, &per_arq, &per_cad);
        t1 = (((per_pop/100)*ingre_vend)*1);
        t2 = (((per_ge/100)*ingre_vend)*5);
        t3 = (((per_arq/100)*ingre_vend)*10);
        t4 = (((per_cad/100)*ingre_vend)*20);

        renda = t1+t2+t3+t4;

        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, renda);
    }


    return 0;
}