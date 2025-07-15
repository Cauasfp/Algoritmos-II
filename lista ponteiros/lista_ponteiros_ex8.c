#include <stdio.h>

void preencher(int *v, int valor, int tamanho) {
    int *fim = v + tamanho;
    while (v < fim) {
        *v = valor;
        v++;
    }
}

int main() {
    int v[5];
    preencher(v, 7, 5);
    for (int i = 0; i < 5; i++)
        printf("%d\n", v[i]);
    return 0;
}