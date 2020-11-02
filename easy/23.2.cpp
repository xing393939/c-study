#include <stdio.h>

int *swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
    return px;
}

int main(void)
{
    int i = 10, j = 20;
    int *p = swap(&i, &j);
    printf("now i=%d j=%d *p=%d\n", i, j, *p);


    int a = 1;
    a = a + 1;
    int *pa = &a;
    int *pb = pa;
    *pb = 3;
    printf("now a=%d *p=%d\n", a, *pb);
    return 0;
}