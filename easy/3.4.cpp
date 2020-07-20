#include <stdio.h>

void foo(void)
{
    int i;
    printf("%d\n", i);
    i = 777;
}

int main(void)
{
    foo();
    printf("hello\n"); //去掉这一行，下面的foo()打印的是777
    foo();

    return 0;
}