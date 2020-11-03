#include <stdio.h>

int main(int argc, char *argv[]) {
    int a[10] = {10, 11, 12, 13};
    int *pa = &a[0]; //等价于int *pa = a;
    pa++;

    printf("%d %d %d\n", a[0], a[1], a[2]);
    printf("*pa=%d\n", *pa);
    printf("*pa=%d\n", pa[-1]);

    int b[5][10];
    int (*pb)[10] = &b[0];
    b[1][1] = 1;
    printf("%d %d %d\n", pb[1][0], pb[1][1], pb[1][2]);

    for (int i = 0; i < argc; i++) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }
    return 0;
}