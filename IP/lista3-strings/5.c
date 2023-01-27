#include <stdio.h>
#include <string.h>
 
int main() {
    int n1, n2, i, adicao = 0;
 
    scanf("%d %d", &n1, &n2);
 
    while( n1 != 0 && n2 != 0) {
 
        for(i = 0; i < 1; i++){
            adicao = n1 + n2;
        }
        char soma[1000];
 
        sprintf(soma, "%d", adicao);
 
        for(i = 0; i < strlen(soma); i++) {
            if(soma[i] != '0') printf("%c", soma[i]);
        }
        printf("\n");
 
        scanf("%d", &n1);
        scanf("%d", &n2);
    }
 
    return 0;
}