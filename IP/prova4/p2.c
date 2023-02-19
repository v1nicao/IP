//essa questao esta errada na comparação para identifficar se a matriz é identidade
//precisaria nao so comparar se a diagonal principal eh um, mas tambem se o restante eh igual a zero
#include <stdio.h>
 
int main (){
    int dim, qtd_mat, i, j, k, aux=0;
    int diagonal[10];
 
    scanf("%d", &qtd_mat);
 
    for(i=0; i<qtd_mat; i++){
        scanf("%d", &dim);
        int mat[dim][dim];
 
        for(j=0; j<dim; j++){
            for(k=0; k<dim; k++){
                scanf("%d", &mat[j][k]);
            }
        }
        for(j=0; j<dim; j++){
            for(k=0; k<dim; k++){
                if(mat[j][k]==1) diagonal[j] = mat[j][k];
                //else printf("errei a logica\n");
            }
        }
        for(j=0; j<dim; j++){
            if(diagonal[j]==1){
                printf("Identidade\n");
                break;
            } else {
                printf("Nao identidade\n");
                break;
            }
        }
        
    }
 
    return 0;
}