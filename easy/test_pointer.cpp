#include <stdio.h>

int main(void) {
    int i = 108;
    int *pi = &i;
    int **ppi = &pi;
    char *s1[] = {"one", "two", "three"};

    printf("%p\n", pi);
    printf("%p\n", *ppi);
    printf("%d\n", **ppi);

    printf("%s\n", s1[0]);
    printf("%s\n", s1[1]);
    printf("%s\n", s1[2]);

    return 0;
}