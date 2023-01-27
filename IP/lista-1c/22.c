#include <stdio.h>
 
int main() {
 
    int num, fator = 1, aux = 0, contador = 1, i, j;
 
    scanf("%d", &num);
 
    aux = num;
 
    for(i = 0; i < num; i++) {
 
        printf("%d*%d*%d = ", contador, contador, contador);
 
        for(j = aux - 1; j < num; j++) {
            printf("%d", fator);
            fator += 2;
 
            if(j != num - 1) {
                printf("+");
            }
 
        }
        printf("\n");
 
        contador++;
        aux--;
    }
 
    return 0;
}