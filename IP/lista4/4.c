#include <stdio.h>

int main(){
    //int matriz[10][10];
    int i, j, lin, col;
    int contador=0, aux=0;

    do{
        scanf("%d", &lin);
    } while(lin > 0 || lin < 10);

    //scanf("%d %d", &lin, &col);
    do{
        scanf("%d", &col);
    } while (col > 0 || col < 10);
    
    int matriz[lin][col];
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            scanf("%d", &matriz[i][j]);
            contador++;
        }
        printf("linhas %d:", i+1);
         while(aux < contador) {
            printf("%d", matriz[i][contador]);

            if(aux < contador - 1) printf(",");
            else printf("\n");

            aux++;
        }
        contador = 0;
        aux = 0;

    }
    return 0;
}