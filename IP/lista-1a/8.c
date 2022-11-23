#include <stdio.h>
 
int main(){
    //preco do carro, percentual do distribuidor, impostos e o valor final do carro
    double Price_car, Distri_percent, tax_percent, Final_price;
 
    scanf("%lf %lf %lf", &Price_car, &Distri_percent, &tax_percent);
 
    //calculo do preco final do carro
    Final_price = Price_car + ((Distri_percent/100)*Price_car) + ((tax_percent/100)*Price_car);
 
    printf("O VALOR DO CARRO E = %.2lf\n", Final_price);
 
    return 0;
}