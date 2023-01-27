#include <stdio.h>

int main(){
    int i, j, cont, cont1;
    double mat[2][2];
    //double copy_mat[2][2];
    //double resul_mat[2][2];
    double temp[2][2];

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%lf", &mat[i][j]);
        }
    }
    for(cont=0; cont<2; cont++){
        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                temp[cont][i] += mat[cont][j] * mat[i][cont];
            }
        }
    }

    for(i = 0; i <2; i++){
        for(j=0;j<2;j++){
            printf("%.3lf ",temp[i][j]);
        }
        printf("\n");
    }


    return 0;
}