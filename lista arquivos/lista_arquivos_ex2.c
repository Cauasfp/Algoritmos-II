#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *clientes = fopen("clientes.txt", "a");
    int cod;
    char nome[100], endereco[100], fone[20];
    scanf("%d%*c", &cod);
    fgets(nome, sizeof(nome), stdin);
    fgets(endereco, sizeof(endereco), stdin);
    fgets(fone, sizeof(fone), stdin);
    fprintf(clientes, "%d|%s|%s|%s", cod, nome, endereco, fone);
    fclose(clientes);
    return 0;
}