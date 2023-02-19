#include <stdio.h>
 
int main() {
 
    int N = 0, i, j, CPF[11], soma1 = 0, aux_soma = 0, vezes = 1, aux_vezes = 9;
 
    scanf("%d", &N);
 
    for(j = 0; j < N; j++) {
        for(i = 0; i < 11; i++) {
            scanf("%d", &CPF[i]);
        }
        for(i = 0; i < 9; i++) {
            soma1 += CPF[i] * vezes++;
        }
        for(i = 0; i < 9; i++) {
            aux_soma += CPF[i] * aux_vezes--;
        }
        if(soma1 % 11 == CPF[9] && aux_soma % 11 == CPF[10] || soma1 % 11 == 10 && aux_soma % 11 == 10) printf("CPF valido\n");
        
        else printf("CPF invalido\n");
        
        soma1 = 0;
        aux_soma = 0;
        aux_vezes = 9;
        vezes = 1;
    }
 
    return 0;
}