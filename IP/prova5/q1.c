#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct loja {
    char cliente[300];
    char CPF[12];
    int n_vezes_comprou;
    double valor_medio;
    int atraso;
} clientes;
 
clientes *a;
 
void precedencia(clientes a[], int n) {
    int i, j;
    clientes aux;
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if (((a[j].n_vezes_comprou * a[j].valor_medio) * 2 - a[j].atraso) > (2 * (a[i].n_vezes_comprou * a[i].valor_medio) - a[i].atraso)) {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            } else if((2 * (a[i].n_vezes_comprou * a[i].valor_medio) - a[i].atraso) == (2 * (a[j].n_vezes_comprou * a[j].valor_medio) - a[j].atraso)) { 
                if (strcmp(a[i].CPF, a[j].CPF) > 0) {
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                } 
            }
        }
    }
}
 
 
int main(){
    int qtd_cliente, i;
 
    scanf("%d", &qtd_cliente);
    a = malloc(qtd_cliente * sizeof(clientes));
 
    for(i=0; i<qtd_cliente; i++){
        getchar();
 
        scanf("%[^\n]", a[i].cliente);
        scanf("%s", a[i].CPF);
        scanf("%d", &a[i].n_vezes_comprou);
        scanf("%lf", &a[i].valor_medio);
        scanf("%d", &a[i].atraso);
        
    }
    for(i=0; i<qtd_cliente; i++){
        precedencia(a, qtd_cliente);
    }
 
    for(i=0; i<qtd_cliente; i++){
        printf("%s\n%s\n%d\n%.2lf\n%d\n", a[i].cliente, a[i].CPF, a[i].n_vezes_comprou, a[i].valor_medio, a[i].atraso);
    }
 
    free(a);
 
    return 0;
}