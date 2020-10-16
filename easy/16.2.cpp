#include<stdio.h>
int main(){
    int a[12];
    int array[] = {1,2,3,4,5,6};
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(array));
    printf("%d\n", sizeof(array[1]));
    return 0;
}