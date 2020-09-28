#include <stdio.h>

int add_range(int low, int high) {
    int i, sum;
    for (i = low; i <= high; i++)
        sum = sum + i;
    return sum;
}

int print_hello()
{
    int i;
    char str[6] = "hello";
    char reverse_str[6] = "";

    printf("%s\n", str);
    for (i = 0; i < 5; i++)
        reverse_str[4-i] = str[i];
    printf("%s\n", reverse_str);
    return 0;
}

int main(void) {
    int result[100];
    result[0] = add_range(1, 10);
    result[1] = add_range(1, 100);
    printf("result[0]=%d\nresult[1]=%d\n", result[0], result[1]);

    print_hello();
    return 0;
}