#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int denominador, numerador;
    char operacao;
 
}Fracoes;
 
int main() {   
 
    int qtd_test = 0, i, j, k, cont = 0, cont2 = 0, aux = 0;
    char condicao_parada;
 
    scanf("%d", &qtd_test);
 
    Fracoes *qtd_fracao;
    Fracoes *temp;
    qtd_fracao = (Fracoes*)malloc(sizeof(Fracoes)*5);
    
    for(i = 0; i < qtd_test; i++) {
        //int sequence_fracao = 0;
        cont2 = 5;
        //scanf("%d", &sequence_fracao);
        //Fracoes DIV[sequence_fracao];
 
        while(1){
            scanf("%d%c%d%c", &qtd_fracao[aux].denominador, &qtd_fracao[aux].operacao, &qtd_fracao[aux].numerador, &condicao_parada);
            aux++;
            if(aux >= cont2-1){
                cont2++;
                temp = (Fracoes*)realloc(qtd_fracao, cont2*sizeof(Fracoes));
                if(aux) qtd_fracao = temp;
            }
            if(condicao_parada != ' ') break;
        }
 
        printf("Caso de teste %d\n", i + 1);
        
        for(j = 0; j < aux; j++) {
            for(k = j + 1; k < aux; k++) {
                if(((double)qtd_fracao[j].denominador/(double)qtd_fracao[j].numerador) == ((double)qtd_fracao[k].denominador/(double)qtd_fracao[k].numerador)) {
                    printf("%d%c%d equivalente a %d%c%d\n", qtd_fracao[j].denominador, qtd_fracao[j].operacao, qtd_fracao[j].numerador, qtd_fracao[k].denominador, qtd_fracao[k].operacao, qtd_fracao[k].numerador);
                    cont++;
                }
            }
        }
        
 
        if(cont == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
 
        cont = 0;
        aux = 0;
    }
    
    free(qtd_fracao);
 
    return 0;
}