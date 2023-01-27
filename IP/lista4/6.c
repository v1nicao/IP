#include <stdio.h>
#include <math.h>

int main(){
    double mat[2][2];
    double aux_mat[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%lf", &mat[i][j]);
            aux_mat[i][j] = mat[i][j];
        }
    }
    
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            //mat[i][j] = pow(mat[i][j], 2);
            mat[0][0] *= aux_mat[1][1]+aux_mat[2][1];
        }
    }


    return 0;
}