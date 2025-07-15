#include <stdio.h>

int ocorre(char *s1, char *s2) {
    while (*s1) {
        char *p1 = s1, *p2 = s2;
        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (*p2 == '\0')
            return 1;
        s1++;
    }
    return 0;
}

int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);
    if (ocorre(s1, s2))
        printf("Sim\n");
    else
        printf("Nao\n");
    return 0;
}