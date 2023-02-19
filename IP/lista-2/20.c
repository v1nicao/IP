#include <stdio.h>
#include <math.h>
 
int main(){
    int n_test, i, j, aux;
    double A[3], B[3];
    double BA, d, max_coorde = 0;
 
    scanf("%d", &n_test);
 
    for(i=0; i<3; i++){
        scanf("%lf", &A[i]);
    }
    n_test = n_test - 1;
 
    while(n_test--){
        for(j=0; j<3; j++){
            scanf("%lf", &B[j]);
        }
        
        for(aux=0; aux<3; aux++){
            BA = A[aux]-B[aux];
            if(fabs(BA) > max_coorde){
                max_coorde = fabs(BA);
            }
        }
        printf("%.2lf\n", max_coorde);
        max_coorde = 0;
        for(i=0; i<3; i++){
            A[i]=B[i];
        }
    }
 
    return 0;
}