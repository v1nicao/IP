/*este simples codigo ira pegar um numero inteiro simples e 
vai verificar as condicoes necessarias para a substituicao por y

condicoes para o valor de y: 
    *******************
    *    x, se x<1;   *
    *    0, se x = 1; *
    *    x*x, se x>1; *
    *******************
*/
#include <stdio.h>

int main(){
    int x;

    scanf("%d", &x);

    if(x < 1){
        printf("Y = %d\n", x);
    } else if(x == 1){
        printf("Y = 0\n");
    } else if(x > 1){
        printf("Y = %d\n", x*x);
    }


    return 0;
}