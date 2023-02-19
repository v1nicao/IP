    #include <stdio.h>
 
    int main(){
        int i, tam_vet, n_elementos[10000], big = 0, position = 0, j;
 
        scanf("%d", &tam_vet);
        while (1){
            //scanf("%d", &tam_vet);
            if(tam_vet < 1 || tam_vet > 10000) break;
            else {
                for(i=0; i<tam_vet; i++){
                    scanf("%d", &n_elementos[i]);
                }
                for(j=0; j<tam_vet; j++){
                    if(n_elementos[j] > big){
                        big = n_elementos[j];
                        position = j;
                    }
                }
                printf("%d %d\n", position, big);
                
                position=0;
                big=0;
            }
            scanf("%d", &tam_vet);
            
            //else break;
        }
    
        return 0;
    }