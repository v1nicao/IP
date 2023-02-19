//esta é a primeira versão utilizada para o teste do sharif, onde possui a nota 4 do total de 7
#include <stdio.h>
#include <math.h>
 
//desconsiderar essa funcao
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
 
int main(){
    int n_student, min_presence;
    int i, k, aux=0;
    
    scanf("%d %d", &n_student, &min_presence);
    int student[n_student];
    int presence[n_student];
 
    for(i=0; i<n_student; i++){
        scanf("%d", &student[i]);
 
        //if(fabs(student[i]))
    }
    for(i=0; i<n_student; i++){
        presence[i]=0;
    }
    /*
    ordenaVetor(student, n_student);
    for(i=0; i<n_student; i++){
        while(student[i]<0){
            aux++;
        }
        if(aux>=min_presence){
            printf("SIM\n");
        }
        else {
            printf("NAO\n");
            if(student[i]>0){
                printf("%d\n", student[i]);
            }
        }
    }
    */
   for(i=0; i<n_student; i++){
        if(student[i]<=0){
            presence[i]=i+1;
            aux++;
        }
   }
   if(aux >= min_presence){
        printf("NAO\n");
        for(k=n_student-1; k>=0; k--){
            printf("%d\n", presence[k]);
        }
   }
   else printf("SIM\n");
    
 
    return 0;
}