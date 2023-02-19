#include <stdio.h>
 
int main(void){
    int cont, num[5000], valor_n;   
 
    scanf("%d", &valor_n);
 
    for(cont=0; cont<valor_n; cont++){
        scanf("%d", &num[cont]);
    }
    for(cont=0; cont<valor_n; cont++){
        printf("%d ", num[cont]);
    }
    printf("\n");
 
    return 0;
}