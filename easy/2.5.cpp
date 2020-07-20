#include <stdio.h>

int main() {
    int hour = 11;
    int minute = 59;
    printf("%d hours and %d percent of an hour\n", hour, minute * 100 / 60);
    printf("%d and %f hours\n", hour, minute / 60.0);
}
