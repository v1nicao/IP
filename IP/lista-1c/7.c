#include <stdio.h>
 
int main(){
    /* NF nota final
    MP media aritmetica da prova
    ML media aritmetica das listas
    NT nota do trabalho final */
    double NF, MP, ML, NT;
    double NP = 0, temp, np, NL = 0;
    int mat, freq, i;
 
    scanf("%d ", &mat);
    while (mat != -1){
    
    for(i=0; i<8; i++){
        scanf("%lf", &NP);
        //temp = NP;
        //NP = 0;
        np += NP; //mesma coisa que np = np + NP
    }
    
    MP = np/8;
    
    for(i=0; i<5; i++){
        scanf("%lf", &NL);
        //temp = NL;
        //NL = 0;
        temp += NL;
    }
 
    ML = temp/5;
    scanf("%lf %d", &NT, &freq);
 
 
    NF = (0.7*MP) + (0.15*ML) + (0.15*NT);
 
    
 
    if(NF >= 6 && freq >= 96) {
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", mat, NF);
    }  if (NF < 6 && freq >= 96) {
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", mat, NF);
    }  if (freq < 96 && NF >= 6) {
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", mat, NF);
    }  /*if (freq >= 96) {
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", mat, NF);
    }
    */ if (freq < 96 && NF < 6){
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", mat, NF);
    }  /*if (freq >= 96 && NF >= 6){
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", mat, NF);
    }*/
    scanf("%d", &mat);
    temp =0;
    np = 0;
    }
 
    return 0;
}