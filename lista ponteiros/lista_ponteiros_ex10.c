#include <stdio.h>

int main() {
    int a;
    int *b;
    int **c;
    int ***d;
    scanf("%d", &a);
    b = &a;
    c = &b;
    d = &c;
    printf("%d\n", 2 * (*b));
    printf("%d\n", 3 * (**c));
    printf("%d\n", 4 * (***d));
    return 0;
}