#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union word {
    char c[3];
    int i;
} chinese;

int main(void) {
    printf("\u4f60\n");

    chinese.i = 0xA0BDE4;
    printf("%d=%s\n", chinese.i, chinese.c);

    strcpy(chinese.c, "你");
    printf("%d=%s\n", chinese.i, chinese.c);
}
