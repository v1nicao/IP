#include <stdio.h>
#include <string.h>

int main(){
    //variaveis
    int loop, i;
    char str1[50], str2[50];    //string 1 e 2 respectivamente

    //quantidade de casos testes
    scanf("%d", &loop);

    while(loop--){
        //leitura das strings
        scanf("%s", str1);
        scanf("%s", str2);
        //printf("%s %s", str1, str2);

        //vai imprimir a primeira letra de cada string
        i=0;
        while(str1[i]!='\0' && str2[i]!='\0'){
            printf("%c%c", str1[i], str2[i]);
            i++;
        }
        //caso a string 1 acabou, printa o restante da string 2
        if(str1[i]=='\0'){
            while(str2[i]!='\0'){
                printf("%c", str2[i]);
                i++;
            }
        } 
        //caso a string 2 acabou, printa o restante da string 1
        else {
            while(str1[i]!='\0'){
                printf("%c", str1[i]);
                i++;
            }
        }
        printf("\n");
    }

    return 0;
}