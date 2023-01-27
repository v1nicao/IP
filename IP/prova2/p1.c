/*dados:
    1 feminino
    2 masculino
    respostas: 1-sim, 2 nao*/
 
#include <stdio.h>
 
int main(){
    int i, pessoas_entrevistadas, genero, answer = 0;
    double porcentagem_sim, porcentagem_nao, muie=0, homi=0, yes=0, yes_wo, no=0, no_men=0;
 
    scanf("%d", &pessoas_entrevistadas);
 
    for(i=1; i<=pessoas_entrevistadas; i++){
        scanf("%d %d", &genero, &answer);
        if(genero == 1){
            muie++;
            if(answer == 1){
                yes++;
                yes_wo++;
            } else no++;
 
            genero = 0;
        } else {
            homi++;
            if(answer == 1) yes++;
            else {
                no++;
                no_men++;
            }
            genero = 0;
        }
/*
        if(answer == 1){
            yes++;
        } else if(answer == 2){
            no++;
        }
*/
    }
    porcentagem_sim = (yes_wo/muie)*100;
    porcentagem_nao = (no_men/homi)*100;
 
    printf("SIM = %.0lf\nNAO = %.0lf\nFEMININO - SIM = %.2lf\nMASCULINO - NAO = %.2lf\n", yes, no, porcentagem_sim, porcentagem_nao);
 
 
 
    return 0;
}