//codigo feito pelo professor thierson couto, UFG
#include<stdio.h>
#include<string.h>

int pesquisa(char c, char *f){
	int i;
	for(i=0;f[i]!='\0'; i++){
		if(c==f[i]){
			return(i);
		}
	}
	return(-1);	
}


int main(){
	int casos, pos;
	char car;
	char frase[500];
	scanf("%d", &casos);
	getchar();
	while(casos--){
		//ler um caso de teste
		scanf("%c", &car);
		getchar();
		scanf("%[^\n]", frase);
		getchar();
		pos= pesquisa(car, frase);
		if(pos==-1){
			printf("Caractere %c nao encontrado.\n", car);
		}
		else{
			printf("Caractere %c encontrado no indice %d da string.\n",car, pos);
		}
		
	}
	return(0);
}