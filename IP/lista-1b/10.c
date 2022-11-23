#include <stdio.h>
 
int main(){
    double num1, num2, num3;
 
    scanf("%lf %lf %lf", &num1, &num2, &num3);
 
    //num1 maior
    if(num1 < num2 && num1 < num3){
        if(num2 < num3){
            printf("%.2lf, %.2lf, %.2lf\n", num1, num2, num3);
        } else {
            printf("%.2lf, %.2lf, %.2lf\n", num1, num3, num2);
        }
    } 
    //num2 maior
    if(num2 < num1 && num2 < num3){
        if(num1 < num3){
            printf("%.2lf, %.2lf, %.2lf\n", num2, num1, num3);
        } else {
            printf("%.2lf, %.2lf, %.2lf\n", num2, num3, num1);
        }
    }
    //num3 maior 
    if(num3 < num1 && num3 < num2){
        if(num2 < num1){
            printf("%.2lf, %.2lf, %.2lf\n", num3, num2, num1);
        } else {
            printf("%.2lf, %.2lf, %.2lf\n", num3, num1, num2);
        }
    }
 
 
    return 0;
}