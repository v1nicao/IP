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
double MEIO2 (int I, const int vet[], int n) {  //acha o segundo numero do meio
 
    double maior = 0;
 
    for(I = 0; I < n/2; I++) {
        if(vet[I] > maior) maior = vet[I];
    }
 
    return maior;
}
 
double MEIO1 (int i, const int vet[], int n) {  //acha o primeiro numero do meio
 
    double menor = 0, aux;
 
    aux = (n/2) + 1;
 
    for(i = 0; i < aux; i++) {
        if(vet[i] > menor) menor = vet[i];
    }
 
    return menor;
}
 
int main() {
    int tam_max, i, j;
    double mediana = 0;
    
    scanf("%d", &tam_max);
    
    int n_cases[tam_max];
    
    for(i=0; i<tam_max; i++){
        scanf("%d", &n_cases[i]);
    }
    
    bubble(n_cases, tam_max);
    
    if(tam_max%2 == 0){
        mediana = (MEIO1(i, n_cases, tam_max) + MEIO2(i, n_cases, tam_max))/2;
        printf("%.2lf\n", mediana);
    } 
    else {
        mediana = n_cases[tam_max/2];
        printf("%.2lf\n", mediana);
    }
 
    return 0;
}