#include <stdio.h>

#define MAX(a, b) ((a)>(b)?(a):(b))
#define PRINT_INT(n) printf(#n " = %d\n", n)
#define MK_ID(n) i##n

#define debug1(format, args...) printf(format, args)
#define debug2(format, args...) printf(format, ##args)
#define SHOW_LIST(...) printf(#__VA_ARGS__"\n")

int main(void) {
    int a = 2;
    int b = 1;
    MAX(++a, ++b);
    PRINT_INT(a);
    PRINT_INT(b);
    int MK_ID(1) = 3;
    PRINT_INT(MK_ID(1));

    debug1("a=%d\n", a);
    debug2("hello world\n");
    SHOW_LIST(a, b);

    printf("%s\n", __func__);

    return 0;
}