#include <stdio.h>

int main(void){
    int num, cat1, cat2, hipo;

    scanf("%d", &num);

    for(hipo=1; hipo<=num; hipo++){
        for(cat1=1; cat1<=hipo; cat1++){
            for(cat2=cat1; cat2<=hipo; cat2++){
                if(cat1*cat1 + cat2*cat2 == hipo*hipo){
                    printf("hipotenusa = %d, catetos %d e %d\n", hipo, cat1, cat2);
                }
            }
        }
    }



    return 0;
}