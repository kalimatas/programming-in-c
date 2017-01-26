#include <stdio.h>

int main(void)
{
    struct packed_struct {
        unsigned int :3;
        unsigned int f1:1;
        unsigned int f2:1;
        unsigned int f3:1;
        unsigned int type:3;
        unsigned int index:18;
    };

    struct packed_struct pd;

    pd.f1 = 0;
    pd.f2 = 1;

    return 0;
}
