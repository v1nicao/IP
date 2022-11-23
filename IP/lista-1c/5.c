#include <stdio.h>

int main(){
    int a1, r, n, an, soma;

    scanf("%d %d %d", &a1, &r, &n);

    an = a1+(n-1)*r;

    soma = ((a1+an)*n)/2;

    printf("%d\n", soma);

    return 0;
}