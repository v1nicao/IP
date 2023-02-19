#include <stdio.h>
 
int main(){
    int sizeVet, qtd_num, num, i, j;
 
    scanf("%d", &sizeVet);
    int guard[100000];
 
    for(i=0; i<sizeVet; i++){
 
        scanf("%d", &guard[i]);
 
    }
    
    scanf("%d", &qtd_num);
    
    while(qtd_num--){
        int num;
        scanf("%d", &num);
        int cont;
        for(cont = 0; cont<sizeVet; cont++){
            if(num == guard[cont]) {
                printf("ACHEI\n");
                break;
            }
        }
        if(cont == sizeVet) printf("NAO ACHEI\n");
 
    }
 
 
    return 0;
}