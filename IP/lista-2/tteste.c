#include <stdio.h>
#include <stdlib.h>

void ordenaVetor(int *vetor, int tamanhoVetor)
{
    int i, j;

    for( i = 0; i < tamanhoVetor; i++)
    {
        for(j = 0; j<tamanhoVetor; j++)
        {
            if(vetor[i] < vetor[j])
            {
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void imprimeApenasPares(int *vetor, int tamanhoVetor)
{
    int i;
    for(i = 0; i < tamanhoVetor; i++)
    {
        if(vetor[i]%2 == 0) printf("%d\n", vetor[i]);
    }
}

void imprimeApenasImpares(int *vetor, int tamanhoVetor)
{
    int i;
    for( i = tamanhoVetor-1; i >= 0; i--)
    {
        if(vetor[i]%2 == 1) printf("%d\n", vetor[i]);
    }
}

int main()
{

    int *vetor;
    int tamanhoVetor, i;

    scanf("%d", &tamanhoVetor);

    vetor = malloc(tamanhoVetor*sizeof(int));

    for( i = 0; i < tamanhoVetor; i++)
    {
        scanf("%d", &vetor[i]);
    }

    ordenaVetor(vetor, tamanhoVetor);
    imprimeApenasPares(vetor, tamanhoVetor);
    imprimeApenasImpares(vetor, tamanhoVetor);

}
