#include <stdio.h>
#include <stdlib.h>
 
void troca(int *x, int *y) {
    int aux;
 
    aux = *x;
    *x = *y;
    *y = aux;
}
 
void Alinha_vetor(int *vetor) {
    int i, j;
 
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 9; j++) {
            if(vetor[i] > vetor[j]) troca(&vetor[i], &vetor[j]);
        }
    }
 
}
 
int main() {
    int n_casosTestes = 0, i, j, k, vet[9], soma = 0, newVet[9], diferenca = 0;
 
    scanf("%d", &n_casosTestes);
 
    while (n_casosTestes--) {
        for (i = 0; i < 9; i++) {
            scanf("%d", &vet[i]);
            soma += vet[i];
        }
 
        for(k = 0; k < 9; k++) {
            newVet[k] = 0;
        }
        for(j = 0; j < 9; j++) {
            for(i = 0; i < 9; i++) {
                diferenca = soma - (vet[j] + vet[i]);
                
                if(abs(diferenca) != 100 && j != i) newVet[j] = vet[j];
                else if(abs(diferenca) == 100 && j != i) {
                    newVet[j] = 0;
                    break;
                }
            }
        }
 
        Alinha_vetor(newVet);
 
        for(i = 0; i < 9; i++) {
            if(newVet[i] != 0) printf("%d\n", newVet[i]);
        }
        soma = 0;
    }
 
    return 0;
}