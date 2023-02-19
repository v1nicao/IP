#include <stdio.h>
 
int main(){
    int num, i, j;
 
    scanf("%d", &num);
 
    int vetor[5000];
    for(i=1; i<=num; i++){
        scanf("%d", &vetor[i]);
        
    }
    for(i=num; i>0; i--){
        printf("%d ", vetor[i]);
    }
    
    printf("\n");
 
    return 0;
}