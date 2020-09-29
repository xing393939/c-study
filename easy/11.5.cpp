#define NDEBUG
#include <stdio.h>
#include <assert.h>

int doSomeThing()
{
    return 0;
}

int main(void)
{
    assert(doSomeThing());
    printf("%s\n", "done");
    return 0;
}