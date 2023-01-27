#include <stdio.h>
 
int main(){
    int num=0, i, j, diago_princi=0, aux=0;
    //int *mat;
 
    scanf("%d", &num);
    int mat[num][num];
 
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            scanf("%d", &mat[i][j]);
 
            //if(mat[i] == mat[j]) diago_princi = mat[i][j];
        }
    }
    for(i=0; i<num; i++){
        printf("%d\n", mat[i][aux++]);
    }
    //printf("%d\n", diago_princi);
 
    return 0;
}