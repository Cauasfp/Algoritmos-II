#include "biblioteca_funcoes.h"

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    return 0;
}

int multiplicar(int a, int b) {
    return a * b;
}

int fatorial(int n) {
    int i, fat = 1;
    for (i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int primo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

float media(float *vetor, int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma / tamanho;
}

int maior(int *vetor, int tamanho) {
    int m = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > m) {
            m = vetor[i];
        }
    }
    return m;
}