#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int number;
    char *msg;
} unit_t;

int main(void) {
    char a[5];
    printf("a: %s\n", strcpy(a, "abcde"));

    unit_t *p = (unit_t *) malloc(sizeof(unit_t));
    if (p == NULL) {
        printf("out of memory\n");
        exit(1);
    }
    p->number = 3;
    p->msg = (char *) malloc(20);
    strcpy(p->msg, "Hello world!");
    printf("number: %d\nmsg: %s\n", p->number, p->msg);
    free(p->msg);
    free(p);

    return 0;
}
