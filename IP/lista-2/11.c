#include <stdio.h>
 
int main(){
    int num, i, j, big=0, small=100000;
 
    scanf("%d", &num);
 
    int vetor[5000];
    for(i=1; i<=num; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i]>= big){
            big = vetor[i];
        }
        printf("%d ", vetor[i]);
    } printf("\n");
    for(i=num; i>0; i--){
        if(vetor [i]<= small){
            small = vetor[i];
        }
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("%d\n%d\n", big, small);
    
    return 0;
}