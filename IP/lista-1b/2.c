/* este codigo ira calcular uma conta de agua para uma empresa 
de saneamento */
#include <stdio.h>

int main(){
    //declaracao de variaveis
    //conta do cliente
    int cod;
    //o gasto por metro cubico e o valor da conta
    double gasto, calcu;
    //tipo do consumidor: comercial, industrial e residencial
    char type;

    //leitura dos dados
    scanf("%d %lf %c", &cod, &gasto, &type);

    //condicoes para o valor da agua
    if(type == 'C'){
        calcu = 500 + (0.25*(gasto-80));   
    } else if(type == 'I'){
        calcu = 800 + (0.04*(gasto-100));
    }else if(type == 'R'){
        calcu = 5 + (0.05*gasto);
    }

    printf("CONTA = %d\nVALOR DA CONTA = %.2lf\n", cod, calcu);

    return 0;
}