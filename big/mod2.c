#include <stdbool.h>
#include "mod1.h"
#include "mod2.h"

extern int globalInt;
// extern int globalInThisFile; // won't compile

counter initCounter(void)
{
    counter c = 23 + globalInt;

    return c;
}
