#include <stdio.h>

#include "mod1.h"
#include "mod2.h"

int main(void)
{
    printf("r(): %i\n", r());

    counter c = initCounter();
    printf("Counter: %i\n", c);
}
