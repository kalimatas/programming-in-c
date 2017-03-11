#include <math.h>
#include <stdio.h>
#include <gsl/gsl_version.h>

int main()
{
    printf("%s\n", GSL_VERSION);
    printf("%g\n", erf(1.96 * sqrt(1/2.)));
}
