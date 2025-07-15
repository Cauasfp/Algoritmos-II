#include <stdio.h>

void imprimir(int *v, int tamanho) {
    int *fim = v + tamanho;
    while (v < fim) {
        printf("%d\n", *v);
        v++;
    }
}

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    imprimir(v, 5);
    return 0;
}