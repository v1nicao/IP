#include <stdio.h>
 
int main() {
    //massa, aceleração, tempo, espaço, trabalho, velocidade
    double m, a, t, s, W, v;
 
    scanf("%lf %lf %lf", &m, &a, &t);
 
    v = a*t;
    W = ((m*1000)*(v*v))/2;
    v = (a*t) * 3.6;
    s = (a*(t*t))/2;
 
 
    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", v, s, W);
 
    return 0;
}