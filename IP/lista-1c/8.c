#include <stdio.h>
 
 
int main(){
    int Pa, Pb, i=0;  //pais A e pais B
 
    scanf("%d %d", &Pa, &Pb);
 
    while(Pa<Pb){
        i++;    //o i vai ser o contador de anos e vai incrementar 1 ano
        Pa = 0.03*Pa + Pa;  //calculo da populacao A
        Pb = 0.015*Pb + Pb; //calculo da populacao B
    }
    printf("ANOS = %d\n", i);
 
 
 
    return 0;
}