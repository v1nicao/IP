#include <stdio.h>
#include <string.h>
 
int main() {
    int n = 0, i, k = 0, aux = 0;
    char criptografia[1001];
 
    scanf("%d\n", &n);
 
    while (n) {
 
        gets(criptografia);
 
        char novaString[strlen(criptografia)];
 
        for(i = 0; i < strlen(criptografia); i++) {
            if(criptografia[i] >= 65 && criptografia[i] <= 90 || criptografia[i] >= 97 && criptografia[i] <= 122) criptografia[i] += 3;
        }
 
        for(i = strlen(criptografia) - 1; i >= 0; i--) {
            novaString[aux++] = criptografia[i];
        }
 
        for(i = (aux/2); i < strlen(novaString) ; i++) {
            novaString[i]--;
        }
 
        for(i = 0; i < aux; i++) {
            printf("%c", novaString[i]);
        }
        printf("\n");
 
        aux = 0;
        n--;
    }
 
    return 0;
}