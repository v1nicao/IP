#include <stdio.h>

int main(void){
    double num, i, soma = 0;

    scanf("%lf", &num);

    if(num < 1){
        printf("Numero invalido!");
        return 0;
    }

    for(i=1;i<=num;i++){
        soma += 1/i;
    }
    printf("%.6lf\n", soma);

    return 0;
}