#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char* prefixo(int *tamanho_vet, const char *String) {
 
    int i, indice = 0;
    char *novaString;
 
    novaString = malloc(*tamanho_vet * sizeof(int));
 
    memset(novaString, '\0', *tamanho_vet);
 
    for(i = 0; i < *tamanho_vet; i++){
        novaString[i] = String[i];
    }
    return novaString;
}
 
 
int main() {
    int n_teste = 0, Tam = 0, i;
    char texto[500], *PREFIXO;
 
    scanf("%d", &n_teste);
 
    while (n_teste)
    {
        for(i = 0; i < 500; i++)
        {
            texto[i] = '\0';
        }
 
        getchar();
        scanf("%d", &Tam);
        getchar();
        scanf("%[^\n]s", texto);
 
        PREFIXO = prefixo(&Tam, texto);
 
        printf("%s\n", PREFIXO);
 
        n_teste--;
        }
 
        free(PREFIXO);
 
 
    return 0;
}