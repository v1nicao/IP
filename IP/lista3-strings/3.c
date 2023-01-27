#include <stdio.h>
#include <string.h>

int contaVogais(char palavra[]) {
    char vogais[] = "aeiouAEIOU";
    int nVogais = 0, i, j;
 
    for (i = 0; palavra[i] != '\0'; i++){ // palavra n posição i até o seu fim"\0", mas isso é o tamanho da string 
        for (j = 0; vogais[j] != '\0'; j++){ // vai armazenar letra por letra e conferir as vogais
            if (vogais[j] == palavra[i]) {
                nVogais++;
                break;
            }
        }
    }
    return nVogais;
}

int contaConsoantes(char palavra[]) {
    char consoantes[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int nconsoantes = 0, i, j;
 
    for (i = 0; palavra[i] != '\0'; i++) {
        for (j = 0; consoantes[j] != '\0'; j++) {
            if (consoantes[j] == palavra[i]) {
                nconsoantes++;
                break;
            }
        }
    }
 
    return nconsoantes;
}
int main(){
    char letra[10000];
    int loop, i;
    int word=0, consoant=0, vogal=0;

    scanf("%d", &loop);

    for(i=0; i<loop; i++){
        scanf("%d", &letra[i]);
        (gets(letra));

        vogal = contaVogais(letra);
        consoant = contaConsoantes(letra);
        word = vogal + consoant;

        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", word, vogal, consoant);
    }

    return 0;
}