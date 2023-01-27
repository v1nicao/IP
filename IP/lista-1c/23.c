#include <stdio.h>
 
int main() {
 
    int num = 0, i, soma = 0;
 
    scanf("%d", &num);
 
    printf("%d = ", num);
 
    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            soma += i;
 
            if(i == 1) printf("%d", i);
            
            else printf(" + %d", i);
        }
    }
    if(soma == num) printf(" = %d (NUMERO PERFEITO)\n", soma);
 
    else printf(" = %d (NUMERO NAO E PERFEITO)\n", soma);
 
    return 0;
}