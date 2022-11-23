#include <stdio.h>
 
int main() {
    double At, Ac, Al;      //area total da lata, area do cilindro, area lateral
    double R, H;     //raio e altura da lata
 
    scanf("%lf %lf", &R, &H);
 
    //calculo da area do cilindro
    Ac = (R * R) * 3.14159;
    //calculo da area lateral do cilindro
    Al = (R * H) * 6.28318;
    //calculo da area total da lata
    At = (2 * Ac) + Al;
 
    //como que cada metro quadrado de lata vale R$100, basta multiplicar por 100 e acha o custo
    printf("O VALOR DO CUSTO E = %.2lf\n", At*100);
 
 
    return 0;
}