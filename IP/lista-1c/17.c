#include <stdio.h>
 
int main() {
    //linhas, colunas, variavel auxiliar, contadores i, j
    int L = 0, C = 0, aux = 0, i, j;
 
    scanf("%d%d", &L, &C);
 
    aux = C - (C - 1);
 
    for(i = 2; i <= L; i++) {
        if(aux > C) {
            aux = C;
        }
        for(j = 1; j <= aux; j++) {
            printf("(%d", i);
            printf(",%d)", j);
 
            if(j != aux) printf("-");
            
            else printf("\n");
        }
        aux++;
    }
 
    return 0;
}