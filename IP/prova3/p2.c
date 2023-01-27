#include <stdio.h>
 
void ordenaVetor(double *vetor, int tamanhoVetor) {
    int i, j;
 
    for( i = 0; i < tamanhoVetor; i++) {
        for(j = 0; j<tamanhoVetor; j++) {
            if(vetor[i] > vetor[j]) {
                double aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
 
int main(){
    int tam_vet, n_test, i;
    double nota;
 
    scanf("%d", &tam_vet);
    double alunos_turma[tam_vet];
    int mat[tam_vet];
 
    for(i=0; i<tam_vet; i++){
        scanf("%d %lf", &mat[i], &alunos_turma[i]);
    }
    ordenaVetor(alunos_turma, tam_vet);
    
    
    for(i=0; i<tam_vet; i++){
        printf("%d - Matricula: %d - Nota: %.1lf\n", i+1, mat[i], alunos_turma[i]);
    }
    
 
 
    return 0;
}