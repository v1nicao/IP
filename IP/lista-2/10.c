#include<stdio.h>
 
int contOcorrUltNota(int v[], int tam){
    int last_nota, num_vezes=0, i;
    last_nota=v[tam-1];
    
    for(i=0;i<tam;i++){
        if(v[i]==last_nota) num_vezes++;
    }
    return(num_vezes);
    
}
void indiceMaior(int v[], int tam, int* big, int* indMaior){
    int i;
    *big=v[0];
    *indMaior=0;
    
    for(i=1;i<tam;i++){
        if(v[i]> *big){
            *big=v[i];
            *indMaior=i;
        }
    }
    
    return;
}
 
int main(){
    int n,i, max, indMax;
    
  //Ler o numero de elemntos (n)
    scanf("%d",&n);
    int notas[n];
  //Ler as n notas
    for(i=0;i<n;i++){
        scanf("%d", &notas[i]);
    }
  
  //verificar quantas vezes a última nota ocorreu na sequência
    printf("Nota %d, %d vezes\n", notas[n-1], contOcorrUltNota(notas, n));
  
  //Encontrar o maior elemento do vetor e imprimir esse elemento e o indice do vetor onde ele ocorreu
  //pela primeira vez
  
    indiceMaior(notas, n, &max, & indMax);
    printf("Nota %d, indice %d\n", max, indMax);

    return 0;   
}