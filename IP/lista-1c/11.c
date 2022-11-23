#include <stdio.h>

int main(){
    int atual, num1, tt = 0, anterior = -100000, tamanho, loop, max = 0;

    scanf("%d", &tamanho);

    for(loop=0; loop<tamanho;loop++){
        
        scanf("%d", &num1);
        if(loop == 0){
            anterior = num1;
            continue;
        }
        if(num1 > anterior){
            tt++;
            if(max < tt){
                max = tt;
                
            }
        } else tt = 0;
        anterior = num1;
    }

    printf("O comprimento do segmento crescente maximo e: %d\n", max);

    return 0;
}