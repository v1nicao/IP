/*objetivo e criar um codigo para ler uma quantidade de times e o
numero de finais possiveis*/
#include <stdio.h>

int main(){
    //leitura da qtd de times, var de times e um contador
    int n, Ztime, Ytime, i = 0;
    
    scanf("%d", &n);

    if(n>1){
        for(Ztime=1; Ztime<=n; Ztime++){
            for(Ytime=1; Ytime<=n; Ytime++){
                if(Ztime<Ytime){
                    i++;
                    printf("Final %d: Time%d X Time%d\n", i, Ztime, Ytime);
                    
                }
            }
        }
    } else printf("Campeonato invalido!\n");


    return 0;
}