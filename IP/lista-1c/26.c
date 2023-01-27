#include <stdio.h>
 
int divisores(int Numdividido){
 
    int j, soma = 0, k;
 
    for(k = 1; k < Numdividido; k++) {
        if(Numdividido % k == 0) {
            soma += k;
        }
    }
 
    return soma;
}
 
 
int main() {
 
    int num = 0, i, soma = 0, k, l, valor = 0;
 
    scanf("%d", &num);
 
    if(num < 9) {
        for(i = 1; num > 0; i++) {
            soma = divisores(i);
 
            if(divisores(soma) == i) {
                if(soma != i && i != valor) {
                    printf("(%d,%d)\n", i, soma);
                    valor = soma;
                    num--;
                }
                i++;
            }
        }
 
    }
    else {
        return (0);
    }
 
    return 0;
}