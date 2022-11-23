#include <stdio.h>
//#include <math.h>
 
int main(){
    //respectivamente, volume do cilindro, volume da esfera, raio do cilindro, raio da esfera, altura e uma variavel temporaria para guardar o valor da divisão
    double Vc, Ve, rc, re, h, temp;
    

    //leitura do raio do cilindro e a altura dele
    scanf("%lf %lf", &rc, &h);
    //leitura do raio da esfera
    scanf("%lf", &re);
 
    //a conta abaixo pode ser usar a funcao pow para calcular a potencia
    //Vc = 3.1416*(pow(rc,2))*h;
    //Ve = (4*3.1416*(pow(rc,3)))/3;
    
    //calculo do volume do cilindro
    Vc = 3.1416*h*(rc*rc);
    //calculo do volume da esfera
    Ve = (4*3.1416*(re*re*re))/3;
 
    
    temp = Vc/Ve;
 
    printf("Sao necessarias: %.2lf esferas de raio %.2lf.\n", temp, re);
 
 
    return 0;
}