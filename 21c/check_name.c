#include <stdbool.h>
#include <strings.h>

bool check_name(char const **in)
{
    return !strcasecmp(in[0], "Iggy") && !strcasecmp(in[1], "Pop");
}

int main(int argc, char **argv)
{
    if (argc < 2) return 0;
    return check_name((char const **)&argv[1]);
}
