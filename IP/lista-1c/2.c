#include <stdio.h>
 
 
int main(){
    int loop, i;
    double Fa, Cel;
    
    scanf("%d", &loop);
    
    for(i=0; i<loop; i++){
        scanf("%lf", &Fa);
        
        Cel = (5*(Fa-32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", Fa, Cel);
    }
    
    return 0;
}