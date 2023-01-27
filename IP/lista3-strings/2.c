#include <stdio.h>
#include <string.h>

int main(){
    char led[1110];
    int loop, i, k;
    double soma_led=0;

    scanf("%d", &loop);

    for(i=0; i<loop; i++){
        scanf("%s", led);

        for(k=0; k<strlen(led); k++){
            //scanf("%s", led[k]);   

            switch(led[k]){
                case '1':
                soma_led+=2;
                break;

                case '2':
                soma_led+=5;
                break;

                case '3':
                soma_led+=5;
                break;

                case '4':
                soma_led+=4;
                break;

                case '5':
                soma_led+=5;
                break;

                case '6':
                soma_led+=6;
                break;

                case '7':
                soma_led+=3;
                break;

                case '8':
                soma_led+=7;
                break;

                case '9':
                soma_led+=6;
                break;

                case '0':
                soma_led+=6;
                break;
            }
        }
        printf("%.0lf leds\n", soma_led);
        soma_led=0;
    }
    return 0;
}