//este codigo foi feito em aula junto com o professor
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){
    char string[61105];
    char *atual=string;
    int n_test, start, end, deslocamento=0;
    int i;
 
    scanf("%d", &n_test);
 
    while(n_test--){
        scanf("%d %d", &start, &end);
        for(i=start; i<=end; i++){
            deslocamento=sprintf(atual, "%d", i);
            atual = atual+deslocamento;
        }
        printf("%s", string);
        //atual--;
        for(atual--; atual!=string-1; atual--){
            printf("%c", *atual);
        }
        atual++;
        printf("\n");
    }
 
 
 
    return 0;
}
