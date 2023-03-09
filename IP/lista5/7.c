#include <stdio.h>

struct universidade{
    int co;
    float cr;
    char n[100];    
};
struct aluno{
    char *name;
    int co, cre;

};
typedef struct universidade curso;
typedef struct aluno dados;


int main(void) {
    curso a[30];
    dados b[1000];
    char buffer[1001];
    //char name_student[1000];
    int c1, c2, n, m;

    scanf("%d\n", &n);
    //buffer = (char**)malloc(sizeof(char*)*(n));

    for(c1=0; c1<n; c1++) {
        scanf("%d%f\n", &a[c1].co, &a[c1].cr);
        scanf("%[^\n]", a[c1].n);
    }
    scanf("%d\n", &m);
    
    for(c1=0; c1<m; c1++) {
        //getchar();
        scanf("%[^\n]", buffer);
        b[c1].name = (char*)malloc(sizeof(char)*(strlen(buffer)+1));
        scanf("%d", &b[c1].co);
        scanf("%d%*c", &b[c1].cre);

        //strcpy(buffer[c1], name_student);
        strcpy(b[c1].name, buffer);
    }
    
    for(c1=0; c1<m; c1++) {
        for(c2=0; c2<n; c2++) {
            if(b[c1].co == a[c2].co) {
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", b[c1].name, a[c2].n, b[c1].cre, a[c2].cr,  b[c1].cre*a[c2].cr);
            }
        }
    }




    return 0;
}