#include <stdio.h>

void imprime(int n, int mat[n][n]){
    int i, k=n-1;
    for(i = 0; i < n; i++) {
        printf("%d\n", mat[i][k--]);
    }

}

int main(){
    int i, j, n_mat;

    scanf("%d", &n_mat);

    int matriz[n_mat][n_mat];
    for(i=0; i<n_mat; i++){
        for(j=0; j<n_mat; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    /*
    for(i=0; i<n_mat; i++){
        //int k = n_mat-1;
        for(j=0; j<n_mat-1; j--){
            printf("%d\n", matriz[i][j]);
        }
    }
    */
   imprime(n_mat, matriz);



    return 0;
}