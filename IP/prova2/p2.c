#include <stdio.h>
 
int main(){
    int qtd_curso, num_curso, qtd_aluno, cod_student, i, j, aproved, negado ;
    char choose;
    double porcentagem_alunos, aux=0, temp=0, best;
 
    scanf("%d", &qtd_curso);
 
    for(i=0; i<qtd_curso; i++){
        scanf("%d%d", &num_curso, &qtd_aluno);
        //scanf("%d", &qtd_aluno);
 
        //printf("Curso %d\n", num_curso);
 
        for(j=0; j<qtd_aluno; j++){
            scanf("%d %c", &cod_student, &choose);
            if(choose == 'S'){
                aproved+=1;
                }
            porcentagem_alunos = (aproved/(1.0*j))*100;
            //aux = porcentagem_alunos;
            temp = j*porcentagem_alunos;
            //qtd_aluno--;
            if(temp > aux) {
                aux = temp;
                best = num_curso;
            }
        }
        //aux = qtd_aluno;
        printf("Curso %d\n", num_curso);
        printf("Porcentagem de alunos que farao o exame %.2lf\n", porcentagem_alunos);
        aproved = 0;
        //if(p)
    }
    printf("O curso com o maior numero de alunos escolhidos e = %.0lf\n", best);
 
 
 
    return 0;
}