#include <stdio.h>
#include <math.h>
// 结构体complex_struct.t分直角坐标和极坐标2种
enum coordinate_type { RECTANGULAR, POLAR };
struct complex_struct {
    enum coordinate_type t;
    double a, b;
};

double rect_real_part(struct complex_struct z)
{
    return z.a;
}

double rect_img_part(struct complex_struct z)
{
    return z.b;
}

double rect_magnitude(struct complex_struct z)
{
    return sqrt(z.a * z.a + z.b * z.b);
}

double rect_angle(struct complex_struct z)
{
    double PI = acos(-1.0);

    if (z.a > 0)
        return atan(z.b / z.a);
    else
        return atan(z.b / z.a) + PI;
}

double pol_real_part(struct complex_struct z)
{
    return z.a * cos(z.b);
}

double pol_img_part(struct complex_struct z)
{
    return z.a * sin(z.b);
}

double pol_magnitude(struct complex_struct z)
{
    return z.a;
}

double pol_angle(struct complex_struct z)
{
    return z.b;
}

double (*real_part_tbl[])(struct complex_struct) = { rect_real_part, pol_real_part };
double (*img_part_tbl[])(struct complex_struct) = { rect_img_part, pol_img_part };
double (*magnitude_tbl[])(struct complex_struct) = { rect_magnitude, pol_magnitude };
double (*angle_tbl[])(struct complex_struct) = { rect_angle, pol_angle };

#define real_part(z) real_part_tbl[z.t](z)  //横轴距离
#define img_part(z) img_part_tbl[z.t](z)    //纵轴距离
#define magnitude(z) magnitude_tbl[z.t](z)  //到原点距离
#define angle(z) angle_tbl[z.t](z)          //夹角度数

int main(int argc, char *argv[]) {
    complex_struct s1 = {.t = RECTANGULAR, .a = 2, .b = 2};
    printf("%f\n", real_part(s1));
    printf("%f\n", img_part(s1));
    printf("%f\n", magnitude(s1));
    printf("%f\n", angle(s1));
    return 0;
}