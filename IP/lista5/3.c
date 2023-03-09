#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Painel {

  char country[30];
  char tradution[50];
};

typedef struct Painel painel;

int main(void) {

  char word[30];
  int i;

  painel V[25] = {"brasil", "Feliz Natal!",
                  "alemanha", "Frohliche Weihnachten!",
                  "austria", "Frohe Weihnacht!",
                  "coreia", "Chuk Sung Tan!",
                  "espanha", "Feliz Navidad!",
                  "grecia", "Kala Christougena!",
                  "estados-unidos", "Merry Christmas!",
                  "inglaterra", "Merry Christmas!",
                  "australia", "Merry Christmas!",
                  "portugal", "Feliz Natal!",
                  "suecia", "God Jul!",
                  "turquia", "Mutlu Noeller",
                  "argentina", "Feliz Navidad!",
                  "chile", "Feliz Navidad!",
                  "mexico", "Feliz Navidad!",
                  "antartida", "Merry Christmas!",
                  "canada", "Merry Christmas!",
                  "irlanda", "Nollaig Shona Dhuit!",
                  "belgica", "Zalig Kerstfeest!",
                  "italia", "Buon Natale!",
                  "libia", "Buon Natale!",
                  "siria", "Milad Mubarak!",
                  "marrocos", "Milad Mubarak!",
                  "japao", "Merii Kurisumasu!"};

  while (scanf("%s", word) != EOF) {

    for (i = 0; i < 24; i++) {

      if (strcmp(word, V[i].country) == 0) {
        printf("%s\n", V[i].tradution);
        break;
      }
      else if (i == 23) {
        printf("-- NOT FOUND --\n");
        break;
      }
    }
  }

  return 0;
}