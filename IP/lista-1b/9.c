#include <stdio.h>

int main(void){
    //valores de n, suas casa de milhares, cententas, dezenas, unidades, resto e quantidade da ordem
    int num, mil, cen, dez, uni, aux, qtd_ordem;

    scanf("%d", &num);

    if(num>9999 || num <=0){
        printf("Numero invalido!\n");
        return 0;
    } else {
        mil = num/1000;
        aux = num%1000;
        cen = aux/100;
        aux = aux%100;
        dez = aux/10;
        uni = aux%10;

        //descobrir a ordem do numero
        if(mil != 0){
            qtd_ordem = 4;
            printf("(quarta ordem) %d = ", num);
            if(mil > 1){
                printf("%d unidades de milhar ", mil);
            } else {
                printf("%d unidade de milhar ", mil);
            }
        } if(cen != 0){
            if(qtd_ordem == 0){
                qtd_ordem = 3;
                printf("(terceira ordem) %d = ", num);
            } else{
                printf("+ ");
            } if(cen > 1){
                printf("%d centenas ", cen);
            } else{
                printf("%d centena ", cen);
            }
        } if(dez != 0){
            if(qtd_ordem == 0){
                qtd_ordem = 2;
                printf("(segunda ordem) %d = ", num);
            } else{
                printf("+ ");
            } if(dez > 1){
                printf("%d dezenas ", dez);
            } else{
                printf("%d dezena ", dez);
            }
        } if(uni != 0){
            if(qtd_ordem == 0){
                qtd_ordem = 1;
                printf("(primeira ordem) %d = ", num);
            } else{
                printf("+ ");
            } if(uni > 1){
                printf("%d unidades ", uni);
            } else{
                printf("%d unidade ", uni);
            }

        }
        printf("= ");
        switch(qtd_ordem){
            case 4:
                printf("%d ", mil*1000);
                if (cen!=0){
                    printf("+ %d", cen*100);
                }
                if(dez!=0){
                    printf(" + %d", dez*10);
                }
                if( uni!=0){
                    printf(" + %d", uni);
                }
                printf("\n");
                break;
	        case 3:	
                printf("%d ", cen*100);
                if( dez!=0){
                    printf("+ %d", dez*10);
                }
                if( uni!=0){
                    printf(" + %d", uni);
                }
                printf("\n");
                break;
	        case 2:
                printf("%d ", dez*10);
                if( uni!=0){
                    printf("+ %d", uni);
                }
                printf("\n");
                break;
	        case 1:
                printf (" %d\n", uni);
                    
	    }
    }


    return 0;
}