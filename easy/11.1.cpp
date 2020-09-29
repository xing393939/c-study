#include <stdio.h>

#define LEN 5
int a[LEN] = {10, 5, 2, 4, 7};

/*
 * 插入排序：玩扑克牌，取一张新牌然后插入
 * 新牌下标从1到n-1，新牌左边都是排好序的
 */
void insertion_sort(void) {
    int i, j, key;
    for (j = 1; j < LEN; j++) {
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
        printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
    }
}

int main(void) {
    insertion_sort();
    return 0;
}