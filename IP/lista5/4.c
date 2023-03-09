#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct dimensao{
    double c1;
    double c2;
    double c3;
    double c4;
    double square;
}dim;

void trade(dim* x, dim* y){
    dim temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

void ordena(dim vet[], int n){
    int i, j;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(vet[i].square > vet[j].square) trade(&vet[i], &vet[j]);
        }
    }
}

int main(){
    int qtd_caso, i;
    dim *vetor_A;
    double soma;

    scanf("%d", &qtd_caso);
    vetor_A = malloc(qtd_caso*sizeof(dim));
    if(qtd_caso >= 2 && qtd_caso <= 1000){
        for(i=0; i<qtd_caso; i++){
            scanf("%lf", &vetor_A[i].c1);
            scanf("%lf", &vetor_A[i].c2);
            scanf("%lf", &vetor_A[i].c3);
            scanf("%lf", &vetor_A[i].c4);
            soma = pow(vetor_A[i].c1, 2) + pow(vetor_A[i].c2, 2) + pow(vetor_A[i].c3, 2) + pow(vetor_A[i].c4, 2);
            vetor_A[i].square = sqrt(soma);
        }
        ordena(vetor_A, qtd_caso);

        for(i=0; i<qtd_caso; i++){
            printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf,) Norma: %.2lf\n", vetor_A[i].c1, vetor_A[i].c2, vetor_A[i].c3, vetor_A[i].c4, vetor_A[i].square);
        }
    }
    free(vetor_A);

    return 0;
}