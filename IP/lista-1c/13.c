#include <stdio.h>

int main(void){
    int num, i, aux = 0;
    double temp;

    scanf("%d", &num);

    if(num<1){
        printf("Numero invalido!\n");
    } 
    else{

        for(i=1; num>=i; i++){
            temp = num%i;

            if(temp == 0){
                aux++;
            }
            i++;
        }
        if(aux == 2){
            printf("PRIMO\n");
        } else printf("NAO PRIMO\n");
    }

    return 0;
}