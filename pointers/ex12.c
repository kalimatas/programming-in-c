#include <stdio.h>

int main(void)
{
    char *message = "message\n";
    char message2[] = "message2\n";
    char *format = "x = %i\n";
    int x = 100;

    printf("%s", message);
    printf("%s", &message2[0]);
    printf("%s", message2 + 4);
    printf("%s", &message2[4]);

    return 0;
}
