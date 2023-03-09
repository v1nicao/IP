#include <stdio.h>
#include <stdlib.h>
 
typedef struct interacao{
    int num_likes;
    int num_rt;
    int num_comment;
}twitter;
 
//definir uma matriz de interacao entre usuarios com tam maximo de 1000
twitter *matriz[1000][1000];
 
int main(){
    int i, j, dimensao;
    int index, index1, qtd_test;
    int sum_likes=0, sum_rt=0, sum_comment=0;
    //int matriz[1000][1000];
 
    //dimensao da matriz atual
    scanf("%d", &dimensao);
    //passo para zerar a matriz (NULL)
    for(i=0; i<dimensao; i++){
        for(j=0; j<dimensao; j++){
            matriz[i][j] = NULL;
        }
    }
    scanf("%d", &qtd_test);
    while(qtd_test--){
        //ler n, o numeros de pares nao nulos da matriz
        scanf("%d %d", &index, &index1);
        matriz[index][index1]=(twitter*)malloc(sizeof(twitter));
        matriz[index][index1] != NULL ? : exit(1);
        scanf("%d%d%d", &matriz[index][index1]->num_likes, &matriz[index][index1]->num_rt, &matriz[index][index1]->num_comment);
    }
        for(i=0; i<dimensao; i++){
            for(j=0; j<dimensao; j++){
                if(matriz[i][j]!=NULL){
                    sum_likes += matriz[i][j]->num_likes;
                    sum_rt += matriz[i][j]->num_rt;
                    sum_comment += matriz[i][j]->num_comment;
                }
            }
            if(sum_likes != 0 || sum_rt != 0 || sum_comment != 0){
                printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, sum_likes, sum_rt, sum_comment);
            }
                sum_likes=0;
                sum_rt=0;
                sum_comment=0;
            free(matriz[i][j]);
        }
 
        //liberar as structs alocadas
    
    return 0;
}