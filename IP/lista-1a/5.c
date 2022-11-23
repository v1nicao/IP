/*este simples codigo calcula o volume de uma piramide de base hexagonal
*/
#include <stdio.h>
#include <math.h>
 
int main() {
 
    double H, Ares;
    double v, Ab;
 
    scanf("%lf %lf", &H, &Ares);
 
    Ab = (sqrt(3)*(Ares*Ares)*3)/2;
    v = (Ab * H)/3;
 
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", v);
 
    return 0;
}