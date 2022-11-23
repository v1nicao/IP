#include <stdio.h>

int main(){
    double sala, rea;

    scanf("%lf", &sala);

    if(sala <= 300){
        rea = (sala * 0.5) + sala;
        printf("SALARIO COM REAJUSTE = %.2lf\n", rea);
    } else {
        rea = (sala * 0.3) + sala;
        printf("SALARIO COM REAJUSTE = %.2lf\n", rea);
    }


    return 0;
}