#include <stdio.h>

int main() {
    float v[10];
    for (int i = 0; i < 10; i++)
        printf("%p\n", (void *)&v[i]);
    return 0;
}