    #include <stdio.h>
     
    int main(void){
        int num, size_vet, big=0, i, cont;
     
        while(scanf("%d", &size_vet)){
            //scanf("%d", &size_vet);
            if(size_vet >= 1){
            int vet[size_vet];
            for(i=0; i<size_vet; i++){
                scanf("%d", &vet[i]);
            }
     
            scanf("%d", &num);
     
            for(cont=0; cont<size_vet; cont++){
                //int min;
                if(num <= vet[cont]){
                    big++;
                }
                //else big=0;
            }
     
            printf("%d\n", big);
            break;
            }
            else scanf("%d", &size_vet);
     
        }
     
     
        return 0;
    }