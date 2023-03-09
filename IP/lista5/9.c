#include <stdio.h>
#include <math.h>

struct distancia{
    double a, b, c, d;
};   
typedef struct distancia vetores;

int main(void){
    int n, c1;
    vetores a[1000];
    double c;
    
    scanf("%d", &n);

    for(c1=0; c1<n; c1++) {
        scanf("%lf%lf%lf%lf", &a[c1].a, &a[c1].b, &a[c1].c, &a[c1].d);
    }

    for(c1=0; c1<n-1; c1++){
        c=sqrt(pow(a[c1].a-a[c1+1].a, 2)+pow(a[c1].b-a[c1+1].b, 2)+pow(a[c1].c-a[c1+1].c, 2)+pow(a[c1].d-a[c1+1].d, 2));
        printf("%.2lf\n", c);
    }

    return 0;
}