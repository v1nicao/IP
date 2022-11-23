#include <stdio.h>

int main(void){
    int cod, n_depe;
    double sala_min, sala_fun, taxa;
    double impo_liq, imp_pago, impo_bruto;

    scanf("%d %lf %d %lf %lf", &cod, &sala_min, &n_depe, &sala_fun, &taxa);

    if(sala_fun <= (sala_min*5)){
        impo_bruto = 0;
        impo_liq = impo_bruto - (n_depe*300);
        imp_pago = impo_liq - (sala_fun*(taxa/100));

        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\n", cod, impo_bruto, impo_liq, imp_pago);
        if(imp_pago<0){
            printf("IMPOSTO A RECEBER\n");
        } else if(imp_pago == 0){
            printf("IMPOSTO QUITADO\n");
        } else {
            printf("IMPOSTO A PAGAR\n");
        }

    }
    if(sala_fun > (sala_min*5)){
        if(sala_fun >= (sala_min*12)){
            impo_bruto = (sala_fun*0.12);
            impo_liq = impo_bruto - (n_depe*300);
            imp_pago = impo_liq - (sala_fun*(taxa/100));

            printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\n", cod, impo_bruto, impo_liq, imp_pago);
            if(imp_pago<0){
                printf("IMPOSTO A RECEBER\n");
            } else if(imp_pago == 0){
                printf("IMPOSTO QUITADO\n");
            } else {
                printf("IMPOSTO A PAGAR\n");
            }
        }
        else {
            impo_bruto = sala_fun*0.08;
            impo_liq = impo_bruto - (n_depe*300);
            imp_pago = impo_liq - (sala_fun*(taxa/100));

            printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\n", cod, impo_bruto, impo_liq, imp_pago);
            if(imp_pago<0){
                printf("IMPOSTO A RECEBER\n");
            } else if(imp_pago == 0){
                printf("IMPOSTO QUITADO\n");
            } else {
                printf("IMPOSTO A PAGAR\n");
            }
        
        }

    }


    return 0;
}