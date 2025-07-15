#include <stdio.h>
#include <string.h>

int cliente_existe(int cod) {
    FILE *clientes = fopen("clientes.txt", "r");
    int c;
    while (fscanf(clientes, "%d|", &c) == 1) {
        if (c == cod) {
            fclose(clientes);
            return 1;
        }
        char linha[300];
        fgets(linha, sizeof(linha), clientes);
    }
    fclose(clientes);
    return 0;
}

int main() {
    int cod;
    char num_doc[20], valor[20], emissao[20], venc[20];
    scanf("%s %s %s %s %d", num_doc, valor, emissao, venc, &cod);
    if (cliente_existe(cod)) {
        FILE *rec = fopen("recebimentos.txt", "a");
        fprintf(rec, "%s|%s|%s|%s|%d
", num_doc, valor, emissao, venc, cod);
        fclose(rec);
    }
    return 0;
}