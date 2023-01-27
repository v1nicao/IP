    #include <stdio.h>
     
    int main(){
        double mat[2][2];
        double DET1=1, DET2=1;
        int i, j;
     
        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                scanf("%lf", &mat[i][j]);
            }
        }
        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                if(i == j) DET1 *= mat[i][j];
     
                else DET2 *= mat[i][j];
            }
        }
     
        printf("%.2lf\n", DET1 - DET2);
     
        return 0;
    }