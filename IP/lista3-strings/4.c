#include <stdio.h>
#include <string.h>

int main(){
    int casos_tests, i;
    char palavra_digitada[5];

    scanf("%d", &casos_tests);

    while(casos_tests--){
        scanf("%s", palavra_digitada);
        if(strlen(palavra_digitada)==3){

            if(palavra_digitada[0] == 111 && palavra_digitada[1] == 110 || palavra_digitada[0] == 111 && palavra_digitada[2] == 101 || palavra_digitada[1] == 110 && palavra_digitada[2] == 101){
                printf("1\n");
            }
            else if(palavra_digitada[0] == 116 && palavra_digitada[1] == 119 || palavra_digitada[0] == 116 && palavra_digitada[2] == 111 || palavra_digitada[1] == 119 && palavra_digitada[2] == 111){
                printf("2\n");
            }
        }
        else printf("3\n");
        ///casos_tests--;
    }

    return 0;
}