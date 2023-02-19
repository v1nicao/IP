
#include <stdio.h>
 
int main() {
 
    int N = 0, i, j, cont = 0, unicos = 0, aux = 0;
 
    scanf("%d", &N);
 
    int vet[N];
 
    for(i = 0; i < N; i++) {
        scanf("%d", &vet[i]);
    }
 
    for(i = 0; i < N; i++) {
        for(j = i + 1; j < N; j++) {
            
            if(vet[i] != vet[j]) cont = 1;
            
            else if(vet[i] == vet[j]) {
                
                cont = 0;
                aux++;
                break;
            }
        }
        unicos += cont;
    }
 
    printf("%d", (unicos - aux));
 
    return 0;
}