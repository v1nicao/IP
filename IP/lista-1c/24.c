#include <stdio.h>
#define true 1
 
int main() {
    int num = 0, i, resul = 0;
    double sequence = 0, first_sequence = 0, aux = 0;
 
    scanf("%d\n", &num);
 
    while (num != 0) {
        scanf("%lf ", &first_sequence);
 
        for(i = 1; i < num; i++) {
            aux++;
            scanf("%lf", &sequence);
 
            if(first_sequence < sequence) {
                resul += true;
            }
            first_sequence = sequence;
        }
        if(resul == aux) printf("ORDENADA\n");
        
        else printf("DESORDENADA\n");
        
        aux = 0;
        resul = 0;
 
        scanf("%d\n", &num);
    }
 
    return 0;
}