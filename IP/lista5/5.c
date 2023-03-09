#include <stdio.h>

struct universidade{
    int co;
    float cr;
    char n[100];    
};
struct aluno{
    char nome[500];
    int co, cre;

};
typedef struct universidade curso;
typedef struct aluno dados;


int main(void) {
    curso a[30];
    dados b[1000];
    int c1, c2, n, m;

    scanf("%d\n", &n);

    for(c1=0; c1<n; c1++) {
        scanf("%d%f\n", &a[c1].co, &a[c1].cr);
        scanf("%[^\n]", a[c1].n);
    }
    scanf("%d\n", &m);
    
    for(c1=0; c1<m; c1++) {
        scanf("%[^\n]", b[c1].nome);
        scanf("%d", &b[c1].co);
        scanf("%d%*c", &b[c1].cre);
    }
    
    for(c1=0; c1<m; c1++) {
        for(c2=0; c2<n; c2++) {
            if(b[c1].co == a[c2].co) {
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", b[c1].nome, a[c2].n, b[c1].cre, a[c2].cr,  b[c1].cre*a[c2].cr);
            }
        }
    }




    return 0;
}