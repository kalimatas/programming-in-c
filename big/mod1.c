#include "mod1.h"

int globalInt = 80;
static int globalInThisFile = 71;

static int onlyFromThisFile(void)
{
    return 22;
}

int r(void)
{
    int i = 42;

    return i + globalInThisFile + onlyFromThisFile();
}
