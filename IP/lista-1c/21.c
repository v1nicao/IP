#include <stdio.h>
 
int main() {
 
    int A, B, C, MMC = 1, bigger = 0, i;
 
    scanf("%d %d %d", &A, &B, &C);
 
    if(C > B && B > A) {
        bigger = C;
    }
    else if(B > C && B > A) {
        bigger = B;
    }
    else {
        bigger = A;
    }
 
    for(i = 2; i <= bigger; i++) {
        if(i >= 3 && A % (i - 1) == 0 || i >= 3 && B % (i - 1) == 0 || i >= 3 && C % (i - 1) == 0)
        {
            if(A == 1 && B == 1 && C == 1) {
                printf("MMC: %d\n", MMC);
                return 0;
            }
            else i--;
 
        }
 
        if(A % i == 0 || B % i == 0 || C % i == 0) {
 
            printf("%d %d %d :%d\n", A, B, C, i);
 
            if(A % i == 0){
                A/= i;
            }
            if(B % i == 0) {
                B/= i;
            }
            if(C % i == 0) {
                C/= i;
            }
            MMC *= i;
        }
 
    }
 
    printf("MMC: %d\n", MMC);
 
    return 0;
}