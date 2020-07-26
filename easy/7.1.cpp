#include <stdio.h>

enum coordinate_type { RECTANGULAR = 1, POLAR };

int main(void) {
    struct complex_struct {
        double x, y;
    } s1, s2;
    struct complex_struct s3{.x = 3.0};
    double x = 3.0;
    s1.x = x;
    s1.y = 4.0;
    s2.x = 1.0;

    printf("s1: %f, %f\n", s1.x, s1.y);
    printf("s2: %f, %f\n", s2.x, s2.y);
    printf("s3: %f, %f\n", s3.x, s3.y);
    printf("----------------------------------\n");

    int RECTANGULAR;
    printf("%d %d %d\n", RECTANGULAR, POLAR);

    return 0;
}