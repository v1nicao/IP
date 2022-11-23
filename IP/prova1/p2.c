#include <stdio.h>
 
int main(void){
    /*as variaveis n são as notas dos sobrinhos dado pelo exercicio*/
    double n11, n12, n13, n21, n22, n23, n31, n32, n33;
    double sobr1, sobr2, sobr3, maior, menor, meio; //variavel que vai guardar as notas do sobrinho, e guardar quem tirou a maior e menor nota
    int qtd_doce;   //a quantidade total de doces;
    
    //leitura das notas
    scanf("%lf %lf %lf", &n11, &n12, &n13);
    scanf("%lf %lf %lf", &n21, &n22, &n23);
    scanf("%lf %lf %lf", &n31, &n32, &n33);
    
    //calculo da média convertendo para um numero inteiro
    sobr1 = (int)(n11+n12+n13)/3;
    sobr2 = (int)(n21+n22+n23)/3;
    sobr3 = (int)(n31+n32+n33)/3;
    maior = meio = menor = sobr1;   //salvando a informacao para comparacao
 
    //qtd_doce = sobr1+sobr2*+sobr3;
    
    //descobrindo qual sobrinho tirou a maior media
    if(sobr2 > maior){
        maior = sobr2;
    }
    if(sobr3 > maior){
        maior = sobr3;
    }
    if(sobr2 < menor){
        menor = sobr2;
    }
    if(sobr3 < menor){
        menor = sobr3;
    }
    if(sobr2 < maior && sobr2 > menor){
        meio = sobr2;
    }
    if(sobr3 < maior && sobr3 > menor){
        meio = sobr3;
    }
    qtd_doce = (maior*3)+(meio*2)+(menor);  //quantidade total de doces ja com os pesos
 
    printf("Total de doces a comprar: %d\n", qtd_doce);
    printf("%.0lf doces para o sobrinho com media %.0lf\n", maior*3, maior);
    printf("%.0lf doces para o sobrinho com media %.0lf\n", meio*2, meio);
    printf("%.0lf doces para o sobrinho com media %.0lf\n", menor, menor);
 
 
 
    return 0;
}