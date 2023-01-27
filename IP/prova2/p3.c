#include <stdio.h>
 
void troca(double *x, double *y){
    double aux;
    aux =*y;// guarde em aux o valor do double cujo endereco esta em y
    *y=*x; //guarde no double apontado por y o valor que esta na variavel double apontado por x
    *x=aux;//guarde no double apontado por x o valor da variavel double aux
}
 
 
int main(){
    int i;
    double a, b, c, d;
 
    while(scanf("%d", &i)!=EOF){
    if(a>b){
    troca(&a,&b);
    }
    if(a>c){
        troca(&a,&c);
    }
    if(a>d){
        troca(&a,&d);
    }
    //Coloque o segundo menor elemento em b 
    if(b>c){
        troca(&b,&c);
    }
    if(b>d){
        troca(&b,&d);
    }
    //Coloque o terceiro menor elemento em c
    if(c>d){
        troca(&c,&d);
    }   
        if(i==1){
        printf("%.2lf %.2lf %.2lf %.2lf\n", a, b, c, d);
        }
        if(i==2){
        printf("%.2lf %.2lf %.2lf %.2lf\n", a, b, c, d);
        }
        if(i==3){
        printf("%.2lf %.2lf %.2lf %.2lf\n", a, b, c, d);
        }
    }
 
 
 
 
    return 0;
}