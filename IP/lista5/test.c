#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 1000
#define MAX_NOME 101
#define MAX_CPF 12

typedef struct {
    char nome[MAX_NOME];
    char cpf[MAX_CPF];
    int vezes;
    float val_med;
    float atr;
} Cliente;

int cmp_cliente(const void* a, const void* b) {
    Cliente* ca = (Cliente*) a;
    Cliente* cb = (Cliente*) b;
    int cmp_cpf = strcmp(ca->cpf, cb->cpf);
    if (cmp_cpf != 0) {
        return cmp_cpf;
    } else if (ca->vezes != cb->vezes) {
        return cb->vezes - ca->vezes;
    } else if (ca->val_med != cb->val_med) {
        return cb->val_med - ca->val_med;
    } else {
        return ca->atr - cb->atr;
    }
}

int main() {
    Cliente clientes[MAX_CLIENTES];
    int n_clientes;
    scanf("%d", &n_clientes);
    for (int i = 0; i < n_clientes; i++) {
        scanf("%s %s %d %f %f", clientes[i].nome, clientes[i].cpf, &clientes[i].vezes, &clientes[i].val_med, &clientes[i].atr);
    }
    qsort(clientes, n_clientes, sizeof(Cliente), cmp_cliente);
    for (int i = 0; i < n_clientes; i++) {
        printf("%s %s %d %.2f %.2f\n", clientes[i].nome, clientes[i].cpf, clientes[i].vezes, clientes[i].val_med, clientes[i].atr);
    }
    return 0;
}
