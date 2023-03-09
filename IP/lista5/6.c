#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int qtd_nome, i;
    char name_person[1000], **buffer=NULL;

    scanf("%d", &qtd_nome);

    buffer = (char**)malloc(sizeof(char*)*(qtd_nome));

    for(i=0; i<qtd_nome; i++){
        getchar();

        scanf("%[^\n]", name_person);
        buffer[i] = (char*)malloc(sizeof(char)*(strlen(name_person)+1));
        if(buffer==0) printf("Erro ao alocar memória\n");
        //getchar();
        strcpy(buffer[i], name_person);

        printf("%s\n", buffer[i]);
    }
    free(buffer);

    return 0;
}