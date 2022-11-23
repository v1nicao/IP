#include <stdio.h>
 
int main(){
    int num, quarto, temp1, temp2, temp3, ctrl;
    //int resul;
 
    scanf("%d", &num);
 
    temp1 = num/100;
    temp2 = (num%100)/10;
    temp3 = num%10;
 
    quarto = temp1 + (temp2*3) + (temp3*5);
    //ctrl = quarto%7;
 
    //resul = 
    printf("O NOVO NUMERO E = %d%d\n", num, quarto%7);
 
    return 0;
}