#include <stdio.h>
 
int main(void){
    int i, n1, n2, aux = 0, aux2 = 0, loop;
 
    scanf("%d", &loop);
 
    for(i=0; i<loop; i++){
        scanf("%d %d", &n1, &n2);
        
        while (n1>0){
            aux = aux*10 + n1%10;
            n1/=10;
        }
        while (n2>0){
            aux2 = aux2*10 + n2%10;
            n2/=10;
        }
 
        if(aux > aux2) printf("%d\n", aux);
        else printf("%d\n", aux2);
 
        aux = 0;
        aux2 = 0;
 
    }
 
 
 
    return 0;
}