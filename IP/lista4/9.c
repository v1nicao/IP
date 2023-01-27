#include <stdio.h>

int main(){
    int m_lin, n_col, lin, col, cont=1;

    scanf("%d%d", &m_lin, &n_col);
    int mat_xadrez[m_lin][n_col];

    for(lin=0; lin<m_lin; lin++){
        for(col=0; col<n_col; col++){
            if(lin%2==0){
                if(col%2==0) mat_xadrez[lin][col]=0;
                else mat_xadrez[lin][col]=cont++;
            }
            else {
                if(col%2!=0) mat_xadrez[lin][col]=0;
                else mat_xadrez[lin][col]=cont++;
            }
            printf("%d ", mat_xadrez[lin][col]);
        }
        printf("\n");
    }

    return 0;
}