#include <stdio.h>
 
int main(){
    //a variavel "acima" e "aux_ci" sao os valores que ultrapassam o valor limite do imposto
    //ex: 3002 ultrapassa o valor 2 do limite, nesse caso ele vai ser salvo na variavel acima
    double salario, taxa, taxa1, taxa2, imposto, acima, aux_ci;
 
    scanf("%lf", &salario);
 
    if(salario <= 2000){
        printf("Isento\n");
    } else if(salario > 2000 && salario <= 3000){
        taxa = (salario-2000)*0.08;
        //imposto = salario + taxa;
        printf("R$ %.2lf\n", taxa);
    } else if(salario > 3000 && salario <= 4500){
        //taxa1 = ((salario-3000)*0.18)+((salario-2000)*0.08);
        acima = salario-3000;
        taxa = acima*0.18;
        taxa1 = ((salario-2000)-acima)*0.08;
        imposto = taxa + taxa1;
        //taxa = (salario-2000)*0.08;
        printf("R$ %.2lf\n", imposto);
    } else if(salario > 4500){
        //taxa = ((salario-4500)*0.28)+((salario-3000)*0.18)+((salario-2000)*0.0
        acima = salario-4500;
        taxa = acima*0.28;
        aux_ci = (salario-3000);
        taxa1 = ((aux_ci)-acima)*0.18;
        taxa2 = (((salario-2000)-acima)-aux_ci)*0.08;
        imposto = taxa+taxa1+taxa2;
        printf("R$ %.2lf\n", imposto);
    }
 
 
    return 0;
}