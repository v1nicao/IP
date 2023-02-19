#include <stdio.h>
 
void imprime_diagonal(int n, int mat[n][n]){
    int i, k=n-1;
    for(i = n-1; i >= 0; i--) {
        printf("%d ", mat[i][k--]);
    }
     
}
void imprime_diagonal_segundaria(int n, int mat[n][n]){
    int i, aux=0;
    for(i = n-1; i >= 0; i--) {
        printf("%d ", mat[i][aux++]);
    }
     
}
 
 
int main(){
    int qtd_mat, dim, i, j, k, aux=0;
 
    scanf("%d", &qtd_mat);
 
    for(i=0; i<qtd_mat; i++){
        scanf("%d", &dim);
        int mat[dim][dim];
        for(j=0; j<dim; j++){
            for(k=0; k<dim; k++){
                scanf("%d", &mat[j][k]);
            }
        }
        imprime_diagonal(dim, mat);
        printf("\n");
        imprime_diagonal_segundaria(dim, mat);
        printf("\n");
    }
 
 
 
    return 0;
}