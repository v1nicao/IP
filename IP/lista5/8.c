    #include <stdio.h>
     
    struct dados {
        int matricula, dia, mes, ano;
        char ch[200];
    };
     
    typedef struct dados info;
     
    int main (){
        int n, c1, c2;
        info a[30];
        info b;
     
        scanf("%d", &n);
     
        for(c1=0; c1<n; c1++) {
            scanf("%d%d%d%d%*c", &a[c1].matricula, &a[c1].dia, &a[c1].mes, &a[c1].ano);
            scanf("%[^\n]", a[c1].ch);
        }
     
        for(c1=0; c1<n; c1++) {
            for(c2=c1+1; c2<n; c2++) {
                if(a[c1].ano<a[c2].ano){
                    b=a[c1];
                    a[c1]=a[c2];
                    a[c2]=b;
                }
            }  
        }
        for(c1=0; c1<n; c1++) {
            for(c2=c1+1; c2<n; c2++) {
                if(a[c1].ano==a[c2].ano){
                    if(a[c1].mes<a[c2].mes) {
                        b=a[c1];
                        a[c1]=a[c2];
                        a[c2]=b;
                    }
                    if(a[c1].mes==a[c2].mes && a[c1].dia<a[c2].dia) {
                        
                        b=a[c1];
                        a[c1]=a[c2];
                        a[c2]=b;
                    }
                }
            }  
        }
     
     
        for(c1=0; c1<n; c1++) {
            printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", a[c1].matricula, a[c1].ch, a[c1].dia, a[c1].mes, a[c1].ano);
        }
    }