#include <stdio.h>
#include <math.h>

/*
 * printf函数必须包含stdio.h，要使用数学函数必须包含math.h
 */

int main() {
    int hour = 11;
    int minute = 59;
    printf("%d hours and %d percent of an hour\n", hour, minute * 100 / 60);
    printf("%d and %f hours\n", hour, minute / 60.0);
    printf("%c\n", 'a'+1);

    double pi = 3.1416;
    printf("sin(pi/2)=%f\nln1=%f\n", sin(pi/2), log(1.0));
}
