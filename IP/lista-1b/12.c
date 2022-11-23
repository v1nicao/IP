/*este codigo vai pegar uma sequencia de 8 numeros e transcrever em uma data do calendario
*/
#include <stdio.h>

int main(){
    //unsigned para somente pegar os numeros positivos
    unsigned int dd, mm, aa;

    //fato interessante: ao colocar o 2 antes do "d", a leitura vai ficar limitada somente a dois numeros
    scanf("%2d %2d %d", &dd, &mm, &aa);
    
    //primeira verificacao se esta de acordo com os 8 digitos
    if(aa > 9999 && aa < 1000){
        printf("Data invalida!\n");
    } else {
        switch(mm){
            case 1:
            printf("%d de janeiro de %d\n", dd, aa);
            break;

            case 2:
            if(dd < 30){    //segunda verificacao se esta de acordo com os 8 digitos
                printf("%d de fevereiro de %d\n", dd, aa);
                break;
            } else {
                printf("Data invalida!\n");
                break;
            }

            case 3:
            printf("%d de marco de %d\n", dd, aa);
            break;

            case 4:
            if(dd < 31){
                printf("%d de abril de %d\n", dd, aa);
                break;
            } else {
                printf("Data invalida!\n");
                break;
            }

            case 5:
            printf("%d de maio de %d\n", dd, aa);
            break;

            case 6:
            if(dd < 31){
                printf("%d de junho de %d\n", dd, aa);
                break;
            } else {
                printf("Data invalida!\n");
                break;
            }

            case 7:
            printf("%d de julho de %d\n", dd, aa);
            break;

            case 8:
            printf("%d de agosto de %d\n", dd, aa);
            break;

            case 9:
            if(dd < 31){
                printf("%d de setembro de %d\n", dd, aa);
                break;
            } else {
                printf("Data invalida!\n");
                break;
            }

            case 10:
            printf("%d de outubro de %d\n", dd, aa);
            break;

            case 11:
            if(dd < 31){
                printf("%d de novembro de %d\n", dd, aa);
                break;
            } else {
                printf("Data invalida!\n");
                break;
            }

            case 12:
            printf("%d de dezembro de %d\n", dd, aa);
            break;

            //terceira verificacao se esta de acordo com os 8 digitos
            //caso o mes passe de 12
            default:
            printf("Data invalida!\n");
        }
    }
    
    return 0;
}