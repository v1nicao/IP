#include <stdio.h>
 
int main(){
    int tam_max, i, j, conta_freq=0, big=0, repeat=0;
 
    //scanf("%d", &tam_max);
 
    while (1){
        scanf("%d", &tam_max);
        if(tam_max == 0) break;
        else {
            int vetor[tam_max];
 
            for(i=0; i<tam_max; i++){
                scanf("%d", &vetor[i]);
                if(vetor[i]>= big){
                    big = vetor[i];
                }
            }
 
            for(j=0; j<=big; j++){
                for(i=0; i<tam_max; i++){
                    if(j == vetor[i]){
                        conta_freq++;
                    }
                }
                printf("(%d) %d\n", j, conta_freq);
            }
        }
        conta_freq=0;
        big=0;    
    }
 
 
    return 0;
}