#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int pessoas;
    int cons;
    double c_medio;
}infr;

infr lugares[1000000];

int comp(const void* p1, const void* p2){
    infr* i = (infr*)p1;
    infr* j = (infr*)p2;
    
    if(fabs(i->c_medio > j->c_medio)) return 1;
    
    else {
        if(fabs(i->c_medio < j->c_medio)) return -1;
        else return 0;
    }
}

int main(){
    int n, c, num=0, tp=0, tc=0, deu=0;;
    double aux=0, out=0;

    while(scanf("%d", &n) && n!=0){
        tp = tc = 0;
        for(c=0; c<n; c++){
            scanf("%d %d", &lugares[c].pessoas, &lugares[c].cons);
            tp += lugares[c].pessoas;
            tc += lugares[c].cons;

            lugares[c].c_medio = (double)lugares[c].cons / lugares[c].pessoas; 
        }
        qsort(lugares, n, sizeof(infr), comp);
        num++;
        if(num>1) printf("\n");

        printf("Cidade# %d:\n", num);

        for(c=0; c<n; c++){
            out = lugares[c].pessoas;
            deu = 0;

            while(c+1 < n && deu == 0){
                if(floor(lugares[c].c_medio) == floor(lugares[c+1].c_medio)){
                    out += lugares[c+1].pessoas;
                    c++;
                }
                else deu = 1;
            }
            printf("%.0lf-%.0lf", out, floor(lugares[c].c_medio));
            if(c+1 < n) printf(" ");
        }
        printf("\n");
        aux = (((double)tc/tp)*100)/100;
        printf("Consumo medio: %.2lf m3.\n", aux);

    }
    return 0;
}