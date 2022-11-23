#include <stdio.h>

int main(void){

    unsigned int num; //numero positivo
    int dez_mil, mil, cen, dez, uni;

    scanf("%d", &num);

    //primeiro caso de teste de se o numero lido ultrapasse o valor limite de 5 digitos
    if(num > 99999){
        printf("NUMERO INVALIDO\n");
    } else if(num > 9999){
        dez_mil = (num - num%10000)/10000;
        mil = (num - num%1000)/1000 - dez_mil*10;
        cen = (num - num%100)/100 - (dez_mil*100 + mil*10);
        dez = (num - num%10)/10 - (dez_mil*1000 + mil*100 + cen*10);
        uni = num - (dez_mil*10000 + mil*1000 + cen*100 + dez*10);

        if(uni == dez_mil && dez == mil) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");

    } else if(num > 999){
        mil = (num - num%1000)/1000;
        cen = (num - num%100)/100 - mil*10;
        dez = (num - num%10)/10 - (mil*100 - cen*10);
        uni = num - (mil*1000 + cen*100 + dez*10);

        if(uni == mil && dez == cen) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");

    } else if(num > 99){
        cen = (num - num%100)/100;
        dez = (num - num%10)/10 - cen*10;
        uni = num - (cen*100 + dez*10);

        if(uni == cen) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");

    } else if(num > 9){
        dez = (num - num%10)/10;
        uni = num - dez*10;
        
        if(uni == dez) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");

    } else printf("PALINDROMO\n");  //todo numero unitario e palidromo

    return 0;
}