    #include <stdio.h>
    #include <math.h>
     
    int main(){
        double distance, A[3], B[3];
        int i, j, n_point, aux, aux2;
     
        scanf("%d", &n_point);
     
        for(i=0; i<3; i++){
            scanf("%lf", &A[i]);
        }
        for(j=0; j<n_point-1; j++){
            for(aux=0; aux<3; aux++){
                scanf("%lf", &B[aux]);
            }
            for(aux2=0; aux2<3; aux2++){
                distance += pow((A[aux2] - B[aux2]), 2);
            }
            distance = sqrt(distance);
            printf("%.2lf\n", distance);
            distance = 0;
     
            for(i=0; i<3; i++){
                A[i] = B[i];
            }
        }
     
     
        return 0;
    }