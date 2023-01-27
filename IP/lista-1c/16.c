#include <stdio.h>
 
double teatroCIA (double valorIngresso, double valorInicial, double valorFinal){
    int cont, ingre_vendidos, best_vendidos;
    double ingre_momento, lucro, best_ingresso, best_lucro;
 
    for(cont=valorInicial; cont<=valorFinal; cont++){
        ingre_vendidos = (((valorIngresso - valorInicial)*2)*25)+120;
        lucro = (valorInicial*ingre_vendidos) - ((ingre_vendidos*0.05)+200);
 
        if(ingre_vendidos < 120){
            ingre_vendidos = (((valorIngresso - valorInicial)*2)*30)+120;
            lucro = (valorInicial*ingre_vendidos) - ((ingre_vendidos*0.05)+200);
        }
        
        printf("V: %.2lf, N: %d, L: %.2lf\n", valorInicial, ingre_vendidos, lucro);
 
        if(lucro > best_lucro){
            best_lucro = lucro;
            best_vendidos = ingre_vendidos;
            best_ingresso = valorInicial;
        }
 
        lucro = 0;
        valorInicial++;
    }
 
    printf("Melhor valor final: %.2lf\n", best_ingresso);
    printf("Lucro: %.2lf\n", best_lucro);
    printf("Numero de ingressos: %d\n", best_vendidos);
 
}
 
int main(void){
    double valor_ingresso = 0, valor_inicial = 0, valor_final = 0;
 
    scanf("%lf%lf%lf", &valor_ingresso, &valor_inicial, &valor_final);
 
    if(valor_inicial >= valor_final){
        printf("INTERVALO INVALIDO.");
    } else {
        teatroCIA(valor_ingresso, valor_inicial, valor_final);
    }
 
    return 0;
}