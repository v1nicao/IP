//classificacao do aco
#include <stdio.h>

int main(void){
    int Carbo, Rock, RT;

    scanf("%d %d %d", &Carbo, &Rock, &RT);

    /*a classificacao do aco se deve a quantidade de teste que foi aprovada,
    variando de grau 10 a 7, satisfazendo as seguintes especificacoes:
    1. carbono < 7;
    2. dureza rockwell > 50;
    3. resistencia a tracao > 80000;
    */

    //passou em todos os testes
    if(Carbo < 7 && Rock > 50 && RT > 80000){
        printf("ACO DE GRAU = 10\n");
        //return 0;
    }
    //passou nos teste 1 e 2
    if(Carbo < 7 && Rock > 50 && RT <= 80000){
        printf("ACO DE GRAU = 9\n");
        //return 0;
    }
    //passou no teste 1
    if(Carbo < 7 && Rock <= 50 && RT <= 80000){
        printf("ACO DE GRAU = 8\n");
        //return 0;
    }
    //passou em nenhum caso de teste
    if(Carbo >= 7 && Rock <= 50 && RT <= 80000){
        printf("ACO DE GRAU = 7\n");
        //return 0;
    }

    return 0;
}