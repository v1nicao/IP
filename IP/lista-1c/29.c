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
    double x, sen=0, Fat=0;
    int j, n=0;
 
    scanf("%lf%d", &x, &n);
 
    for(j=0; j<=n; j++){
        sen += (pow((-1),j)*pow(x,(2*j+1)))/FATO(2*j+1);
    }
    printf("seno(%.2lf) = %.6lf\n", x, sen);
 
 
    return 0;
}