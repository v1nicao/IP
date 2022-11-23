/*programa q vai ler os valores de a,b,c,d,e,f e jogar 
em um sistema de equacoes e calcular o x e y 
    sistema: ax + by = c 
             dx + ey = f

*/
#include <stdio.h>

int main(void){
    //variaveis desconhecidas
    double x, y;
    //variaveis conhecidas
    double a, b, c, d, e, f;
    
    //printf("digite os valores\n");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    
    //calculo da variavel isolada x;
    x = ((c*(-e))+(f*b)) / ((a*(-e))+(d*b));
    //substituino o valor de x da segunda equacao
    y = (f-(d*x))/e;

    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E = %.2lf\n", y);


    return 0;
}