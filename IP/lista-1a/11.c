/*este codigo simples ira inverter o numero digitado
*/
#include <stdio.h>
 
int main(){
    int num, temp1, temp2, temp3;
 
    scanf("%d", &num);
 
    temp1 = num/100;
    temp2 = num/10;
    temp3 = num%10;
 
    printf("%d%d%d\n", temp3, temp2%10, temp1);
 
    return 0;
}