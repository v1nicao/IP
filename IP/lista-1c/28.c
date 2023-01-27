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
    double e, x;
    int i, n;
 
    scanf("%lf%d", &x, &n);
 
    for(i=0; i<=n; i++){
        e += (pow(x,i))/FATO(i);
    }
    printf("e^%.2lf = %.6lf\n", x, e);
 
    return 0;
}