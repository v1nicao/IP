    /*este simples codigo ira fazer o calculo do delta na famosa
    equacao de baskhara*/
    #include <stdio.h>
     
    int main(){
        double a, b, c, delta;
        
        //leitura
        scanf("%lf %lf %lf", &a, &b, &c);
     
        //calculo do delta
        delta = (b*b) - (4*a*c);
 
     
        printf("O VALOR DE DELTA E = %.2lf\n", delta);
        
 
        return 0;
    }