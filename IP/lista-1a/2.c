/* conversao de fahrenheit para celsius e conversao de chuva
em polegadas para milimetro
*/
#include <stdio.h>
 
int main(){
    double Fah, Cel, Pol, mm;
 
    scanf("%lf %lf", &Fah, &Pol);
 
    Cel = (5*(Fah-32))/9;
    mm = Pol*25.4;
 
    printf("O VALOR EM CELSIUS = %.2lf\nA QUANTIDADE DE CHUVA E = %.2lf\n", Cel, mm);
 
 
 
    return 0;
}