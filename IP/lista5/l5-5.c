#include <stdio.h>

struct universidade {
    int cod_curso;
    double credito;
    char nome_curso[100];
};
struct aluno{
    int cod_curso;
    char name_student[500];
    int n_credito;
};

typedef struct universidade curso;
typedef struct aluno dados;

int main(){
    curso uni[30];
    dados alunos[1000];
    int i, j, n, matriculados;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d%lf", &uni[i].cod_curso, &uni[i].credito);
        getchar();
        scanf("%[^\n]", uni[i].nome_curso);
    }
    scanf("%d", &matriculados);
    getchar();

    for(i=0; i<matriculados; i++){
        scanf("%[^\n]", alunos[i].name_student);
        //getchar();
        scanf("%d" &alunos[i].cod_curso);
        scanf("%d", &alunos[i].n_credito);
    }

    for(i=0; i<matriculados; i++){
        for(j=0; j<n; j++){
            if(alunos[i].cod_curso == uni[j].cod_curso) printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", alunos[i].name_student, uni[j].nome_curso, alunos[i].n_credito, uni[j].credito, alunos[i].n_credito*uni[j].credito);
        }
    }

    return 0;
}