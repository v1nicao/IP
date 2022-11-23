/*este codigo le os 3 valores do comprimento dos lados de um triangulo
e calcula a area
*/
#include <stdio.h>
#include <math.h>
 
int main(){
    //respectivamente area do triangulo, triangulo?, e os 3 valores para os lados
    double A, T, l1, l2, l3;
 
    scanf("%lf %lf %lf", &l1, &l2, &l3);
 
    T = (l1+l2+l3)/2;
    A = sqrt(T*(T-l1)*(T-l2)*(T-l3));
 
    printf("A AREA DO TRIANGULO E = %.2lf\n", A);
 
 
    return 0;
}