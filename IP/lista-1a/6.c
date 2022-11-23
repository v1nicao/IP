#include <stdio.h>
 
int main(){
    int Hr, Min, Seg, Temp_seg;
 
    scanf("%d %d %d", &Hr, &Min, &Seg);
 
    Temp_seg = ((Hr*60*60)+(Min*60)+Seg);
 
    printf("O TEMPO EM SEGUNDOS E = %d\n", Temp_seg);
 
 
 
    return 0;
}