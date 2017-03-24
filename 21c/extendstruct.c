#include <stdio.h>

struct point {
    double x, y;
};

struct ext_point {
    struct point;
    double z;
};

struct union_point {
    union {
        struct point;
        struct point p;
    };
    double z;
};

int main(void)
{
    struct union_point p = {.x = 3, .y = 0, .z = 4};
    printf("%g %g %g\n", p.x, p.y, p.z);
    printf("%g %g %g\n", p.p.x, p.p.y, p.z);
}
