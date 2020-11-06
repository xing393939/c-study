#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcd";
    char str2[2];
    printf("address_str1= %p\n", str1);
    printf("address_str2= %p\n", str2);

    //内存越界，占用了str1的内存
    strcpy(str2, "123");

    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);

    return 0;
}