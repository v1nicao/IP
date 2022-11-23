#include <stdio.h>

int main(void){
    int num, i, aux = 0;
    double temp;

    scanf("%d", &num);

    for(i=2; i<num; i++){
        if(num%i == 0){
            printf("PRIMO\n");
        } else printf("NAO PRIMO\n");
    }


    return 0;
}