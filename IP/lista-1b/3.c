/* este codigo ira verificar se um numero digitado eh divisivel
por 3 e 5 ao mesmo tempo */
#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num%3 == 0 && num%5 == 0){
        printf("O NUMERO E DIVISIVEL\n");
    } else {
        printf("O NUMERO NAO E DIVISIVEL\n");
    }


    return 0;
}