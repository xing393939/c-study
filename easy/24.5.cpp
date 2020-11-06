#include <stdio.h>
#include <string.h>

typedef int (*cmp_t)(void *a, void *b);

void *max(void **data, int n, cmp_t cmp) {
    void *p = data[0];
    for (int i = 1; i < n; i++) {
        if (cmp(data[i], p) == 1) {
            p = data[i];
        }
    }
    return p;
}

typedef struct {
    const char *name;
    int score;
} student_t;

int cmp_student(void *a, void *b) {
    if (((student_t *) a)->score > ((student_t *) b)->score)
        return 1;
    else if (((student_t *) a)->score == ((student_t *) b)->score)
        return 0;
    else
        return -1;
}

int cmp_char(void *a, void *b) {
    return strcmp((char *) a, (char *) b) > 0 ? 1 : -1;
}

int main(void) {
    student_t list[4] = {{"Tom",   68},
                         {"Jerry", 72},
                         {"Moby",  60},
                         {"Kirby", 89}};
    student_t *plist[4] = {&list[0], &list[1], &list[2], &list[3]};
    student_t *pmax = (student_t *) max((void **) plist, 4, cmp_student);
    printf("%s gets the highest score %d\n", pmax->name, pmax->score);

    char *plist2[4] = {"5", "9", "1", "4"};
    printf("%s\n", (char *) max((void **) plist2, 4, cmp_char));

    return 0;
}