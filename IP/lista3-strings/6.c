//codigo feito em aula com o professor
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
short int palindromo(char string[]){    //pode ser usado com char *string
    //int i, j=strlen(string)-1;
    int i, j;
 
    for(i=0,j=strlen(string)-1; i<=j; i++,j--){
        if(string[i] != string[j]) return (0);
    }
    return (1);
}
 
int main(){
    char word[201], inv[200];
    int i, cont;
 
    //objetivo: ler um certa quantidade de palavras até encontrar um end of file (EOF)
    while(scanf("%s", word) != EOF){
        //getchar();
        // for(i=strlen(word)-1; i>=0; i++){
        //     inv[cont++] = word[i];
        // }
        if(palindromo(word)) printf("sim\n");
 
        else printf("nao\n");
    }
 
 
 
    return 0;
}