    #include <stdio.h>
     
    int main(){
        int n_lin, n_col;
        int i, j;
     
        scanf("%d %d", &n_lin, &n_col);
        int mat[n_lin][n_col];
     
        for(i=0; i<n_lin; i++){
            for(j=0; j<n_col; j++){
                if(i%2==0){
                    if(j%2==0) mat[i][j]=1;
                    else mat[i][j]=0;
                } else {
                    if(j%2!=0) mat[i][j]=1;
                    else mat[i][j]=0;
                } 
     
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
        //printf("\n");
     
     
        return 0;
    }