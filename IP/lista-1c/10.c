#include <stdio.h>
 
int main(void){
    double num, k, soma, s, resul;
    int i, loop;
 
    scanf("%lf\n", &num);
    scanf("%lf\n%d\n", &k, &loop);
    scanf("%lf", &s);
    
    if(num <= 9){
    soma = k;
    printf("Tabuada de soma:\n");
    for(i=0; i<loop; i++){
        resul = num + soma;
        printf("%.2lf + %.2lf = %.2lf\n", num, soma, resul);
        soma += s;
    } soma = k;
    printf("Tabuada de subtracao:\n");
    for(i=0; i<loop; i++){
        resul = num - soma;
        printf("%.2lf - %.2lf = %.2lf\n", num, soma, resul);
        soma += s;
    } soma = k;
    printf("Tabuada de multiplicacao:\n");
    for(i=0; i<loop; i++){
        resul = num * soma;
        printf("%.2lf x %.2lf = %.2lf\n", num, soma, resul);
        soma += s;
    } soma = k;
    printf("Tabuada de divisao:\n");
    for(i=0; i<loop; i++){
        resul = num / soma;
        printf("%.2lf / %.2lf = %.2lf\n", num, soma, resul);
        soma += s;
    }
    }
    return 0;
}