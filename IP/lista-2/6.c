#include <stdio.h>
 
int main(){
    int tam_vet, i, soma = 0;
 
    scanf("%d", &tam_vet);
 
    int vetor[tam_vet];
 
    for(i=0; i<tam_vet; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("%d\n", soma);
    
    return 0;
}