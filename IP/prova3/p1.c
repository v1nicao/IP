#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
void maiusculas(char *word) {
    int i;
    char *aux;
    while(word[i] != '\0') {
        word[i] = toupper(word[i]);
        //printf("%s", word[i]);
        i++;
    }
    //word = '\0';
}
 
int main(){
    //int cont;
    char frase[10000];
 
    while(1){
        scanf("%s", frase);
        //getchar();
        maiusculas(frase);
        printf("%s", frase);
        //printf("\n");
    }
 
    return 0;
}