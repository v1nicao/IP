/*este codigo ira fazer um calculo de quanto o cliente paga
em certas quantias de horas com a charretes*/
#include <stdio.h>

int main(){
    int hr, valor;

    scanf("%d", &hr);

    valor = (((hr-2) * 3) + 20);

    printf("%d\n", valor);


    return 0;
}