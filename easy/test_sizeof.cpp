#include <stdio.h>

int main(void)
{
    short tShort;
    int tInt;
    long tLong;
    float tFloat;
    double tDouble;
    char tChar;
    printf("%lu\n", sizeof(tShort));
    printf("%lu\n", sizeof(tInt));
    printf("%lu\n", sizeof(tLong));
    printf("%lu\n", sizeof(tFloat));
    printf("%lu\n", sizeof(tDouble));
    printf("%lu\n", sizeof(tChar));

    return 0;
}