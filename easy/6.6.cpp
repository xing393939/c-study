#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i * j == 9) {
                goto error;
            }
        }
    }
    printf("done");
    error:
    printf("error");
    return 0;
}