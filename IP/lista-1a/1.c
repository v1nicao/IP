#include <stdio.h>

int main(void){
    double salario, valor_consumo;
    double Kw, consumo, desconto;

    scanf("%lf %lf", &salario, &valor_consumo);

    //o custo de Kw e calculado por 0.7*salMin/100
    Kw = 0.007*salario;
    consumo = valor_consumo*Kw;
    desconto = consumo*0.9;

    printf("Custo por kW: R$ %.2lf\nCusto do consumo: R$ %.2lf\nCusto com desconto: R$ %.2lf\n", Kw, consumo, desconto);

    return 0;
}