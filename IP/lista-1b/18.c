/******************************************************************************
 
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
 
*******************************************************************************/
#include <stdio.h>
 
int main(void) {
    float a, b, c;
    double PP, AR, m1, m2, m3, big1, big2, big3;
    
    scanf("%f %f %f", &a, &b, &c);
    
    m1 = b-c;
    m2 = a-c;
    m3 = a-b;
    big1 = b+c;
    big2 = a+c;
    big3 = a+b;
    
    if(m1 < a && a <big1){
        if(m2 < b && b < big2){
            if(m3 < c && c < big3){
                PP = a+b+c;
                printf("Perimetro = %.1lf\n", PP);
            }
        }
    } else {
        AR = ((a+b)*c)/2;
        printf("Area = %.1lf\n", AR);
    }
    
    
    
    return 0;
}