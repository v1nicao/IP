#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char* new_strcat(char *s1, char *s2, int n) {
    int i;
    char *str;
    char *buffer_s1 = malloc(strlen(s1) + strlen(s2) + 1);
    if (buffer_s1 == NULL) {
        printf("NAO HOUVE MEMORIA PARA A CONCATENACAO\n");
        exit(1);
    }
    strcpy(buffer_s1, s1);
    strcat(buffer_s1, s2);
    str = buffer_s1;
    return str;
}
 
int main() {
    int qtd_test, i, j;
    char str1[200], str2[200];
    char *string[100];
 
    scanf("%d", &qtd_test);
    getchar();
 
    for (i = 0; i < qtd_test; i++) {
        scanf("%[^\n]", str1);
        getchar();
        scanf("%[^\n]", str2);
        getchar();
        string[i] = new_strcat(str1, str2, qtd_test);
    }
 
    for (i = 0; i < qtd_test; i++) {
        printf("%s\n", string[i]);
        free(string[i]);
    }
 
    return 0;
}