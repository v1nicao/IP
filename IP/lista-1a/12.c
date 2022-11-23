/*este algoritimo le um valor dado em dinheiro e conta quantas notas são tiradas
do dinheiro total
*/
#include <stdio.h>
 
int main(){
    //valor em dinheiro, notas: de cem, de cinquenta, de dez e moedas
    int num, cem, cin, dez, one;
 
    scanf("%d", &num);
 
    //calculo do dinheiro
    cem = num/100;
    //com o valor calculado das notas de cem, retira elas para fazer a proxima contagem
    num-=cem*100;
    cin = num/50;
    num-=cin*50;
    dez = num/10;
    one = num%10;
 
    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", cem, cin, dez, one);
 
 
    return 0;
}