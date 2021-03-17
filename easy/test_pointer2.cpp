#include <stdio.h>
#include <elf.h>
#include <malloc.h>
#include <unistd.h>

static const char *msg[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday"};
void get_a_day(const char **pp) {
    static int i = 0;
    *pp = msg[i % 7];
    i++;
}

void alloc_unit(Elf64_Sym **pp) {
    Elf64_Sym *p = (Elf64_Sym *) malloc(sizeof(Elf64_Sym));
    if (p == NULL) {
        printf("out of memory\n");
        _exit(0);
    }
    p->st_info = 31;
    *pp = p;
}

int main(void) {
    const char *firstday = NULL;
    get_a_day(&firstday);
    printf("%s\n", firstday);

    Elf64_Sym *a = NULL;
    alloc_unit(&a);
    printf("%u\n", a->st_info);

    return 0;
}