#include <stdio.h>

int main() {
    int v[5], *p = v;
    for (int i = 0; i < 5; i++)
        scanf("%d", p + i);
    for (int i = 0; i < 5; i++)
        if (*(p + i) % 2 == 0)
            printf("%p\n", (void *)(p + i));
    return 0;
}