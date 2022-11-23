#include <stdio.h>

int main(){
    int cod, hr;
    double valor, cal;

    while(1){
        scanf("%d %d %lf", &cod, &hr, &valor);
        //getchar();
        
        cal = hr*valor;
        
        if(cod == 0 && hr == 0 && valor == 0){
            break;
        }

        printf("%d %.2lf\n", cod, cal);
        
        
    }



    return 0;
}