#include <stdio.h>
 
int main() {
    double num = 0;
    int fator = 0, i, den = 0, divisor = 100;
 
    scanf("%lf", &num);
 
    fator = num * 100;
 
    if(num / fator == 1) {
        den = num * 100;
    }
    else {
        den = num * 1000;
        divisor = 1000;
    }
 
    for(i = 10; i > 1; i--) {
        if(den % (i + 1) == 0 && divisor % (i + 1) == 0) {
            i++;
        }
 
        if(den % i == 0 && divisor % i == 0) {
                den /= i;
                divisor /= i;
        }
    }
    printf("%d/%d", den, divisor);
    
    return 0;
}