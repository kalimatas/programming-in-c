#include <stdio.h>

int main(void)
{
    char *l[] = {"first", "second", "third", NULL};
    for (char **p = l; *p != NULL; p++)
        printf("%s\n", *p);

    return 0;
}
