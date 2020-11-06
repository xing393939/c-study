#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *msg[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday"};
typedef struct {
    int number;
    char *msg;
} unit_t;

// pp的指向指针的指针，*pp表示指针本身
void get_a_day(const char **pp) {
    static int i = 0;
    *pp = msg[i % 7];
    i++;
}

void alloc_unit(unit_t **pp) {
    unit_t *p = (unit_t *) malloc(sizeof(unit_t));
    if (p == NULL) {
        printf("out of memory\n");
        exit(1);
    }
    p->number = 3;
    p->msg = (char *) malloc(20);
    strcpy(p->msg, "Hello World!");
    *pp = p;
}

void free_unit(unit_t *p) {
    free(p->msg);
    free(p);
}

int main(void) {
    const char *firstday = NULL;
    const char *secondday = NULL;
    get_a_day(&firstday);
    get_a_day(&secondday);
    printf("%s\t%s\n", firstday, secondday);

    unit_t *p = NULL;
    alloc_unit(&p);
    printf("number: %d\nmsg: %s\n", p->number, p->msg);
    free_unit(p);
    return 0;
}
