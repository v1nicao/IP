//este código foi corrigido depois do fechamento da lista 4, juntamente com o chat gpt
//(ultima tentativa de corrigir o código: 19/02/2023)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n_student, min_presence, i, present_count = 0;

    scanf("%d %d", &n_student, &min_presence);
    int student_arrival_time[n_student];

    for(i = 0; i < n_student; i++) {
        scanf("%d", &student_arrival_time[i]);
        if(student_arrival_time[i] <= 0) {
            present_count++;
        }
    }

    if(present_count >= min_presence) {
        printf("NAO\n");
        for(i = 0; i < n_student; i++) {
            if(student_arrival_time[i] <= 0) {
                printf("%d\n", i+1);
            }
        }
    } else {
        printf("SIM\n");
    }

    return 0;
}
