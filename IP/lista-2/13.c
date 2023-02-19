#include <stdio.h>
 
int main(){
    int tam_vet, num, i, j, temp, contador, aux=1, big_freq;
 
    scanf("%d", &tam_vet);
 
    int vet[tam_vet];
 
    for(i=0; i<tam_vet; i++){
        scanf("%d", &vet[i]);
    }
    for(i=0; i<tam_vet; i++){
        for(j=i+1; j<tam_vet; j++){
            if(vet[j] == vet[i]){
                temp = vet[j];
                contador++;
            }
        }
        if(contador > aux){
            aux = contador+1;
            big_freq = temp;
        }
        contador = 0;
    }
    printf("%d\n%d\n", big_freq, aux);
 
 
    return 0;
}