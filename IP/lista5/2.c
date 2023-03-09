#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Feira {
  char nome[50];
  double price;
};
struct Pedidos {
  char nome[50];
  int quanti;
};

typedef struct Feira market;
typedef struct Pedidos order;

int main() {

  int N /* Numero de idas */, M /* quantidade de produtos */, P /* produtos */;
  market *itens;
  order *itens2;

  int i, j, k;
  double cost;

  scanf("%d", &N);

  for (i = 0; i < N; i++) {

    scanf("%d", &M);
    itens = malloc(M * sizeof(market));
    for (j = 0; j < M; j++) {

      scanf("%*c%s %lf", &itens[j].nome, &itens[j].price);
      // scanf("%f", itens[j].price);
    }
    scanf("%d", &P);
    itens2 = malloc(P * sizeof(market));
    for (j = 0; j < P; j++) {

      scanf("%*c%s %d", &itens2[j].nome, &itens2[j].quanti);
      // scanf("%d", itens2[j].quantidade);
    }

    for (j = 0; j < P; j++) {
      for (k = 0; k < M; k++) {

        if (strcmp(itens2[j].nome, itens[k].nome) == 0) {
          cost += itens2[j].quanti * itens[k].price;
        }
      }
    }
    
    printf("R$ %.2lf\n", cost);
    cost = 0;
    free(itens);
    free(itens2);
  }
  return 0;
}