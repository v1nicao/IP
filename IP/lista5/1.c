#include <stdio.h>
 
typedef struct Fracao {
    int denominador, numerador;
    char barra;
 
}Fracoes;
 
int main() {   
 
    int qtd_test = 0, i, j, k, cont = 0;
 
    scanf("%d", &qtd_test);
 
    for(i = 0; i < qtd_test; i++) {
        int sequence_fracao = 0;
        
        scanf("%d", &sequence_fracao);
 
        Fracoes DIV[sequence_fracao];
 
        for(j = 0; j < sequence_fracao; j++){
            scanf("%d %c %d", &DIV[j].denominador, &DIV[j].barra, &DIV[j].numerador);
        }
        printf("Caso de teste %d\n", i + 1);
        
        for(j = 0; j < sequence_fracao; j++) {
            for(k = j + 1; k < sequence_fracao; k++) {
                if(((double)DIV[j].denominador/(double)DIV[j].numerador) == ((double)DIV[k].denominador/(double)DIV[k].numerador)) {
                    printf("%d%c%d equivalente a %d%c%d\n", DIV[j].denominador, DIV[j].barra, DIV[j].numerador, DIV[k].denominador, DIV[k].barra, DIV[k].numerador);
                    cont++;
                }
            }
        }
 
        if(cont == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
 
        cont = 0;
    }
 
    return 0;
}