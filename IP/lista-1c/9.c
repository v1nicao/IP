#include <stdio.h>

int main(){
    double fat = 1, i;
    int num;
    scanf("%d", &num);
    
    i = num;

    if(i != 0){
        for(fat=1; i>1; i=i-1){
            fat = i*fat;
            //num = num-1;
            //num--;
        }
        printf("%d! = %.0lf\n", num, fat);

    } else {
        printf("%d! = 1\n", num);
    }
    return 0;
}