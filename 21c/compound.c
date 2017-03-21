#include <stdio.h>
#include <math.h>

double sum_array(double in[])
{
    double out = 0.0;
    for (int i = 0; !isnan(in[i]); i++) out += in[i];
    return out;
}

#define sum(...) sum_array((double[]){__VA_ARGS__, NAN})

struct in {
    int one;
    int two;
};

long int sumIntBase(struct in input)
{
    return (long int) input.one + input.two;
}

#define sumInt(...) sumIntBase((struct in){.one=1, .two=2, __VA_ARGS__})

int main()
{
    double list[] = {1.1, 2.2, 3.3};
    printf("%lu\n", sizeof(list));

    double *lPtr = (double[]){1.1, 2.2, 3.3};
    printf("%lu\n", sizeof(lPtr));

    printf("%g\n", sum(1.0, 3.2, 4.4));

    printf("%ld\n", sumInt(.one=24));
}
