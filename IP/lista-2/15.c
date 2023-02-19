#include <stdio.h>
 
//int diference (int vet[])
 
int main() {
    int tam_max, loop, i, j, k, meno_distance = 0, diff, contador = 0, temp;
 
    scanf("%d", &loop);
 
    if(loop <= 10 && loop >= 1) {
        for(i=0; i<loop; i++) {
            scanf("%d", &tam_max);
            int n_num[tam_max];
            for(j=0; j<tam_max; j++) {
                scanf("%d", &n_num[j]);
            }
            for(j=0; j<tam_max-1; j++) {
                for(k=j+1; k<tam_max; k++) {
                    //contador++;
                    if(n_num[j] > n_num[k]) diff = n_num[j] - n_num[k];
 
                    else diff = n_num[k] - n_num[j];
 
                    if(diff > meno_distance) meno_distance = diff;
                }
            }
            for(j=0; j<tam_max; j++) {
                for(k=j+1; k<tam_max; k++) {
                    contador++;
                    if(n_num[j] > n_num[k]) diff = n_num[j] - n_num[k];
                    
                    else diff = n_num[k] - n_num[j];
 
                    if(diff < meno_distance) meno_distance = diff;
                }
            }
            printf("%d %d\n", meno_distance, contador);
            meno_distance=0;
            contador=0;
        }
    }
    return 0;
}