#include <stdio.h>
#include <math.h>

int main(){
    double raiz = 1, n, raK = 0, aux = 0, miss = 0, erro;

    scanf("%lf", &n);
    scanf("%lf", &erro);

    do{
        raK = (raiz+(n/raiz))/2;
        miss = n-(pow(raK,2));
        printf("r: %.9lf, erro: %.9lf\n", raK, fabs(miss));
        aux = miss;
        miss = 0;
        raiz = raK;
        raK = 0;

    } while (fabs(aux) > erro);


    return 0;
}