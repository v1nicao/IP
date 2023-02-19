#include <stdio.h>
 
int main() {
 
int n_apostadores = 0, sorteio[6], apostador[6], i, j, k, ganho[3], cont = 0, quadra = 0, quina = 0, sena = 0; 
 
 
for(i = 0; i < 6; i++) {
    scanf("%d", &sorteio[i]);
}
 
scanf("%d", &n_apostadores);
 
for(j = 0; j < n_apostadores; j++) {
 
    for(i = 0; i < 6; i++) {
        scanf("%d", &apostador[i]);
    }
 
    for(i = 0; i < 6; i++) {
        for(k = 0; k < 6; k++) {
           if(sorteio[i] == apostador[k]) cont++;
        }
        
    }
 
    if(cont == 4) quadra++;
    if(cont == 5) quina++;
    if(cont == 6) sena++;
    cont = 0;
}
 
if(sena > 0) printf("Houve %d acertador(es) da sena\n", sena);
else printf("Nao houve acertador para sena\n");
 
if(quina > 0) printf("Houve %d acertador(es) da quina\n", quina);
else printf("Nao houve acertador para quina\n");
 
if(quadra > 0) printf("Houve %d acertador(es) da quadra\n", quadra);
else printf("Nao houve acertador para quadra\n");
 
return 0;
 
}