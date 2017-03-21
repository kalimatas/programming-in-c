#include <stdio.h>
#include <string.h>

char *mystrdup(char const *in)
{
    if (!in) return NULL;
    char *out;
    asprintf(&out, "%s", in);

    return out;
}

int main()
{
    char *s1 = "Thread";

    char *s2;
    asprintf(&s2, "Floss");

    char *s4 = strdup(s1);
    s4[0] = 'f';

    char *s5 = mystrdup(s1);
    s5[0] = 'A';

    printf("%s\n", s1);
    printf("%s\n", s4);
    printf("%s\n", s5);
}
