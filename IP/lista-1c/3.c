/*este codigo vai calcular uma potencia quadrada de um numero
mas so pegando os pares*/
#include <stdio.h>
#include <math.h>   //biblioteca que inclui o "pow"

int main(){
    int num, pot, i;

    scanf("%d", &num);

    //condicoes para achar o pares
    if(num%2 ==  0){
        //laço de repeticao comecando do dois
        for(i=2; i<=num; i++){
            pot = pow(i,2);
            printf("%d^2 = %d\n", i, pot);
            i++;
        }
    } else{
        for(i=2; i<=num; i++){
            pot = pow(i,2);
            printf("%d^2 = %d\n", i, pot);
            i++;
        }
    }
    /*ao printar o valor calculado, antes de iniciar o próximo laço
    ele adiciona +1 no valor do i, fazendo com o que no próximo laço ao invés
    de começar com i=3 vai iniciar com i=4*/

    return 0;
}