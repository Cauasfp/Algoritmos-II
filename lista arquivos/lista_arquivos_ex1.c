#include <stdio.h>

int main() {
    FILE *clientes = fopen("clientes.txt", "w");
    FILE *recebimentos = fopen("recebimentos.txt", "w");
    if (clientes && recebimentos) {
        fclose(clientes);
        fclose(recebimentos);
    }
    return 0;
}