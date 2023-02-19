#include <stdio.h>
 
void troca (int *x, int* y){
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
}
void bubble(int v[], int n){
    int  i,j;
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (v[j]>v[j+1]) {
                troca(&v[j], &v[j+1]);
            }
        }
    }
}
void imprimeVet(int* v, int n){
    int i;
    for (i=0; i<n; i++) {
    printf("%d\n", v[i]);
    }
    //printf("\n");
}
 
int main(){
    int tam_vet, i;
 
    scanf("%d", &tam_vet);
    int vet[tam_vet];
 
    for(i=0; i<tam_vet; i++){
        scanf("%d", &vet[i]);
    }
    bubble(vet, tam_vet);
    imprimeVet(vet, tam_vet);
 
 
    return 0;
}