//este codigo foi feito em sala de aula
#include <stdio.h>

void copy(double X[10][10], double Y[10][10], int N){
    int i, j;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            X[i][j]=Y[i][j];
        }
    }
}
void multi(double X[10][10], double Y[10][10], double Z[10][10], int N){
    int i, j, k;

    //para cada linha de i de X...
    for(i=0; i<N; i++){
        //para cada coluna j de Y...
        for(j=0; j<N; j++){
            //obter o produto Z[i][j]
            Z[i][j] = 0.0;
            for(k=0;k<N;k++){
                Z[i][j]+=X[i][k]*Y[k][j];
            }
        }
    }
}

int main(){
    int dim;    //dimensao da matriz
    int i, j, k, potencia;
    double matriz[10][10], A1[10][10], A2[10][10];  //A sao matrizes copiadas

    scanf("%d", &dim);
    scanf("%d", &potencia);

    for(i=0; i<dim; i++){
        for(j=0; j<dim; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    //obter matriz elevado ao expoente
    //copiar matriz para A1

    copy(A1, matriz, dim);
    for(k=0; j<potencia-1; k++){
        multi(matriz, A1, A2, dim);
        copy(A1, A2, dim);
    }

    //imprimir
    for(i=0; i<dim; i++){
        for(j=0; j<dim; j++){
            printf("%.3lf", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}