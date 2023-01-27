#include <stdio.h>
#include <math.h>
 
double FATO (int n){
    double fat = 1;
    int i;
 
    for(i=1; i<=n; i++){
        fat *= i;
    }
 
    return fat;
}
 
int main(){
    double x, cos=0, Fat=0;
    int j, n=0;
 
    scanf("%lf%d", &x, &n);
 
    for(j=0; j<=n; j++){
        cos += (pow((-1),j)*pow(x,(2*j)))/FATO(2*j);
    }
    printf("cos(%.2lf) = %.6lf\n", x, cos);
 
 
    return 0;
}